; ModuleID = 'C:/Users/PX/AppData/Roaming/Xilinx/Vitis/Lab1/solution1/.autopilot/db/a.g.ld.5.gdce.bc'
source_filename = "llvm-link"
target datalayout = "e-m:e-i64:64-i128:128-i256:256-i512:512-i1024:1024-i2048:2048-i4096:4096-n8:16:32:64-S128-v16:16-v24:32-v32:32-v48:64-v96:128-v192:256-v256:256-v512:512-v1024:1024"
target triple = "fpga64-xilinx-none"

; Function Attrs: noinline
define void @apatb_matrixMultiplication_ir([64 x i8]* noalias nocapture nonnull readonly "fpga.decayed.dim.hint"="64" %A, [64 x i8]* noalias nocapture nonnull readonly "fpga.decayed.dim.hint"="64" %B, [64 x i32]* noalias nocapture nonnull "fpga.decayed.dim.hint"="64" %AB) local_unnamed_addr #0 {
entry:
  %malloccall = tail call i8* @malloc(i64 4096)
  %A_copy = bitcast i8* %malloccall to [64 x [64 x i8]]*
  %malloccall1 = tail call i8* @malloc(i64 4096)
  %B_copy = bitcast i8* %malloccall1 to [64 x [64 x i8]]*
  %malloccall2 = tail call i8* @malloc(i64 16384)
  %AB_copy = bitcast i8* %malloccall2 to [64 x [64 x i32]]*
  %0 = bitcast [64 x i8]* %A to [64 x [64 x i8]]*
  %1 = bitcast [64 x i8]* %B to [64 x [64 x i8]]*
  %2 = bitcast [64 x i32]* %AB to [64 x [64 x i32]]*
  call fastcc void @copy_in([64 x [64 x i8]]* nonnull %0, [64 x [64 x i8]]* %A_copy, [64 x [64 x i8]]* nonnull %1, [64 x [64 x i8]]* %B_copy, [64 x [64 x i32]]* nonnull %2, [64 x [64 x i32]]* %AB_copy)
  %3 = getelementptr inbounds [64 x [64 x i8]], [64 x [64 x i8]]* %A_copy, i32 0, i32 0
  %4 = getelementptr inbounds [64 x [64 x i8]], [64 x [64 x i8]]* %B_copy, i32 0, i32 0
  %5 = getelementptr inbounds [64 x [64 x i32]], [64 x [64 x i32]]* %AB_copy, i32 0, i32 0
  call void @apatb_matrixMultiplication_hw([64 x i8]* %3, [64 x i8]* %4, [64 x i32]* %5)
  call void @copy_back([64 x [64 x i8]]* %0, [64 x [64 x i8]]* %A_copy, [64 x [64 x i8]]* %1, [64 x [64 x i8]]* %B_copy, [64 x [64 x i32]]* %2, [64 x [64 x i32]]* %AB_copy)
  tail call void @free(i8* %malloccall)
  tail call void @free(i8* %malloccall1)
  tail call void @free(i8* %malloccall2)
  ret void
}

declare noalias i8* @malloc(i64) local_unnamed_addr

; Function Attrs: argmemonly noinline norecurse
define internal fastcc void @copy_in([64 x [64 x i8]]* noalias readonly, [64 x [64 x i8]]* noalias, [64 x [64 x i8]]* noalias readonly, [64 x [64 x i8]]* noalias, [64 x [64 x i32]]* noalias readonly, [64 x [64 x i32]]* noalias) unnamed_addr #1 {
entry:
  call fastcc void @onebyonecpy_hls.p0a64a64i8([64 x [64 x i8]]* %1, [64 x [64 x i8]]* %0)
  call fastcc void @onebyonecpy_hls.p0a64a64i8([64 x [64 x i8]]* %3, [64 x [64 x i8]]* %2)
  call fastcc void @onebyonecpy_hls.p0a64a64i32([64 x [64 x i32]]* %5, [64 x [64 x i32]]* %4)
  ret void
}

