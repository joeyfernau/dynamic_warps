// Generated by llvm2cpp - DO NOT MODIFY!

#include <llvm/Pass.h>
#include <llvm/PassManager.h>
#include <llvm/ADT/SmallVector.h>
#include <llvm/Analysis/Verifier.h>
#include <llvm/Assembly/PrintModulePass.h>
#include <llvm/IR/BasicBlock.h>
#include <llvm/IR/CallingConv.h>
#include <llvm/IR/Constants.h>
#include <llvm/IR/DerivedTypes.h>
#include <llvm/IR/Function.h>
#include <llvm/IR/GlobalVariable.h>
#include <llvm/IR/InlineAsm.h>
#include <llvm/IR/Instructions.h>
#include <llvm/IR/LLVMContext.h>
#include <llvm/IR/Module.h>
#include <llvm/Support/FormattedStream.h>
#include <llvm/Support/MathExtras.h>
#include <algorithm>
using namespace llvm;

Module* makeLLVMModule();

int main(int argc, char**argv) {
  Module* Mod = makeLLVMModule();
  verifyModule(*Mod, PrintMessageAction);
  PassManager PM;
  PM.add(createPrintModulePass(&outs()));
  PM.run(*Mod);
  return 0;
}


Module* makeLLVMModule() {
 // Module Construction
 Module* mod = new Module("helper.ll", getGlobalContext());
 mod->setDataLayout("e-p:64:64:64-i1:8:8-i8:8:8-i16:16:16-i32:32:32-i64:64:64-f32:32:32-f64:64:64-v64:64:64-v128:128:128-a0:0:64-s0:64:64-f80:128:128-n8:16:32:64-S128");
 mod->setTargetTriple("x86_64-redhat-linux-gnu");

 // Type Definitions
 std::vector<Type*>FuncTy_0_args;
 FuncTy_0_args.push_back(IntegerType::get(mod->getContext(), 1));
 FuncTy_0_args.push_back(IntegerType::get(mod->getContext(), 32));
 FuncTy_0_args.push_back(IntegerType::get(mod->getContext(), 32));
 FunctionType* FuncTy_0 = FunctionType::get(
  /*Result=*/IntegerType::get(mod->getContext(), 32),
  /*Params=*/FuncTy_0_args,
  /*isVarArg=*/false);

 PointerType* PointerTy_1 = PointerType::get(IntegerType::get(mod->getContext(), 8), 0);

 PointerType* PointerTy_2 = PointerType::get(IntegerType::get(mod->getContext(), 32), 0);


 // Function Declarations

 Function* func__Z4testbii = mod->getFunction("_Z4testbii");
 if (!func__Z4testbii) {
 func__Z4testbii = Function::Create(
  /*Type=*/FuncTy_0,
  /*Linkage=*/GlobalValue::ExternalLinkage,
  /*Name=*/"_Z4testbii", mod);
 func__Z4testbii->setCallingConv(CallingConv::C);
 }
 AttributeSet func__Z4testbii_PAL;
 {
  SmallVector<AttributeSet, 4> Attrs;
  AttributeSet PAS;
   {
    AttrBuilder B;
    B.addAttribute(Attribute::ZExt);
    PAS = AttributeSet::get(mod->getContext(), 1U, B);
   }

  Attrs.push_back(PAS);
  {
   AttrBuilder B;
   B.addAttribute(Attribute::NoUnwind);
   B.addAttribute(Attribute::UWTable);
   PAS = AttributeSet::get(mod->getContext(), ~0U, B);
  }

 Attrs.push_back(PAS);
 func__Z4testbii_PAL = AttributeSet::get(mod->getContext(), Attrs);

}
func__Z4testbii->setAttributes(func__Z4testbii_PAL);

// Global Variable Declarations


// Constant Definitions
ConstantInt* const_int32_3 = ConstantInt::get(mod->getContext(), APInt(32, StringRef("1"), 10));

// Global Variable Definitions

// Function Definitions

// Function: _Z4testbii (func__Z4testbii)
{
 Function::arg_iterator args = func__Z4testbii->arg_begin();
 Value* int1_x = args++;
 int1_x->setName("x");
 Value* int32_y = args++;
 int32_y->setName("y");
 Value* int32_z = args++;
 int32_z->setName("z");

 BasicBlock* label_4 = BasicBlock::Create(mod->getContext(), "",func__Z4testbii,0);
 BasicBlock* label_5 = BasicBlock::Create(mod->getContext(), "",func__Z4testbii,0);
 BasicBlock* label_6 = BasicBlock::Create(mod->getContext(), "",func__Z4testbii,0);
 BasicBlock* label_7 = BasicBlock::Create(mod->getContext(), "",func__Z4testbii,0);

 // Block  (label_4)
 AllocaInst* ptr_8 = new AllocaInst(IntegerType::get(mod->getContext(), 8), "", label_4);
 ptr_8->setAlignment(1);
 AllocaInst* ptr_9 = new AllocaInst(IntegerType::get(mod->getContext(), 32), "", label_4);
 ptr_9->setAlignment(4);
 AllocaInst* ptr_10 = new AllocaInst(IntegerType::get(mod->getContext(), 32), "", label_4);
 ptr_10->setAlignment(4);
 AllocaInst* ptr_q = new AllocaInst(IntegerType::get(mod->getContext(), 32), "q", label_4);
 ptr_q->setAlignment(4);
 CastInst* int8_11 = new ZExtInst(int1_x, IntegerType::get(mod->getContext(), 8), "", label_4);
 StoreInst* void_12 = new StoreInst(int8_11, ptr_8, false, label_4);
 void_12->setAlignment(1);
 StoreInst* void_13 = new StoreInst(int32_y, ptr_9, false, label_4);
 void_13->setAlignment(4);
 StoreInst* void_14 = new StoreInst(int32_z, ptr_10, false, label_4);
 void_14->setAlignment(4);
 LoadInst* int8_15 = new LoadInst(ptr_8, "", false, label_4);
 int8_15->setAlignment(1);
 CastInst* int1_16 = new TruncInst(int8_15, IntegerType::get(mod->getContext(), 1), "", label_4);
 BranchInst::Create(label_5, label_6, int1_16, label_4);

 // Block  (label_5)
 LoadInst* int32_18 = new LoadInst(ptr_9, "", false, label_5);
 int32_18->setAlignment(4);
 LoadInst* int32_19 = new LoadInst(ptr_10, "", false, label_5);
 int32_19->setAlignment(4);
 BinaryOperator* int32_20 = BinaryOperator::Create(Instruction::Add, int32_18, int32_19, "", label_5);
 StoreInst* void_21 = new StoreInst(int32_20, ptr_q, false, label_5);
 void_21->setAlignment(4);
 BranchInst::Create(label_7, label_5);

 // Block  (label_6)
 LoadInst* int32_23 = new LoadInst(ptr_10, "", false, label_6);
 int32_23->setAlignment(4);
 LoadInst* int32_24 = new LoadInst(ptr_9, "", false, label_6);
 int32_24->setAlignment(4);
 BinaryOperator* int32_25 = BinaryOperator::Create(Instruction::Sub, int32_23, int32_24, "", label_6);
 StoreInst* void_26 = new StoreInst(int32_25, ptr_q, false, label_6);
 void_26->setAlignment(4);
 BranchInst::Create(label_7, label_6);

 // Block  (label_7)
 LoadInst* int32_28 = new LoadInst(ptr_q, "", false, label_7);
 int32_28->setAlignment(4);
 ReturnInst::Create(mod->getContext(), int32_28, label_7);

}

return mod;
}