; Function Attrs: argmemonly noinline norecurse
define internal fastcc void @onebyonecpy_hls.p0a64a64i8([64 x [64 x i8]]* noalias, [64 x [64 x i8]]* noalias readonly) unnamed_addr #2 {
entry:
  %2 = icmp eq [64 x [64 x i8]]* %0, null
  %3 = icmp eq [64 x [64 x i8]]* %1, null
  %4 = or i1 %2, %3
  br i1 %4, label %ret, label %copy

copy:                                             ; preds = %entry
  br label %for.loop

for.loop:                                         ; preds = %for.loop.split, %copy
  %for.loop.idx10 = phi i64 [ 0, %copy ], [ %for.loop.idx.next, %for.loop.split ]
  br label %for.loop2

for.loop2:                                        ; preds = %for.loop2, %for.loop
  %for.loop.idx39 = phi i64 [ 0, %for.loop ], [ %for.loop.idx3.next, %for.loop2 ]
  %dst.addr57 = getelementptr [64 x [64 x i8]], [64 x [64 x i8]]* %0, i64 0, i64 %for.loop.idx10, i64 %for.loop.idx39
  %src.addr68 = getelementptr [64 x [64 x i8]], [64 x [64 x i8]]* %1, i64 0, i64 %for.loop.idx10, i64 %for.loop.idx39
  %5 = load i8, i8* %src.addr68, align 1
  store i8 %5, i8* %dst.addr57, align 1
  %for.loop.idx3.next = add nuw nsw i64 %for.loop.idx39, 1
  %exitcond = icmp ne i64 %for.loop.idx3.next, 64
  br i1 %exitcond, label %for.loop2, label %for.loop.split

for.loop.split:                                   ; preds = %for.loop2
  %for.loop.idx.next = add nuw nsw i64 %for.loop.idx10, 1
  %exitcond11 = icmp ne i64 %for.loop.idx.next, 64
  br i1 %exitcond11, label %for.loop, label %ret

ret:                                              ; preds = %for.loop.split, %entry
  ret void
}

; Function Attrs: argmemonly noinline norecurse
define internal fastcc void @onebyonecpy_hls.p0a64a64i32([64 x [64 x i32]]* noalias, [64 x [64 x i32]]* noalias readonly) unnamed_addr #2 {
entry:
  %2 = icmp eq [64 x [64 x i32]]* %0, null
  %3 = icmp eq [64 x [64 x i32]]* %1, null
  %4 = or i1 %2, %3
  br i1 %4, label %ret, label %copy

copy:                                             ; preds = %entry
  br label %for.loop

for.loop:                                         ; preds = %for.loop.split, %copy
  %for.loop.idx10 = phi i64 [ 0, %copy ], [ %for.loop.idx.next, %for.loop.split ]
  br label %for.loop2

for.loop2:                                        ; preds = %for.loop2, %for.loop
  %for.loop.idx39 = phi i64 [ 0, %for.loop ], [ %for.loop.idx3.next, %for.loop2 ]
  %dst.addr57 = getelementptr [64 x [64 x i32]], [64 x [64 x i32]]* %0, i64 0, i64 %for.loop.idx10, i64 %for.loop.idx39
  %src.addr68 = getelementptr [64 x [64 x i32]], [64 x [64 x i32]]* %1, i64 0, i64 %for.loop.idx10, i64 %for.loop.idx39
  %5 = load i32, i32* %src.addr68, align 4
  store i32 %5, i32* %dst.addr57, align 4
  %for.loop.idx3.next = add nuw nsw i64 %for.loop.idx39, 1
  %exitcond = icmp ne i64 %for.loop.idx3.next, 64
  br i1 %exitcond, label %for.loop2, label %for.loop.split

for.loop.split:                                   ; preds = %for.loop2
  %for.loop.idx.next = add nuw nsw i64 %for.loop.idx10, 1
  %exitcond11 = icmp ne i64 %for.loop.idx.next, 64
  br i1 %exitcond11, label %for.loop, label %ret

ret:                                              ; preds = %for.loop.split, %entry
  ret void
}

; Function Attrs: argmemonly noinline norecurse
define internal fastcc void @copy_out([64 x [64 x i8]]* noalias, [64 x [64 x i8]]* noalias readonly, [64 x [64 x i8]]* noalias, [64 x [64 x i8]]* noalias readonly, [64 x [64 x i32]]* noalias, [64 x [64 x i32]]* noalias readonly) unnamed_addr #3 {
entry:
  call fastcc void @onebyonecpy_hls.p0a64a64i8([64 x [64 x i8]]* %0, [64 x [64 x i8]]* %1)
  call fastcc void @onebyonecpy_hls.p0a64a64i8([64 x [64 x i8]]* %2, [64 x [64 x i8]]* %3)
  call fastcc void @onebyonecpy_hls.p0a64a64i32([64 x [64 x i32]]* %4, [64 x [64 x i32]]* %5)
  ret void
}

declare void @free(i8*) local_unnamed_addr

declare void @apatb_matrixMultiplication_hw([64 x i8]*, [64 x i8]*, [64 x i32]*)

; Function Attrs: argmemonly noinline norecurse
define internal fastcc void @copy_back([64 x [64 x i8]]* noalias, [64 x [64 x i8]]* noalias readonly, [64 x [64 x i8]]* noalias, [64 x [64 x i8]]* noalias readonly, [64 x [64 x i32]]* noalias, [64 x [64 x i32]]* noalias readonly) unnamed_addr #3 {
entry:
  call fastcc void @onebyonecpy_hls.p0a64a64i32([64 x [64 x i32]]* %4, [64 x [64 x i32]]* %5)
  ret void
}

define void @matrixMultiplication_hw_stub_wrapper([64 x i8]*, [64 x i8]*, [64 x i32]*) #4 {
entry:
  %3 = bitcast [64 x i8]* %0 to [64 x [64 x i8]]*
  %4 = bitcast [64 x i8]* %1 to [64 x [64 x i8]]*
  %5 = bitcast [64 x i32]* %2 to [64 x [64 x i32]]*
  call void @copy_out([64 x [64 x i8]]* null, [64 x [64 x i8]]* %3, [64 x [64 x i8]]* null, [64 x [64 x i8]]* %4, [64 x [64 x i32]]* null, [64 x [64 x i32]]* %5)
  %6 = bitcast [64 x [64 x i8]]* %3 to [64 x i8]*
  %7 = bitcast [64 x [64 x i8]]* %4 to [64 x i8]*
  %8 = bitcast [64 x [64 x i32]]* %5 to [64 x i32]*
  call void @matrixMultiplication_hw_stub([64 x i8]* %6, [64 x i8]* %7, [64 x i32]* %8)
  call void @copy_in([64 x [64 x i8]]* null, [64 x [64 x i8]]* %3, [64 x [64 x i8]]* null, [64 x [64 x i8]]* %4, [64 x [64 x i32]]* null, [64 x [64 x i32]]* %5)
  ret void
}

declare void @matrixMultiplication_hw_stub([64 x i8]*, [64 x i8]*, [64 x i32]*)

attributes #0 = { noinline "fpga.wrapper.func"="wrapper" }
attributes #1 = { argmemonly noinline norecurse "fpga.wrapper.func"="copyin" }
attributes #2 = { argmemonly noinline norecurse "fpga.wrapper.func"="onebyonecpy_hls" }
attributes #3 = { argmemonly noinline norecurse "fpga.wrapper.func"="copyout" }
attributes #4 = { "fpga.wrapper.func"="stub" }

!llvm.dbg.cu = !{}
!llvm.ident = !{!0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0}
!llvm.module.flags = !{!1, !2, !3}
!blackbox_cfg = !{!4}

!0 = !{!"clang version 7.0.0 "}
!1 = !{i32 2, !"Dwarf Version", i32 4}
!2 = !{i32 2, !"Debug Info Version", i32 3}
!3 = !{i32 1, !"wchar_size", i32 4}
!4 = !{}
