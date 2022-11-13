#include <stdio.h>
#include <iostream>
#include <assert.h>
#include "circom.hpp"
#include "calcwit.hpp"
void H_0_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void H_0_run(uint ctx_index,Circom_CalcWit* ctx);
void H_1_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void H_1_run(uint ctx_index,Circom_CalcWit* ctx);
void H_2_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void H_2_run(uint ctx_index,Circom_CalcWit* ctx);
void H_3_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void H_3_run(uint ctx_index,Circom_CalcWit* ctx);
void H_4_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void H_4_run(uint ctx_index,Circom_CalcWit* ctx);
void H_5_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void H_5_run(uint ctx_index,Circom_CalcWit* ctx);
void H_6_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void H_6_run(uint ctx_index,Circom_CalcWit* ctx);
void H_7_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void H_7_run(uint ctx_index,Circom_CalcWit* ctx);
void RotR_8_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void RotR_8_run(uint ctx_index,Circom_CalcWit* ctx);
void RotR_9_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void RotR_9_run(uint ctx_index,Circom_CalcWit* ctx);
void ShR_10_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void ShR_10_run(uint ctx_index,Circom_CalcWit* ctx);
void Xor3_11_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void Xor3_11_run(uint ctx_index,Circom_CalcWit* ctx);
void SmallSigma_12_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void SmallSigma_12_run(uint ctx_index,Circom_CalcWit* ctx);
void RotR_13_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void RotR_13_run(uint ctx_index,Circom_CalcWit* ctx);
void RotR_14_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void RotR_14_run(uint ctx_index,Circom_CalcWit* ctx);
void ShR_15_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void ShR_15_run(uint ctx_index,Circom_CalcWit* ctx);
void SmallSigma_16_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void SmallSigma_16_run(uint ctx_index,Circom_CalcWit* ctx);
void BinSum_17_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void BinSum_17_run(uint ctx_index,Circom_CalcWit* ctx);
void SigmaPlus_18_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void SigmaPlus_18_run(uint ctx_index,Circom_CalcWit* ctx);
void K_19_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void K_19_run(uint ctx_index,Circom_CalcWit* ctx);
void K_20_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void K_20_run(uint ctx_index,Circom_CalcWit* ctx);
void K_21_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void K_21_run(uint ctx_index,Circom_CalcWit* ctx);
void K_22_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void K_22_run(uint ctx_index,Circom_CalcWit* ctx);
void K_23_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void K_23_run(uint ctx_index,Circom_CalcWit* ctx);
void K_24_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void K_24_run(uint ctx_index,Circom_CalcWit* ctx);
void K_25_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void K_25_run(uint ctx_index,Circom_CalcWit* ctx);
void K_26_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void K_26_run(uint ctx_index,Circom_CalcWit* ctx);
void K_27_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void K_27_run(uint ctx_index,Circom_CalcWit* ctx);
void K_28_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void K_28_run(uint ctx_index,Circom_CalcWit* ctx);
void K_29_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void K_29_run(uint ctx_index,Circom_CalcWit* ctx);
void K_30_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void K_30_run(uint ctx_index,Circom_CalcWit* ctx);
void K_31_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void K_31_run(uint ctx_index,Circom_CalcWit* ctx);
void K_32_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void K_32_run(uint ctx_index,Circom_CalcWit* ctx);
void K_33_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void K_33_run(uint ctx_index,Circom_CalcWit* ctx);
void K_34_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void K_34_run(uint ctx_index,Circom_CalcWit* ctx);
void K_35_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void K_35_run(uint ctx_index,Circom_CalcWit* ctx);
void K_36_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void K_36_run(uint ctx_index,Circom_CalcWit* ctx);
void K_37_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void K_37_run(uint ctx_index,Circom_CalcWit* ctx);
void K_38_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void K_38_run(uint ctx_index,Circom_CalcWit* ctx);
void K_39_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void K_39_run(uint ctx_index,Circom_CalcWit* ctx);
void K_40_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void K_40_run(uint ctx_index,Circom_CalcWit* ctx);
void K_41_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void K_41_run(uint ctx_index,Circom_CalcWit* ctx);
void K_42_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void K_42_run(uint ctx_index,Circom_CalcWit* ctx);
void K_43_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void K_43_run(uint ctx_index,Circom_CalcWit* ctx);
void K_44_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void K_44_run(uint ctx_index,Circom_CalcWit* ctx);
void K_45_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void K_45_run(uint ctx_index,Circom_CalcWit* ctx);
void K_46_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void K_46_run(uint ctx_index,Circom_CalcWit* ctx);
void K_47_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void K_47_run(uint ctx_index,Circom_CalcWit* ctx);
void K_48_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void K_48_run(uint ctx_index,Circom_CalcWit* ctx);
void K_49_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void K_49_run(uint ctx_index,Circom_CalcWit* ctx);
void K_50_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void K_50_run(uint ctx_index,Circom_CalcWit* ctx);
void K_51_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void K_51_run(uint ctx_index,Circom_CalcWit* ctx);
void K_52_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void K_52_run(uint ctx_index,Circom_CalcWit* ctx);
void K_53_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void K_53_run(uint ctx_index,Circom_CalcWit* ctx);
void K_54_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void K_54_run(uint ctx_index,Circom_CalcWit* ctx);
void K_55_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void K_55_run(uint ctx_index,Circom_CalcWit* ctx);
void K_56_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void K_56_run(uint ctx_index,Circom_CalcWit* ctx);
void K_57_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void K_57_run(uint ctx_index,Circom_CalcWit* ctx);
void K_58_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void K_58_run(uint ctx_index,Circom_CalcWit* ctx);
void K_59_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void K_59_run(uint ctx_index,Circom_CalcWit* ctx);
void K_60_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void K_60_run(uint ctx_index,Circom_CalcWit* ctx);
void K_61_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void K_61_run(uint ctx_index,Circom_CalcWit* ctx);
void K_62_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void K_62_run(uint ctx_index,Circom_CalcWit* ctx);
void K_63_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void K_63_run(uint ctx_index,Circom_CalcWit* ctx);
void K_64_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void K_64_run(uint ctx_index,Circom_CalcWit* ctx);
void K_65_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void K_65_run(uint ctx_index,Circom_CalcWit* ctx);
void K_66_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void K_66_run(uint ctx_index,Circom_CalcWit* ctx);
void K_67_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void K_67_run(uint ctx_index,Circom_CalcWit* ctx);
void K_68_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void K_68_run(uint ctx_index,Circom_CalcWit* ctx);
void K_69_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void K_69_run(uint ctx_index,Circom_CalcWit* ctx);
void K_70_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void K_70_run(uint ctx_index,Circom_CalcWit* ctx);
void K_71_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void K_71_run(uint ctx_index,Circom_CalcWit* ctx);
void K_72_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void K_72_run(uint ctx_index,Circom_CalcWit* ctx);
void K_73_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void K_73_run(uint ctx_index,Circom_CalcWit* ctx);
void K_74_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void K_74_run(uint ctx_index,Circom_CalcWit* ctx);
void K_75_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void K_75_run(uint ctx_index,Circom_CalcWit* ctx);
void K_76_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void K_76_run(uint ctx_index,Circom_CalcWit* ctx);
void K_77_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void K_77_run(uint ctx_index,Circom_CalcWit* ctx);
void K_78_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void K_78_run(uint ctx_index,Circom_CalcWit* ctx);
void K_79_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void K_79_run(uint ctx_index,Circom_CalcWit* ctx);
void K_80_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void K_80_run(uint ctx_index,Circom_CalcWit* ctx);
void K_81_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void K_81_run(uint ctx_index,Circom_CalcWit* ctx);
void K_82_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void K_82_run(uint ctx_index,Circom_CalcWit* ctx);
void Ch_t_83_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void Ch_t_83_run(uint ctx_index,Circom_CalcWit* ctx);
void RotR_84_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void RotR_84_run(uint ctx_index,Circom_CalcWit* ctx);
void RotR_85_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void RotR_85_run(uint ctx_index,Circom_CalcWit* ctx);
void RotR_86_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void RotR_86_run(uint ctx_index,Circom_CalcWit* ctx);
void BigSigma_87_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void BigSigma_87_run(uint ctx_index,Circom_CalcWit* ctx);
void BinSum_88_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void BinSum_88_run(uint ctx_index,Circom_CalcWit* ctx);
void T1_89_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void T1_89_run(uint ctx_index,Circom_CalcWit* ctx);
void RotR_90_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void RotR_90_run(uint ctx_index,Circom_CalcWit* ctx);
void RotR_91_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void RotR_91_run(uint ctx_index,Circom_CalcWit* ctx);
void RotR_92_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void RotR_92_run(uint ctx_index,Circom_CalcWit* ctx);
void BigSigma_93_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void BigSigma_93_run(uint ctx_index,Circom_CalcWit* ctx);
void Maj_t_94_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void Maj_t_94_run(uint ctx_index,Circom_CalcWit* ctx);
void BinSum_95_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void BinSum_95_run(uint ctx_index,Circom_CalcWit* ctx);
void T2_96_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void T2_96_run(uint ctx_index,Circom_CalcWit* ctx);
void Sha256compression_97_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void Sha256compression_97_run(uint ctx_index,Circom_CalcWit* ctx);
void Sha256_98_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void Sha256_98_run(uint ctx_index,Circom_CalcWit* ctx);
void Num2Bits_99_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void Num2Bits_99_run(uint ctx_index,Circom_CalcWit* ctx);
void Sha256_100_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void Sha256_100_run(uint ctx_index,Circom_CalcWit* ctx);
void Num2Bits_101_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void Num2Bits_101_run(uint ctx_index,Circom_CalcWit* ctx);
void Num2Bits_102_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void Num2Bits_102_run(uint ctx_index,Circom_CalcWit* ctx);
void LessThan_103_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void LessThan_103_run(uint ctx_index,Circom_CalcWit* ctx);
void ShiftLeft_104_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void ShiftLeft_104_run(uint ctx_index,Circom_CalcWit* ctx);
void Num2Bits_105_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void Num2Bits_105_run(uint ctx_index,Circom_CalcWit* ctx);
void Bits2Num_106_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void Bits2Num_106_run(uint ctx_index,Circom_CalcWit* ctx);
void OR_107_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void OR_107_run(uint ctx_index,Circom_CalcWit* ctx);
void bitwiseOR_108_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void bitwiseOR_108_run(uint ctx_index,Circom_CalcWit* ctx);
void getTarget_109_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void getTarget_109_run(uint ctx_index,Circom_CalcWit* ctx);
void Bits2Num_110_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void Bits2Num_110_run(uint ctx_index,Circom_CalcWit* ctx);
void Num2Bits_111_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void Num2Bits_111_run(uint ctx_index,Circom_CalcWit* ctx);
void LessThan_112_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void LessThan_112_run(uint ctx_index,Circom_CalcWit* ctx);
void CheckOneBlock_113_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void CheckOneBlock_113_run(uint ctx_index,Circom_CalcWit* ctx);
void Main_114_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void Main_114_run(uint ctx_index,Circom_CalcWit* ctx);
void sha256compression_0(Circom_CalcWit* ctx,FrElement* lvar,uint componentFather,FrElement* destination,int destination_size);
void ssigma1_1(Circom_CalcWit* ctx,FrElement* lvar,uint componentFather,FrElement* destination,int destination_size);
void ssigma0_2(Circom_CalcWit* ctx,FrElement* lvar,uint componentFather,FrElement* destination,int destination_size);
void bsigma1_3(Circom_CalcWit* ctx,FrElement* lvar,uint componentFather,FrElement* destination,int destination_size);
void Ch_4(Circom_CalcWit* ctx,FrElement* lvar,uint componentFather,FrElement* destination,int destination_size);
void sha256K_5(Circom_CalcWit* ctx,FrElement* lvar,uint componentFather,FrElement* destination,int destination_size);
void bsigma0_6(Circom_CalcWit* ctx,FrElement* lvar,uint componentFather,FrElement* destination,int destination_size);
void Maj_7(Circom_CalcWit* ctx,FrElement* lvar,uint componentFather,FrElement* destination,int destination_size);
void rrot_8(Circom_CalcWit* ctx,FrElement* lvar,uint componentFather,FrElement* destination,int destination_size);
Circom_TemplateFunction _functionTable[115] = { 
H_0_run,
H_1_run,
H_2_run,
H_3_run,
H_4_run,
H_5_run,
H_6_run,
H_7_run,
RotR_8_run,
RotR_9_run,
ShR_10_run,
Xor3_11_run,
SmallSigma_12_run,
RotR_13_run,
RotR_14_run,
ShR_15_run,
SmallSigma_16_run,
BinSum_17_run,
SigmaPlus_18_run,
K_19_run,
K_20_run,
K_21_run,
K_22_run,
K_23_run,
K_24_run,
K_25_run,
K_26_run,
K_27_run,
K_28_run,
K_29_run,
K_30_run,
K_31_run,
K_32_run,
K_33_run,
K_34_run,
K_35_run,
K_36_run,
K_37_run,
K_38_run,
K_39_run,
K_40_run,
K_41_run,
K_42_run,
K_43_run,
K_44_run,
K_45_run,
K_46_run,
K_47_run,
K_48_run,
K_49_run,
K_50_run,
K_51_run,
K_52_run,
K_53_run,
K_54_run,
K_55_run,
K_56_run,
K_57_run,
K_58_run,
K_59_run,
K_60_run,
K_61_run,
K_62_run,
K_63_run,
K_64_run,
K_65_run,
K_66_run,
K_67_run,
K_68_run,
K_69_run,
K_70_run,
K_71_run,
K_72_run,
K_73_run,
K_74_run,
K_75_run,
K_76_run,
K_77_run,
K_78_run,
K_79_run,
K_80_run,
K_81_run,
K_82_run,
Ch_t_83_run,
RotR_84_run,
RotR_85_run,
RotR_86_run,
BigSigma_87_run,
BinSum_88_run,
T1_89_run,
RotR_90_run,
RotR_91_run,
RotR_92_run,
BigSigma_93_run,
Maj_t_94_run,
BinSum_95_run,
T2_96_run,
Sha256compression_97_run,
Sha256_98_run,
Num2Bits_99_run,
Sha256_100_run,
Num2Bits_101_run,
Num2Bits_102_run,
LessThan_103_run,
ShiftLeft_104_run,
Num2Bits_105_run,
Bits2Num_106_run,
OR_107_run,
bitwiseOR_108_run,
getTarget_109_run,
Bits2Num_110_run,
Num2Bits_111_run,
LessThan_112_run,
CheckOneBlock_113_run,
Main_114_run };
Circom_TemplateFunction _functionTableParallel[115] = { 
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL };
uint get_main_input_signal_start() {return 3;}

uint get_main_input_signal_no() {return 84;}

uint get_total_signal_no() {return 630669;}

uint get_number_of_components() {return 7526;}

uint get_size_of_input_hashmap() {return 256;}

uint get_size_of_witness() {return 111758;}

uint get_size_of_constants() {return 338;}

uint get_size_of_io_map() {return 64;}

// function declarations
void sha256compression_0(Circom_CalcWit* ctx,FrElement* lvar,uint componentFather,FrElement* destination,int destination_size){
FrElement* circuitConstants = ctx->circuitConstants;
FrElement expaux[8];
std::string myTemplateName = "sha256compression";
u64 myId = componentFather;
{
PFrElement aux_dest = &lvar[768];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[769];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[770];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[771];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[772];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[773];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[774];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[775];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[776];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[777];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[778];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[779];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[780];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[781];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[782];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[783];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[784];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[785];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[786];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[787];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[788];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[789];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[790];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[791];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[792];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[793];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[794];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[795];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[796];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[797];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[798];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[799];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[800];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[801];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[802];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[803];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[804];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[805];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[806];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[807];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[808];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[809];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[810];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[811];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[812];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[813];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[814];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[815];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[816];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[817];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[818];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[819];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[820];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[821];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[822];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[823];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[824];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[825];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[826];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[827];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[828];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[829];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[830];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[831];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[832];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[833];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[834];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[835];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[836];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[837];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[838];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[839];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[840];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[841];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[842];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[843];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[844];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[845];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[846];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[847];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[848];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[849];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[850];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[851];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[852];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[853];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[854];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[855];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[856];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[857];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[858];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[859];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[860];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[861];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[862];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[863];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[864];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[865];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[866];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[867];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[868];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[869];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[870];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[871];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[872];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[873];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[874];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[875];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[876];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[877];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[878];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[879];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[880];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[881];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[882];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[883];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[884];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[885];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[886];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[887];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[888];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[889];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[890];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[891];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[892];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[893];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[894];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[895];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[896];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[897];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[898];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[899];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[900];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[901];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[902];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[903];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[904];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[905];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[906];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[907];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[908];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[909];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[910];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[911];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[912];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[913];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[914];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[915];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[916];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[917];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[918];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[919];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[920];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[921];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[922];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[923];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[924];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[925];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[926];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[927];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[928];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[929];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[930];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[931];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[932];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[933];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[934];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[935];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[936];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[937];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[938];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[939];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[940];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[941];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[942];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[943];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[944];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[945];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[946];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[947];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[948];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[949];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[950];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[951];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[952];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[953];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[954];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[955];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[956];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[957];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[958];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[959];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[960];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[961];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[962];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[963];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[964];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[965];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[966];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[967];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[968];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[969];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[970];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[971];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[972];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[973];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[974];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[975];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[976];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[977];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[978];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[979];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[980];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[981];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[982];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[983];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[984];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[985];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[986];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[987];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[988];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[989];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[990];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[991];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[992];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[993];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[994];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[995];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[996];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[997];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[998];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[999];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[1000];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[1001];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[1002];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[1003];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[1004];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[1005];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[1006];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[1007];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[1008];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[1009];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[1010];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[1011];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[1012];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[1013];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[1014];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[1015];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[1016];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[1017];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[1018];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[1019];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[1020];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[1021];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[1022];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[1023];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[1024];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[1025];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[1026];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[1027];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[1028];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[1029];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[1030];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[1031];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[1032];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[1033];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[1034];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[1035];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[1036];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[1037];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[1038];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[1039];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[1040];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[1040],&circuitConstants[30]); // line circom 59
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &lvar[((1 * Fr_toInt(&lvar[1040])) + 768)];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[1041];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[1041],&circuitConstants[16]); // line circom 61
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &lvar[((1 * Fr_toInt(&lvar[1040])) + 768)];
// load src
Fr_shl(&expaux[2],&lvar[((1 * ((Fr_toInt(&lvar[1040]) * 32) + Fr_toInt(&lvar[1041]))) + 0)],&lvar[1041]); // line circom 62
Fr_add(&expaux[0],&lvar[((1 * Fr_toInt(&lvar[1040])) + 768)],&expaux[2]); // line circom 62
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[1041];
// load src
Fr_add(&expaux[0],&lvar[1041],&circuitConstants[2]); // line circom 61
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[1041],&circuitConstants[16]); // line circom 61
}
{
PFrElement aux_dest = &lvar[1040];
// load src
Fr_add(&expaux[0],&lvar[1040],&circuitConstants[2]); // line circom 59
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[1040],&circuitConstants[30]); // line circom 59
}
{
PFrElement aux_dest = &lvar[776];
// load src
// end load src
Fr_copy(aux_dest,&lvar[768]);
}
{
PFrElement aux_dest = &lvar[777];
// load src
// end load src
Fr_copy(aux_dest,&lvar[769]);
}
{
PFrElement aux_dest = &lvar[778];
// load src
// end load src
Fr_copy(aux_dest,&lvar[770]);
}
{
PFrElement aux_dest = &lvar[779];
// load src
// end load src
Fr_copy(aux_dest,&lvar[771]);
}
{
PFrElement aux_dest = &lvar[780];
// load src
// end load src
Fr_copy(aux_dest,&lvar[772]);
}
{
PFrElement aux_dest = &lvar[781];
// load src
// end load src
Fr_copy(aux_dest,&lvar[773]);
}
{
PFrElement aux_dest = &lvar[782];
// load src
// end load src
Fr_copy(aux_dest,&lvar[774]);
}
{
PFrElement aux_dest = &lvar[783];
// load src
// end load src
Fr_copy(aux_dest,&lvar[775]);
}
{
PFrElement aux_dest = &lvar[1040];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[1041];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[1042];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[1043];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[1044];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[1045];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[1046];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[1047];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[1048];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[1049];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[1050];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[1051];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[1052];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[1053];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[1054];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[1055];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[1056];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[1057];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[1058];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[1059];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[1060];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[1061];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[1062];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[1063];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[1064];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[1065];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[1066];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[1067];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[1068];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[1069];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[1070];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[1071];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[1072];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[1073];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[1074];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[1075];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[1076];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[1077];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[1078];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[1079];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[1080];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[1081];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[1082];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[1083];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[1084];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[1085];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[1086];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[1087];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[1088];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[1089];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[1090];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[1091];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[1092];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[1093];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[1094];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[1095];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[1096];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[1097];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[1098];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[1099];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[1100];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[1101];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[1102];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[1103];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[1104];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[1105];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[1106];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[1106],&circuitConstants[137]); // line circom 76
while(Fr_isTrue(&expaux[0])){
Fr_lt(&expaux[0],&lvar[1106],&circuitConstants[45]); // line circom 77
if(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &lvar[((1 * Fr_toInt(&lvar[1106])) + 1040)];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[1107];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[1107],&circuitConstants[16]); // line circom 79
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &lvar[((1 * Fr_toInt(&lvar[1106])) + 1040)];
// load src
Fr_mul(&expaux[5],&lvar[1106],&circuitConstants[16]); // line circom 80
Fr_add(&expaux[4],&expaux[5],&circuitConstants[72]); // line circom 80
Fr_sub(&expaux[3],&expaux[4],&lvar[1107]); // line circom 80
Fr_shl(&expaux[2],&lvar[((1 * Fr_toInt(&expaux[3])) + 256)],&lvar[1107]); // line circom 80
Fr_add(&expaux[0],&lvar[((1 * Fr_toInt(&lvar[1106])) + 1040)],&expaux[2]); // line circom 80
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[1107];
// load src
Fr_add(&expaux[0],&lvar[1107],&circuitConstants[2]); // line circom 79
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[1107],&circuitConstants[16]); // line circom 79
}
}else{
{

// start of call bucket
FrElement lvarcall[3];
// copying argument 0
Fr_sub(&expaux[1],&lvar[1106],&circuitConstants[4]); // line circom 83
Fr_copy(&lvarcall[0],&lvar[((1 * Fr_toInt(&expaux[1])) + 1040)]);
// end copying argument 0
ssigma1_1(ctx,lvarcall,myId,&lvar[1107],1);
// end call bucket
}

{

// start of call bucket
FrElement lvarcall[3];
// copying argument 0
Fr_sub(&expaux[1],&lvar[1106],&circuitConstants[43]); // line circom 83
Fr_copy(&lvarcall[0],&lvar[((1 * Fr_toInt(&expaux[1])) + 1040)]);
// end copying argument 0
ssigma0_2(ctx,lvarcall,myId,&lvar[1108],1);
// end call bucket
}

{
PFrElement aux_dest = &lvar[((1 * Fr_toInt(&lvar[1106])) + 1040)];
// load src
Fr_sub(&expaux[5],&lvar[1106],&circuitConstants[14]); // line circom 83
Fr_add(&expaux[3],&lvar[1107],&lvar[((1 * Fr_toInt(&expaux[5])) + 1040)]); // line circom 83
Fr_add(&expaux[2],&expaux[3],&lvar[1108]); // line circom 83
Fr_sub(&expaux[3],&lvar[1106],&circuitConstants[45]); // line circom 83
Fr_add(&expaux[1],&expaux[2],&lvar[((1 * Fr_toInt(&expaux[3])) + 1040)]); // line circom 83
Fr_band(&expaux[0],&expaux[1],&circuitConstants[337]); // line circom 83
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
}
{

// start of call bucket
FrElement lvarcall[4];
// copying argument 0
Fr_copy(&lvarcall[0],&lvar[780]);
// end copying argument 0
bsigma1_3(ctx,lvarcall,myId,&lvar[1107],1);
// end call bucket
}

{

// start of call bucket
FrElement lvarcall[3];
// copying argument 0
Fr_copy(&lvarcall[0],&lvar[780]);
// end copying argument 0
// copying argument 1
Fr_copy(&lvarcall[1],&lvar[781]);
// end copying argument 1
// copying argument 2
Fr_copy(&lvarcall[2],&lvar[782]);
// end copying argument 2
Ch_4(ctx,lvarcall,myId,&lvar[1108],1);
// end call bucket
}

{

// start of call bucket
FrElement lvarcall[65];
// copying argument 0
Fr_copy(&lvarcall[0],&lvar[1106]);
// end copying argument 0
sha256K_5(ctx,lvarcall,myId,&lvar[1109],1);
// end call bucket
}

{
PFrElement aux_dest = &lvar[1104];
// load src
Fr_add(&expaux[4],&lvar[783],&lvar[1107]); // line circom 85
Fr_add(&expaux[3],&expaux[4],&lvar[1108]); // line circom 85
Fr_add(&expaux[2],&expaux[3],&lvar[1109]); // line circom 85
Fr_add(&expaux[1],&expaux[2],&lvar[((1 * Fr_toInt(&lvar[1106])) + 1040)]); // line circom 85
Fr_band(&expaux[0],&expaux[1],&circuitConstants[337]); // line circom 85
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{

// start of call bucket
FrElement lvarcall[4];
// copying argument 0
Fr_copy(&lvarcall[0],&lvar[776]);
// end copying argument 0
bsigma0_6(ctx,lvarcall,myId,&lvar[1110],1);
// end call bucket
}

{

// start of call bucket
FrElement lvarcall[3];
// copying argument 0
Fr_copy(&lvarcall[0],&lvar[776]);
// end copying argument 0
// copying argument 1
Fr_copy(&lvarcall[1],&lvar[777]);
// end copying argument 1
// copying argument 2
Fr_copy(&lvarcall[2],&lvar[778]);
// end copying argument 2
Maj_7(ctx,lvarcall,myId,&lvar[1111],1);
// end call bucket
}

{
PFrElement aux_dest = &lvar[1105];
// load src
Fr_add(&expaux[1],&lvar[1110],&lvar[1111]); // line circom 86
Fr_band(&expaux[0],&expaux[1],&circuitConstants[337]); // line circom 86
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[783];
// load src
// end load src
Fr_copy(aux_dest,&lvar[782]);
}
{
PFrElement aux_dest = &lvar[782];
// load src
// end load src
Fr_copy(aux_dest,&lvar[781]);
}
{
PFrElement aux_dest = &lvar[781];
// load src
// end load src
Fr_copy(aux_dest,&lvar[780]);
}
{
PFrElement aux_dest = &lvar[780];
// load src
Fr_add(&expaux[1],&lvar[779],&lvar[1104]); // line circom 91
Fr_band(&expaux[0],&expaux[1],&circuitConstants[337]); // line circom 91
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[779];
// load src
// end load src
Fr_copy(aux_dest,&lvar[778]);
}
{
PFrElement aux_dest = &lvar[778];
// load src
// end load src
Fr_copy(aux_dest,&lvar[777]);
}
{
PFrElement aux_dest = &lvar[777];
// load src
// end load src
Fr_copy(aux_dest,&lvar[776]);
}
{
PFrElement aux_dest = &lvar[776];
// load src
Fr_add(&expaux[1],&lvar[1104],&lvar[1105]); // line circom 95
Fr_band(&expaux[0],&expaux[1],&circuitConstants[337]); // line circom 95
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[1106];
// load src
Fr_add(&expaux[0],&lvar[1106],&circuitConstants[2]); // line circom 76
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[1106],&circuitConstants[137]); // line circom 76
}
{
PFrElement aux_dest = &lvar[768];
// load src
Fr_add(&expaux[0],&lvar[768],&lvar[776]); // line circom 98
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[769];
// load src
Fr_add(&expaux[0],&lvar[769],&lvar[777]); // line circom 99
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[770];
// load src
Fr_add(&expaux[0],&lvar[770],&lvar[778]); // line circom 100
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[771];
// load src
Fr_add(&expaux[0],&lvar[771],&lvar[779]); // line circom 101
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[772];
// load src
Fr_add(&expaux[0],&lvar[772],&lvar[780]); // line circom 102
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[773];
// load src
Fr_add(&expaux[0],&lvar[773],&lvar[781]); // line circom 103
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[774];
// load src
Fr_add(&expaux[0],&lvar[774],&lvar[782]); // line circom 104
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[775];
// load src
Fr_add(&expaux[0],&lvar[775],&lvar[783]); // line circom 105
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[1106];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[1106],&circuitConstants[30]); // line circom 106
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &lvar[1107];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[1107],&circuitConstants[16]); // line circom 107
while(Fr_isTrue(&expaux[0])){
Fr_mul(&expaux[2],&lvar[1106],&circuitConstants[16]); // line circom 108
Fr_add(&expaux[1],&expaux[2],&circuitConstants[72]); // line circom 108
Fr_sub(&expaux[0],&expaux[1],&lvar[1107]); // line circom 108
{
PFrElement aux_dest = &lvar[((1 * Fr_toInt(&expaux[0])) + 784)];
// load src
Fr_shr(&expaux[1],&lvar[((1 * Fr_toInt(&lvar[1106])) + 768)],&lvar[1107]); // line circom 108
Fr_band(&expaux[0],&expaux[1],&circuitConstants[2]); // line circom 108
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[1107];
// load src
Fr_add(&expaux[0],&lvar[1107],&circuitConstants[2]); // line circom 107
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[1107],&circuitConstants[16]); // line circom 107
}
{
PFrElement aux_dest = &lvar[1106];
// load src
Fr_add(&expaux[0],&lvar[1106],&circuitConstants[2]); // line circom 106
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[1106],&circuitConstants[30]); // line circom 106
}
// return bucket
Fr_copyn(destination,&lvar[784],destination_size);
return;
}

void ssigma1_1(Circom_CalcWit* ctx,FrElement* lvar,uint componentFather,FrElement* destination,int destination_size){
FrElement* circuitConstants = ctx->circuitConstants;
FrElement expaux[5];
std::string myTemplateName = "ssigma1";
u64 myId = componentFather;
{

// start of call bucket
FrElement lvarcall[2];
// copying argument 0
Fr_copy(&lvarcall[0],&lvar[0]);
// end copying argument 0
// copying argument 1
Fr_copy(&lvarcall[1],&circuitConstants[17]);
// end copying argument 1
rrot_8(ctx,lvarcall,myId,&lvar[1],1);
// end call bucket
}

{

// start of call bucket
FrElement lvarcall[2];
// copying argument 0
Fr_copy(&lvarcall[0],&lvar[0]);
// end copying argument 0
// copying argument 1
Fr_copy(&lvarcall[1],&circuitConstants[18]);
// end copying argument 1
rrot_8(ctx,lvarcall,myId,&lvar[2],1);
// end call bucket
}

// return bucket
Fr_bxor(&expaux[1],&lvar[1],&lvar[2]); // line circom 23
Fr_shr(&expaux[2],&lvar[0],&circuitConstants[19]); // line circom 23
Fr_bxor(&expaux[0],&expaux[1],&expaux[2]); // line circom 23
Fr_copy(destination,&expaux[0]);
return;
}

void ssigma0_2(Circom_CalcWit* ctx,FrElement* lvar,uint componentFather,FrElement* destination,int destination_size){
FrElement* circuitConstants = ctx->circuitConstants;
FrElement expaux[5];
std::string myTemplateName = "ssigma0";
u64 myId = componentFather;
{

// start of call bucket
FrElement lvarcall[2];
// copying argument 0
Fr_copy(&lvarcall[0],&lvar[0]);
// end copying argument 0
// copying argument 1
Fr_copy(&lvarcall[1],&circuitConstants[14]);
// end copying argument 1
rrot_8(ctx,lvarcall,myId,&lvar[1],1);
// end call bucket
}

{

// start of call bucket
FrElement lvarcall[2];
// copying argument 0
Fr_copy(&lvarcall[0],&lvar[0]);
// end copying argument 0
// copying argument 1
Fr_copy(&lvarcall[1],&circuitConstants[20]);
// end copying argument 1
rrot_8(ctx,lvarcall,myId,&lvar[2],1);
// end call bucket
}

// return bucket
Fr_bxor(&expaux[1],&lvar[1],&lvar[2]); // line circom 19
Fr_shr(&expaux[2],&lvar[0],&circuitConstants[6]); // line circom 19
Fr_bxor(&expaux[0],&expaux[1],&expaux[2]); // line circom 19
Fr_copy(destination,&expaux[0]);
return;
}

void bsigma1_3(Circom_CalcWit* ctx,FrElement* lvar,uint componentFather,FrElement* destination,int destination_size){
FrElement* circuitConstants = ctx->circuitConstants;
FrElement expaux[4];
std::string myTemplateName = "bsigma1";
u64 myId = componentFather;
{

// start of call bucket
FrElement lvarcall[2];
// copying argument 0
Fr_copy(&lvarcall[0],&lvar[0]);
// end copying argument 0
// copying argument 1
Fr_copy(&lvarcall[1],&circuitConstants[12]);
// end copying argument 1
rrot_8(ctx,lvarcall,myId,&lvar[1],1);
// end call bucket
}

{

// start of call bucket
FrElement lvarcall[2];
// copying argument 0
Fr_copy(&lvarcall[0],&lvar[0]);
// end copying argument 0
// copying argument 1
Fr_copy(&lvarcall[1],&circuitConstants[35]);
// end copying argument 1
rrot_8(ctx,lvarcall,myId,&lvar[2],1);
// end call bucket
}

{

// start of call bucket
FrElement lvarcall[2];
// copying argument 0
Fr_copy(&lvarcall[0],&lvar[0]);
// end copying argument 0
// copying argument 1
Fr_copy(&lvarcall[1],&circuitConstants[60]);
// end copying argument 1
rrot_8(ctx,lvarcall,myId,&lvar[3],1);
// end call bucket
}

// return bucket
Fr_bxor(&expaux[1],&lvar[1],&lvar[2]); // line circom 15
Fr_bxor(&expaux[0],&expaux[1],&lvar[3]); // line circom 15
Fr_copy(destination,&expaux[0]);
return;
}

void Ch_4(Circom_CalcWit* ctx,FrElement* lvar,uint componentFather,FrElement* destination,int destination_size){
FrElement* circuitConstants = ctx->circuitConstants;
FrElement expaux[6];
std::string myTemplateName = "Ch";
u64 myId = componentFather;
// return bucket
Fr_band(&expaux[1],&lvar[0],&lvar[1]); // line circom 31
Fr_bxor(&expaux[3],&circuitConstants[337],&lvar[0]); // line circom 31
Fr_band(&expaux[2],&expaux[3],&lvar[2]); // line circom 31
Fr_bxor(&expaux[0],&expaux[1],&expaux[2]); // line circom 31
Fr_copy(destination,&expaux[0]);
return;
}

void sha256K_5(Circom_CalcWit* ctx,FrElement* lvar,uint componentFather,FrElement* destination,int destination_size){
FrElement* circuitConstants = ctx->circuitConstants;
FrElement expaux[1];
std::string myTemplateName = "sha256K";
u64 myId = componentFather;
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[22]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[23]);
}
{
PFrElement aux_dest = &lvar[3];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[24]);
}
{
PFrElement aux_dest = &lvar[4];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[25]);
}
{
PFrElement aux_dest = &lvar[5];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[26]);
}
{
PFrElement aux_dest = &lvar[6];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[27]);
}
{
PFrElement aux_dest = &lvar[7];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[28]);
}
{
PFrElement aux_dest = &lvar[8];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[29]);
}
{
PFrElement aux_dest = &lvar[9];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[31]);
}
{
PFrElement aux_dest = &lvar[10];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[33]);
}
{
PFrElement aux_dest = &lvar[11];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[34]);
}
{
PFrElement aux_dest = &lvar[12];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[36]);
}
{
PFrElement aux_dest = &lvar[13];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[38]);
}
{
PFrElement aux_dest = &lvar[14];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[40]);
}
{
PFrElement aux_dest = &lvar[15];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[42]);
}
{
PFrElement aux_dest = &lvar[16];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[44]);
}
{
PFrElement aux_dest = &lvar[17];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[46]);
}
{
PFrElement aux_dest = &lvar[18];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[47]);
}
{
PFrElement aux_dest = &lvar[19];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[48]);
}
{
PFrElement aux_dest = &lvar[20];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[49]);
}
{
PFrElement aux_dest = &lvar[21];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[51]);
}
{
PFrElement aux_dest = &lvar[22];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[53]);
}
{
PFrElement aux_dest = &lvar[23];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[55]);
}
{
PFrElement aux_dest = &lvar[24];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[57]);
}
{
PFrElement aux_dest = &lvar[25];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[59]);
}
{
PFrElement aux_dest = &lvar[26];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[61]);
}
{
PFrElement aux_dest = &lvar[27];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[63]);
}
{
PFrElement aux_dest = &lvar[28];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[65]);
}
{
PFrElement aux_dest = &lvar[29];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[67]);
}
{
PFrElement aux_dest = &lvar[30];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[69]);
}
{
PFrElement aux_dest = &lvar[31];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[71]);
}
{
PFrElement aux_dest = &lvar[32];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[73]);
}
{
PFrElement aux_dest = &lvar[33];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[74]);
}
{
PFrElement aux_dest = &lvar[34];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[76]);
}
{
PFrElement aux_dest = &lvar[35];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[77]);
}
{
PFrElement aux_dest = &lvar[36];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[79]);
}
{
PFrElement aux_dest = &lvar[37];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[81]);
}
{
PFrElement aux_dest = &lvar[38];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[83]);
}
{
PFrElement aux_dest = &lvar[39];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[85]);
}
{
PFrElement aux_dest = &lvar[40];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[87]);
}
{
PFrElement aux_dest = &lvar[41];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[89]);
}
{
PFrElement aux_dest = &lvar[42];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[91]);
}
{
PFrElement aux_dest = &lvar[43];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[93]);
}
{
PFrElement aux_dest = &lvar[44];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[95]);
}
{
PFrElement aux_dest = &lvar[45];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[97]);
}
{
PFrElement aux_dest = &lvar[46];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[99]);
}
{
PFrElement aux_dest = &lvar[47];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[101]);
}
{
PFrElement aux_dest = &lvar[48];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[103]);
}
{
PFrElement aux_dest = &lvar[49];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[105]);
}
{
PFrElement aux_dest = &lvar[50];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[107]);
}
{
PFrElement aux_dest = &lvar[51];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[109]);
}
{
PFrElement aux_dest = &lvar[52];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[111]);
}
{
PFrElement aux_dest = &lvar[53];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[113]);
}
{
PFrElement aux_dest = &lvar[54];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[115]);
}
{
PFrElement aux_dest = &lvar[55];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[117]);
}
{
PFrElement aux_dest = &lvar[56];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[119]);
}
{
PFrElement aux_dest = &lvar[57];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[121]);
}
{
PFrElement aux_dest = &lvar[58];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[123]);
}
{
PFrElement aux_dest = &lvar[59];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[125]);
}
{
PFrElement aux_dest = &lvar[60];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[127]);
}
{
PFrElement aux_dest = &lvar[61];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[129]);
}
{
PFrElement aux_dest = &lvar[62];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[131]);
}
{
PFrElement aux_dest = &lvar[63];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[133]);
}
{
PFrElement aux_dest = &lvar[64];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[135]);
}
// return bucket
Fr_copy(destination,&lvar[((1 * Fr_toInt(&lvar[0])) + 1)]);
return;
}

void bsigma0_6(Circom_CalcWit* ctx,FrElement* lvar,uint componentFather,FrElement* destination,int destination_size){
FrElement* circuitConstants = ctx->circuitConstants;
FrElement expaux[4];
std::string myTemplateName = "bsigma0";
u64 myId = componentFather;
{

// start of call bucket
FrElement lvarcall[2];
// copying argument 0
Fr_copy(&lvarcall[0],&lvar[0]);
// end copying argument 0
// copying argument 1
Fr_copy(&lvarcall[1],&circuitConstants[4]);
// end copying argument 1
rrot_8(ctx,lvarcall,myId,&lvar[1],1);
// end call bucket
}

{

// start of call bucket
FrElement lvarcall[2];
// copying argument 0
Fr_copy(&lvarcall[0],&lvar[0]);
// end copying argument 0
// copying argument 1
Fr_copy(&lvarcall[1],&circuitConstants[39]);
// end copying argument 1
rrot_8(ctx,lvarcall,myId,&lvar[2],1);
// end call bucket
}

{

// start of call bucket
FrElement lvarcall[2];
// copying argument 0
Fr_copy(&lvarcall[0],&lvar[0]);
// end copying argument 0
// copying argument 1
Fr_copy(&lvarcall[1],&circuitConstants[54]);
// end copying argument 1
rrot_8(ctx,lvarcall,myId,&lvar[3],1);
// end call bucket
}

// return bucket
Fr_bxor(&expaux[1],&lvar[1],&lvar[2]); // line circom 11
Fr_bxor(&expaux[0],&expaux[1],&lvar[3]); // line circom 11
Fr_copy(destination,&expaux[0]);
return;
}

void Maj_7(Circom_CalcWit* ctx,FrElement* lvar,uint componentFather,FrElement* destination,int destination_size){
FrElement* circuitConstants = ctx->circuitConstants;
FrElement expaux[6];
std::string myTemplateName = "Maj";
u64 myId = componentFather;
// return bucket
Fr_band(&expaux[2],&lvar[0],&lvar[1]); // line circom 27
Fr_band(&expaux[3],&lvar[0],&lvar[2]); // line circom 27
Fr_bxor(&expaux[1],&expaux[2],&expaux[3]); // line circom 27
Fr_band(&expaux[2],&lvar[1],&lvar[2]); // line circom 27
Fr_bxor(&expaux[0],&expaux[1],&expaux[2]); // line circom 27
Fr_copy(destination,&expaux[0]);
return;
}

void rrot_8(Circom_CalcWit* ctx,FrElement* lvar,uint componentFather,FrElement* destination,int destination_size){
FrElement* circuitConstants = ctx->circuitConstants;
FrElement expaux[8];
std::string myTemplateName = "rrot";
u64 myId = componentFather;
// return bucket
Fr_shr(&expaux[2],&lvar[0],&lvar[1]); // line circom 7
Fr_sub(&expaux[5],&circuitConstants[16],&lvar[1]); // line circom 7
Fr_shl(&expaux[3],&lvar[0],&expaux[5]); // line circom 7
Fr_bor(&expaux[1],&expaux[2],&expaux[3]); // line circom 7
Fr_band(&expaux[0],&expaux[1],&circuitConstants[337]); // line circom 7
Fr_copy(destination,&expaux[0]);
return;
}

// template declarations
void H_0_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 0;
ctx->componentMemory[coffset].templateName = "H";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 0;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[0];
H_0_run(coffset,ctx);
}

void H_0_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
bool* mySubcomponentsParallel = ctx->componentMemory[ctx_index].subcomponentsParallel;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[4];
FrElement lvar[10];
uint sub_component_aux;
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[1]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
{
PFrElement aux_dest = &lvar[3];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[5]);
}
{
PFrElement aux_dest = &lvar[4];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[7]);
}
{
PFrElement aux_dest = &lvar[5];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[9]);
}
{
PFrElement aux_dest = &lvar[6];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[11]);
}
{
PFrElement aux_dest = &lvar[7];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[13]);
}
{
PFrElement aux_dest = &lvar[8];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[15]);
}
{
PFrElement aux_dest = &lvar[9];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[9],&circuitConstants[16]); // line circom 32
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[9])) + 0)];
// load src
Fr_shr(&expaux[1],&circuitConstants[1],&lvar[9]); // line circom 33
Fr_band(&expaux[0],&expaux[1],&circuitConstants[2]); // line circom 33
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[9];
// load src
Fr_add(&expaux[0],&lvar[9],&circuitConstants[2]); // line circom 32
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[9],&circuitConstants[16]); // line circom 32
}
}

void H_1_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 1;
ctx->componentMemory[coffset].templateName = "H";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 0;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[0];
H_1_run(coffset,ctx);
}

void H_1_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
bool* mySubcomponentsParallel = ctx->componentMemory[ctx_index].subcomponentsParallel;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[4];
FrElement lvar[10];
uint sub_component_aux;
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[2]);
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[1]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
{
PFrElement aux_dest = &lvar[3];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[5]);
}
{
PFrElement aux_dest = &lvar[4];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[7]);
}
{
PFrElement aux_dest = &lvar[5];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[9]);
}
{
PFrElement aux_dest = &lvar[6];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[11]);
}
{
PFrElement aux_dest = &lvar[7];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[13]);
}
{
PFrElement aux_dest = &lvar[8];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[15]);
}
{
PFrElement aux_dest = &lvar[9];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[9],&circuitConstants[16]); // line circom 32
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[9])) + 0)];
// load src
Fr_shr(&expaux[1],&circuitConstants[3],&lvar[9]); // line circom 33
Fr_band(&expaux[0],&expaux[1],&circuitConstants[2]); // line circom 33
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[9];
// load src
Fr_add(&expaux[0],&lvar[9],&circuitConstants[2]); // line circom 32
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[9],&circuitConstants[16]); // line circom 32
}
}

void H_2_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 2;
ctx->componentMemory[coffset].templateName = "H";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 0;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[0];
H_2_run(coffset,ctx);
}

void H_2_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
bool* mySubcomponentsParallel = ctx->componentMemory[ctx_index].subcomponentsParallel;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[4];
FrElement lvar[10];
uint sub_component_aux;
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[4]);
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[1]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
{
PFrElement aux_dest = &lvar[3];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[5]);
}
{
PFrElement aux_dest = &lvar[4];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[7]);
}
{
PFrElement aux_dest = &lvar[5];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[9]);
}
{
PFrElement aux_dest = &lvar[6];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[11]);
}
{
PFrElement aux_dest = &lvar[7];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[13]);
}
{
PFrElement aux_dest = &lvar[8];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[15]);
}
{
PFrElement aux_dest = &lvar[9];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[9],&circuitConstants[16]); // line circom 32
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[9])) + 0)];
// load src
Fr_shr(&expaux[1],&circuitConstants[5],&lvar[9]); // line circom 33
Fr_band(&expaux[0],&expaux[1],&circuitConstants[2]); // line circom 33
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[9];
// load src
Fr_add(&expaux[0],&lvar[9],&circuitConstants[2]); // line circom 32
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[9],&circuitConstants[16]); // line circom 32
}
}

void H_3_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 3;
ctx->componentMemory[coffset].templateName = "H";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 0;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[0];
H_3_run(coffset,ctx);
}

void H_3_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
bool* mySubcomponentsParallel = ctx->componentMemory[ctx_index].subcomponentsParallel;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[4];
FrElement lvar[10];
uint sub_component_aux;
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[6]);
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[1]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
{
PFrElement aux_dest = &lvar[3];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[5]);
}
{
PFrElement aux_dest = &lvar[4];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[7]);
}
{
PFrElement aux_dest = &lvar[5];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[9]);
}
{
PFrElement aux_dest = &lvar[6];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[11]);
}
{
PFrElement aux_dest = &lvar[7];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[13]);
}
{
PFrElement aux_dest = &lvar[8];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[15]);
}
{
PFrElement aux_dest = &lvar[9];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[9],&circuitConstants[16]); // line circom 32
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[9])) + 0)];
// load src
Fr_shr(&expaux[1],&circuitConstants[7],&lvar[9]); // line circom 33
Fr_band(&expaux[0],&expaux[1],&circuitConstants[2]); // line circom 33
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[9];
// load src
Fr_add(&expaux[0],&lvar[9],&circuitConstants[2]); // line circom 32
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[9],&circuitConstants[16]); // line circom 32
}
}

void H_4_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 4;
ctx->componentMemory[coffset].templateName = "H";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 0;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[0];
H_4_run(coffset,ctx);
}

void H_4_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
bool* mySubcomponentsParallel = ctx->componentMemory[ctx_index].subcomponentsParallel;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[4];
FrElement lvar[10];
uint sub_component_aux;
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[8]);
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[1]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
{
PFrElement aux_dest = &lvar[3];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[5]);
}
{
PFrElement aux_dest = &lvar[4];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[7]);
}
{
PFrElement aux_dest = &lvar[5];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[9]);
}
{
PFrElement aux_dest = &lvar[6];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[11]);
}
{
PFrElement aux_dest = &lvar[7];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[13]);
}
{
PFrElement aux_dest = &lvar[8];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[15]);
}
{
PFrElement aux_dest = &lvar[9];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[9],&circuitConstants[16]); // line circom 32
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[9])) + 0)];
// load src
Fr_shr(&expaux[1],&circuitConstants[9],&lvar[9]); // line circom 33
Fr_band(&expaux[0],&expaux[1],&circuitConstants[2]); // line circom 33
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[9];
// load src
Fr_add(&expaux[0],&lvar[9],&circuitConstants[2]); // line circom 32
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[9],&circuitConstants[16]); // line circom 32
}
}

void H_5_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 5;
ctx->componentMemory[coffset].templateName = "H";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 0;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[0];
H_5_run(coffset,ctx);
}

void H_5_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
bool* mySubcomponentsParallel = ctx->componentMemory[ctx_index].subcomponentsParallel;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[4];
FrElement lvar[10];
uint sub_component_aux;
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[10]);
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[1]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
{
PFrElement aux_dest = &lvar[3];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[5]);
}
{
PFrElement aux_dest = &lvar[4];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[7]);
}
{
PFrElement aux_dest = &lvar[5];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[9]);
}
{
PFrElement aux_dest = &lvar[6];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[11]);
}
{
PFrElement aux_dest = &lvar[7];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[13]);
}
{
PFrElement aux_dest = &lvar[8];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[15]);
}
{
PFrElement aux_dest = &lvar[9];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[9],&circuitConstants[16]); // line circom 32
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[9])) + 0)];
// load src
Fr_shr(&expaux[1],&circuitConstants[11],&lvar[9]); // line circom 33
Fr_band(&expaux[0],&expaux[1],&circuitConstants[2]); // line circom 33
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[9];
// load src
Fr_add(&expaux[0],&lvar[9],&circuitConstants[2]); // line circom 32
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[9],&circuitConstants[16]); // line circom 32
}
}

void H_6_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 6;
ctx->componentMemory[coffset].templateName = "H";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 0;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[0];
H_6_run(coffset,ctx);
}

void H_6_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
bool* mySubcomponentsParallel = ctx->componentMemory[ctx_index].subcomponentsParallel;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[4];
FrElement lvar[10];
uint sub_component_aux;
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[12]);
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[1]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
{
PFrElement aux_dest = &lvar[3];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[5]);
}
{
PFrElement aux_dest = &lvar[4];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[7]);
}
{
PFrElement aux_dest = &lvar[5];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[9]);
}
{
PFrElement aux_dest = &lvar[6];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[11]);
}
{
PFrElement aux_dest = &lvar[7];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[13]);
}
{
PFrElement aux_dest = &lvar[8];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[15]);
}
{
PFrElement aux_dest = &lvar[9];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[9],&circuitConstants[16]); // line circom 32
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[9])) + 0)];
// load src
Fr_shr(&expaux[1],&circuitConstants[13],&lvar[9]); // line circom 33
Fr_band(&expaux[0],&expaux[1],&circuitConstants[2]); // line circom 33
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[9];
// load src
Fr_add(&expaux[0],&lvar[9],&circuitConstants[2]); // line circom 32
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[9],&circuitConstants[16]); // line circom 32
}
}

void H_7_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 7;
ctx->componentMemory[coffset].templateName = "H";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 0;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[0];
H_7_run(coffset,ctx);
}

void H_7_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
bool* mySubcomponentsParallel = ctx->componentMemory[ctx_index].subcomponentsParallel;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[4];
FrElement lvar[10];
uint sub_component_aux;
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[14]);
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[1]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
{
PFrElement aux_dest = &lvar[3];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[5]);
}
{
PFrElement aux_dest = &lvar[4];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[7]);
}
{
PFrElement aux_dest = &lvar[5];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[9]);
}
{
PFrElement aux_dest = &lvar[6];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[11]);
}
{
PFrElement aux_dest = &lvar[7];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[13]);
}
{
PFrElement aux_dest = &lvar[8];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[15]);
}
{
PFrElement aux_dest = &lvar[9];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[9],&circuitConstants[16]); // line circom 32
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[9])) + 0)];
// load src
Fr_shr(&expaux[1],&circuitConstants[15],&lvar[9]); // line circom 33
Fr_band(&expaux[0],&expaux[1],&circuitConstants[2]); // line circom 33
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[9];
// load src
Fr_add(&expaux[0],&lvar[9],&circuitConstants[2]); // line circom 32
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[9],&circuitConstants[16]); // line circom 32
}
}

void RotR_8_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 8;
ctx->componentMemory[coffset].templateName = "RotR";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 32;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[0];
}

void RotR_8_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
bool* mySubcomponentsParallel = ctx->componentMemory[ctx_index].subcomponentsParallel;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[4];
FrElement lvar[3];
uint sub_component_aux;
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[16]);
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[17]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[2],&circuitConstants[16]); // line circom 25
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[2])) + 0)];
// load src
Fr_add(&expaux[1],&lvar[2],&circuitConstants[17]); // line circom 26
Fr_mod(&expaux[0],&expaux[1],&circuitConstants[16]); // line circom 26
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + ((1 * Fr_toInt(&expaux[0])) + 32)]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
Fr_add(&expaux[0],&lvar[2],&circuitConstants[2]); // line circom 25
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[2],&circuitConstants[16]); // line circom 25
}
}

void RotR_9_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 9;
ctx->componentMemory[coffset].templateName = "RotR";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 32;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[0];
}

void RotR_9_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
bool* mySubcomponentsParallel = ctx->componentMemory[ctx_index].subcomponentsParallel;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[4];
FrElement lvar[3];
uint sub_component_aux;
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[16]);
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[18]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[2],&circuitConstants[16]); // line circom 25
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[2])) + 0)];
// load src
Fr_add(&expaux[1],&lvar[2],&circuitConstants[18]); // line circom 26
Fr_mod(&expaux[0],&expaux[1],&circuitConstants[16]); // line circom 26
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + ((1 * Fr_toInt(&expaux[0])) + 32)]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
Fr_add(&expaux[0],&lvar[2],&circuitConstants[2]); // line circom 25
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[2],&circuitConstants[16]); // line circom 25
}
}

void ShR_10_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 10;
ctx->componentMemory[coffset].templateName = "ShR";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 32;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[0];
}

void ShR_10_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
bool* mySubcomponentsParallel = ctx->componentMemory[ctx_index].subcomponentsParallel;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[4];
FrElement lvar[3];
uint sub_component_aux;
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[16]);
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[19]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[2],&circuitConstants[16]); // line circom 25
while(Fr_isTrue(&expaux[0])){
Fr_add(&expaux[1],&lvar[2],&circuitConstants[19]); // line circom 26
Fr_geq(&expaux[0],&expaux[1],&circuitConstants[16]); // line circom 26
if(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[2])) + 0)];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
}else{
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[2])) + 0)];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + ((1 * (Fr_toInt(&lvar[2]) + 10)) + 32)]);
}
}
{
PFrElement aux_dest = &lvar[2];
// load src
Fr_add(&expaux[0],&lvar[2],&circuitConstants[2]); // line circom 25
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[2],&circuitConstants[16]); // line circom 25
}
}

void Xor3_11_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 11;
ctx->componentMemory[coffset].templateName = "Xor3";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 96;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[0];
}

void Xor3_11_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
bool* mySubcomponentsParallel = ctx->componentMemory[ctx_index].subcomponentsParallel;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[12];
FrElement lvar[2];
uint sub_component_aux;
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[16]);
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[1],&circuitConstants[16]); // line circom 41
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[1])) + 128)];
// load src
Fr_mul(&expaux[0],&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[1])) + 64)],&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[1])) + 96)]); // line circom 42
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[1])) + 0)];
// load src
Fr_mul(&expaux[9],&circuitConstants[4],&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[1])) + 64)]); // line circom 43
Fr_sub(&expaux[7],&circuitConstants[2],&expaux[9]); // line circom 43
Fr_mul(&expaux[8],&circuitConstants[4],&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[1])) + 96)]); // line circom 43
Fr_sub(&expaux[6],&expaux[7],&expaux[8]); // line circom 43
Fr_mul(&expaux[7],&circuitConstants[8],&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[1])) + 128)]); // line circom 43
Fr_add(&expaux[5],&expaux[6],&expaux[7]); // line circom 43
Fr_mul(&expaux[3],&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[1])) + 32)],&expaux[5]); // line circom 43
Fr_add(&expaux[2],&expaux[3],&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[1])) + 64)]); // line circom 43
Fr_add(&expaux[1],&expaux[2],&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[1])) + 96)]); // line circom 43
Fr_mul(&expaux[2],&circuitConstants[4],&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[1])) + 128)]); // line circom 43
Fr_sub(&expaux[0],&expaux[1],&expaux[2]); // line circom 43
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[1];
// load src
Fr_add(&expaux[0],&lvar[1],&circuitConstants[2]); // line circom 41
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[1],&circuitConstants[16]); // line circom 41
}
}

void SmallSigma_12_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 12;
ctx->componentMemory[coffset].templateName = "SmallSigma";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 32;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[4];
}

void SmallSigma_12_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
bool* mySubcomponentsParallel = ctx->componentMemory[ctx_index].subcomponentsParallel;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[3];
FrElement lvar[4];
uint sub_component_aux;
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[17]);
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[18]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[19]);
}
{
uint aux_create = 0;
int aux_cmp_num = 0+ctx_index+1;
uint csoffset = mySignalStart+64;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "rota";
RotR_8_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 64 ;
aux_cmp_num += 1;
}
}
{
uint aux_create = 1;
int aux_cmp_num = 1+ctx_index+1;
uint csoffset = mySignalStart+128;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "rotb";
RotR_9_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 64 ;
aux_cmp_num += 1;
}
}
{
uint aux_create = 2;
int aux_cmp_num = 2+ctx_index+1;
uint csoffset = mySignalStart+192;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "shrc";
ShR_10_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 64 ;
aux_cmp_num += 1;
}
}
{
uint aux_create = 3;
int aux_cmp_num = 3+ctx_index+1;
uint csoffset = mySignalStart+256;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "xor3";
Xor3_11_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 160 ;
aux_cmp_num += 1;
}
}
{
PFrElement aux_dest = &lvar[3];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[3];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[3],&circuitConstants[16]); // line circom 34
while(Fr_isTrue(&expaux[0])){
{
uint cmp_index_ref = 0;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ((1 * Fr_toInt(&lvar[3])) + 32)];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[3])) + 32)]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
RotR_8_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = 1;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ((1 * Fr_toInt(&lvar[3])) + 32)];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[3])) + 32)]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
RotR_9_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = 2;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ((1 * Fr_toInt(&lvar[3])) + 32)];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[3])) + 32)]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
ShR_10_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
PFrElement aux_dest = &lvar[3];
// load src
Fr_add(&expaux[0],&lvar[3],&circuitConstants[2]); // line circom 34
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[3],&circuitConstants[16]); // line circom 34
}
{
PFrElement aux_dest = &lvar[3];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[3],&circuitConstants[16]); // line circom 41
while(Fr_isTrue(&expaux[0])){
{
uint cmp_index_ref = 3;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ((1 * Fr_toInt(&lvar[3])) + 32)];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[0]].signalStart + ((1 * Fr_toInt(&lvar[3])) + 0)]);
}
// no need to run sub component
assert(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter);
}
{
uint cmp_index_ref = 3;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ((1 * Fr_toInt(&lvar[3])) + 64)];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[1]].signalStart + ((1 * Fr_toInt(&lvar[3])) + 0)]);
}
// no need to run sub component
assert(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter);
}
{
uint cmp_index_ref = 3;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ((1 * Fr_toInt(&lvar[3])) + 96)];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[2]].signalStart + ((1 * Fr_toInt(&lvar[3])) + 0)]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
Xor3_11_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
PFrElement aux_dest = &lvar[3];
// load src
Fr_add(&expaux[0],&lvar[3],&circuitConstants[2]); // line circom 41
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[3],&circuitConstants[16]); // line circom 41
}
{
PFrElement aux_dest = &lvar[3];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[3],&circuitConstants[16]); // line circom 47
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[3])) + 0)];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[3]].signalStart + ((1 * Fr_toInt(&lvar[3])) + 0)]);
}
{
PFrElement aux_dest = &lvar[3];
// load src
Fr_add(&expaux[0],&lvar[3],&circuitConstants[2]); // line circom 47
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[3],&circuitConstants[16]); // line circom 47
}
}

void RotR_13_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 13;
ctx->componentMemory[coffset].templateName = "RotR";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 32;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[0];
}

void RotR_13_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
bool* mySubcomponentsParallel = ctx->componentMemory[ctx_index].subcomponentsParallel;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[4];
FrElement lvar[3];
uint sub_component_aux;
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[16]);
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[14]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[2],&circuitConstants[16]); // line circom 25
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[2])) + 0)];
// load src
Fr_add(&expaux[1],&lvar[2],&circuitConstants[14]); // line circom 26
Fr_mod(&expaux[0],&expaux[1],&circuitConstants[16]); // line circom 26
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + ((1 * Fr_toInt(&expaux[0])) + 32)]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
Fr_add(&expaux[0],&lvar[2],&circuitConstants[2]); // line circom 25
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[2],&circuitConstants[16]); // line circom 25
}
}

void RotR_14_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 14;
ctx->componentMemory[coffset].templateName = "RotR";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 32;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[0];
}

void RotR_14_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
bool* mySubcomponentsParallel = ctx->componentMemory[ctx_index].subcomponentsParallel;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[4];
FrElement lvar[3];
uint sub_component_aux;
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[16]);
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[20]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[2],&circuitConstants[16]); // line circom 25
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[2])) + 0)];
// load src
Fr_add(&expaux[1],&lvar[2],&circuitConstants[20]); // line circom 26
Fr_mod(&expaux[0],&expaux[1],&circuitConstants[16]); // line circom 26
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + ((1 * Fr_toInt(&expaux[0])) + 32)]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
Fr_add(&expaux[0],&lvar[2],&circuitConstants[2]); // line circom 25
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[2],&circuitConstants[16]); // line circom 25
}
}

void ShR_15_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 15;
ctx->componentMemory[coffset].templateName = "ShR";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 32;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[0];
}

void ShR_15_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
bool* mySubcomponentsParallel = ctx->componentMemory[ctx_index].subcomponentsParallel;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[4];
FrElement lvar[3];
uint sub_component_aux;
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[16]);
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[6]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[2],&circuitConstants[16]); // line circom 25
while(Fr_isTrue(&expaux[0])){
Fr_add(&expaux[1],&lvar[2],&circuitConstants[6]); // line circom 26
Fr_geq(&expaux[0],&expaux[1],&circuitConstants[16]); // line circom 26
if(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[2])) + 0)];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
}else{
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[2])) + 0)];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + ((1 * (Fr_toInt(&lvar[2]) + 3)) + 32)]);
}
}
{
PFrElement aux_dest = &lvar[2];
// load src
Fr_add(&expaux[0],&lvar[2],&circuitConstants[2]); // line circom 25
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[2],&circuitConstants[16]); // line circom 25
}
}

void SmallSigma_16_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 16;
ctx->componentMemory[coffset].templateName = "SmallSigma";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 32;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[4];
}

void SmallSigma_16_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
bool* mySubcomponentsParallel = ctx->componentMemory[ctx_index].subcomponentsParallel;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[3];
FrElement lvar[4];
uint sub_component_aux;
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[14]);
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[20]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[6]);
}
{
uint aux_create = 0;
int aux_cmp_num = 0+ctx_index+1;
uint csoffset = mySignalStart+64;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "rota";
RotR_13_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 64 ;
aux_cmp_num += 1;
}
}
{
uint aux_create = 1;
int aux_cmp_num = 1+ctx_index+1;
uint csoffset = mySignalStart+128;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "rotb";
RotR_14_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 64 ;
aux_cmp_num += 1;
}
}
{
uint aux_create = 2;
int aux_cmp_num = 2+ctx_index+1;
uint csoffset = mySignalStart+192;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "shrc";
ShR_15_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 64 ;
aux_cmp_num += 1;
}
}
{
uint aux_create = 3;
int aux_cmp_num = 3+ctx_index+1;
uint csoffset = mySignalStart+256;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "xor3";
Xor3_11_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 160 ;
aux_cmp_num += 1;
}
}
{
PFrElement aux_dest = &lvar[3];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[3];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[3],&circuitConstants[16]); // line circom 34
while(Fr_isTrue(&expaux[0])){
{
uint cmp_index_ref = 0;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ((1 * Fr_toInt(&lvar[3])) + 32)];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[3])) + 32)]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
RotR_13_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = 1;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ((1 * Fr_toInt(&lvar[3])) + 32)];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[3])) + 32)]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
RotR_14_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = 2;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ((1 * Fr_toInt(&lvar[3])) + 32)];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[3])) + 32)]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
ShR_15_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
PFrElement aux_dest = &lvar[3];
// load src
Fr_add(&expaux[0],&lvar[3],&circuitConstants[2]); // line circom 34
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[3],&circuitConstants[16]); // line circom 34
}
{
PFrElement aux_dest = &lvar[3];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[3],&circuitConstants[16]); // line circom 41
while(Fr_isTrue(&expaux[0])){
{
uint cmp_index_ref = 3;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ((1 * Fr_toInt(&lvar[3])) + 32)];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[0]].signalStart + ((1 * Fr_toInt(&lvar[3])) + 0)]);
}
// no need to run sub component
assert(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter);
}
{
uint cmp_index_ref = 3;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ((1 * Fr_toInt(&lvar[3])) + 64)];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[1]].signalStart + ((1 * Fr_toInt(&lvar[3])) + 0)]);
}
// no need to run sub component
assert(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter);
}
{
uint cmp_index_ref = 3;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ((1 * Fr_toInt(&lvar[3])) + 96)];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[2]].signalStart + ((1 * Fr_toInt(&lvar[3])) + 0)]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
Xor3_11_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
PFrElement aux_dest = &lvar[3];
// load src
Fr_add(&expaux[0],&lvar[3],&circuitConstants[2]); // line circom 41
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[3],&circuitConstants[16]); // line circom 41
}
{
PFrElement aux_dest = &lvar[3];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[3],&circuitConstants[16]); // line circom 47
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[3])) + 0)];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[3]].signalStart + ((1 * Fr_toInt(&lvar[3])) + 0)]);
}
{
PFrElement aux_dest = &lvar[3];
// load src
Fr_add(&expaux[0],&lvar[3],&circuitConstants[2]); // line circom 47
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[3],&circuitConstants[16]); // line circom 47
}
}

void BinSum_17_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 17;
ctx->componentMemory[coffset].templateName = "BinSum";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 128;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[0];
}

void BinSum_17_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
bool* mySubcomponentsParallel = ctx->componentMemory[ctx_index].subcomponentsParallel;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[6];
FrElement lvar[8];
uint sub_component_aux;
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[16]);
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[8]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[21]);
}
{
PFrElement aux_dest = &lvar[3];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[4];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[5];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[6];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[7];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[7];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[2]);
}
{
PFrElement aux_dest = &lvar[5];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[5],&circuitConstants[16]); // line circom 79
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &lvar[6];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[6],&circuitConstants[8]); // line circom 80
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &lvar[3];
// load src
Fr_mul(&expaux[2],&signalValues[mySignalStart + (((32 * Fr_toInt(&lvar[6])) + (1 * Fr_toInt(&lvar[5]))) + 34)],&lvar[7]); // line circom 81
Fr_add(&expaux[0],&lvar[3],&expaux[2]); // line circom 81
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[6];
// load src
Fr_add(&expaux[0],&lvar[6],&circuitConstants[2]); // line circom 80
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[6],&circuitConstants[8]); // line circom 80
}
{
PFrElement aux_dest = &lvar[7];
// load src
Fr_add(&expaux[0],&lvar[7],&lvar[7]); // line circom 83
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[5];
// load src
Fr_add(&expaux[0],&lvar[5],&circuitConstants[2]); // line circom 79
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[5],&circuitConstants[16]); // line circom 79
}
{
PFrElement aux_dest = &lvar[7];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[2]);
}
{
PFrElement aux_dest = &lvar[5];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[5],&circuitConstants[21]); // line circom 87
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[5])) + 0)];
// load src
Fr_shr(&expaux[1],&lvar[3],&lvar[5]); // line circom 88
Fr_band(&expaux[0],&expaux[1],&circuitConstants[2]); // line circom 88
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_sub(&expaux[3],&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[5])) + 0)],&circuitConstants[2]); // line circom 91
Fr_mul(&expaux[1],&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[5])) + 0)],&expaux[3]); // line circom 91
Fr_eq(&expaux[0],&expaux[1],&circuitConstants[0]); // line circom 91
if (!Fr_isTrue(&expaux[0])) std::cout << "Failed assert in template/function " << myTemplateName << " line 91. " <<  "Followed trace of components: " << ctx->getTrace(myId) << std::endl;
assert(Fr_isTrue(&expaux[0]));
{
PFrElement aux_dest = &lvar[4];
// load src
Fr_mul(&expaux[2],&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[5])) + 0)],&lvar[7]); // line circom 93
Fr_add(&expaux[0],&lvar[4],&expaux[2]); // line circom 93
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[7];
// load src
Fr_add(&expaux[0],&lvar[7],&lvar[7]); // line circom 95
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[5];
// load src
Fr_add(&expaux[0],&lvar[5],&circuitConstants[2]); // line circom 87
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[5],&circuitConstants[21]); // line circom 87
}
Fr_eq(&expaux[0],&lvar[3],&lvar[4]); // line circom 100
if (!Fr_isTrue(&expaux[0])) std::cout << "Failed assert in template/function " << myTemplateName << " line 100. " <<  "Followed trace of components: " << ctx->getTrace(myId) << std::endl;
assert(Fr_isTrue(&expaux[0]));
}

void SigmaPlus_18_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 18;
ctx->componentMemory[coffset].templateName = "SigmaPlus";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 128;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[3];
}

void SigmaPlus_18_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
bool* mySubcomponentsParallel = ctx->componentMemory[ctx_index].subcomponentsParallel;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[3];
FrElement lvar[1];
uint sub_component_aux;
{
uint aux_create = 0;
int aux_cmp_num = 5+ctx_index+1;
uint csoffset = mySignalStart+576;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "sigma1";
SmallSigma_12_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 416 ;
aux_cmp_num += 5;
}
}
{
uint aux_create = 1;
int aux_cmp_num = 0+ctx_index+1;
uint csoffset = mySignalStart+160;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "sigma0";
SmallSigma_16_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 416 ;
aux_cmp_num += 5;
}
}
{
uint aux_create = 2;
int aux_cmp_num = 10+ctx_index+1;
uint csoffset = mySignalStart+992;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "sum";
BinSum_17_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 162 ;
aux_cmp_num += 1;
}
}
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[0],&circuitConstants[16]); // line circom 34
while(Fr_isTrue(&expaux[0])){
{
uint cmp_index_ref = 0;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ((1 * Fr_toInt(&lvar[0])) + 32)];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[0])) + 32)]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
SmallSigma_12_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = 1;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ((1 * Fr_toInt(&lvar[0])) + 32)];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[0])) + 96)]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
SmallSigma_16_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
PFrElement aux_dest = &lvar[0];
// load src
Fr_add(&expaux[0],&lvar[0],&circuitConstants[2]); // line circom 34
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[0],&circuitConstants[16]); // line circom 34
}
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[0],&circuitConstants[16]); // line circom 40
while(Fr_isTrue(&expaux[0])){
{
uint cmp_index_ref = 2;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ((0 + (1 * Fr_toInt(&lvar[0]))) + 34)];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[0]].signalStart + ((1 * Fr_toInt(&lvar[0])) + 0)]);
}
// no need to run sub component
assert(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter);
}
{
uint cmp_index_ref = 2;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ((32 + (1 * Fr_toInt(&lvar[0]))) + 34)];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[0])) + 64)]);
}
// no need to run sub component
assert(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter);
}
{
uint cmp_index_ref = 2;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ((64 + (1 * Fr_toInt(&lvar[0]))) + 34)];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[1]].signalStart + ((1 * Fr_toInt(&lvar[0])) + 0)]);
}
// no need to run sub component
assert(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter);
}
{
uint cmp_index_ref = 2;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ((96 + (1 * Fr_toInt(&lvar[0]))) + 34)];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[0])) + 128)]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
BinSum_17_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
PFrElement aux_dest = &lvar[0];
// load src
Fr_add(&expaux[0],&lvar[0],&circuitConstants[2]); // line circom 40
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[0],&circuitConstants[16]); // line circom 40
}
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[0],&circuitConstants[16]); // line circom 47
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[0])) + 0)];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[2]].signalStart + ((1 * Fr_toInt(&lvar[0])) + 0)]);
}
{
PFrElement aux_dest = &lvar[0];
// load src
Fr_add(&expaux[0],&lvar[0],&circuitConstants[2]); // line circom 47
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[0],&circuitConstants[16]); // line circom 47
}
}

void K_19_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 19;
ctx->componentMemory[coffset].templateName = "K";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 0;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[0];
K_19_run(coffset,ctx);
}

void K_19_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
bool* mySubcomponentsParallel = ctx->componentMemory[ctx_index].subcomponentsParallel;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[4];
FrElement lvar[66];
uint sub_component_aux;
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[22]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[23]);
}
{
PFrElement aux_dest = &lvar[3];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[24]);
}
{
PFrElement aux_dest = &lvar[4];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[25]);
}
{
PFrElement aux_dest = &lvar[5];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[26]);
}
{
PFrElement aux_dest = &lvar[6];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[27]);
}
{
PFrElement aux_dest = &lvar[7];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[28]);
}
{
PFrElement aux_dest = &lvar[8];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[29]);
}
{
PFrElement aux_dest = &lvar[9];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[31]);
}
{
PFrElement aux_dest = &lvar[10];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[33]);
}
{
PFrElement aux_dest = &lvar[11];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[34]);
}
{
PFrElement aux_dest = &lvar[12];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[36]);
}
{
PFrElement aux_dest = &lvar[13];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[38]);
}
{
PFrElement aux_dest = &lvar[14];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[40]);
}
{
PFrElement aux_dest = &lvar[15];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[42]);
}
{
PFrElement aux_dest = &lvar[16];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[44]);
}
{
PFrElement aux_dest = &lvar[17];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[46]);
}
{
PFrElement aux_dest = &lvar[18];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[47]);
}
{
PFrElement aux_dest = &lvar[19];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[48]);
}
{
PFrElement aux_dest = &lvar[20];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[49]);
}
{
PFrElement aux_dest = &lvar[21];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[51]);
}
{
PFrElement aux_dest = &lvar[22];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[53]);
}
{
PFrElement aux_dest = &lvar[23];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[55]);
}
{
PFrElement aux_dest = &lvar[24];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[57]);
}
{
PFrElement aux_dest = &lvar[25];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[59]);
}
{
PFrElement aux_dest = &lvar[26];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[61]);
}
{
PFrElement aux_dest = &lvar[27];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[63]);
}
{
PFrElement aux_dest = &lvar[28];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[65]);
}
{
PFrElement aux_dest = &lvar[29];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[67]);
}
{
PFrElement aux_dest = &lvar[30];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[69]);
}
{
PFrElement aux_dest = &lvar[31];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[71]);
}
{
PFrElement aux_dest = &lvar[32];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[73]);
}
{
PFrElement aux_dest = &lvar[33];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[74]);
}
{
PFrElement aux_dest = &lvar[34];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[76]);
}
{
PFrElement aux_dest = &lvar[35];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[77]);
}
{
PFrElement aux_dest = &lvar[36];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[79]);
}
{
PFrElement aux_dest = &lvar[37];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[81]);
}
{
PFrElement aux_dest = &lvar[38];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[83]);
}
{
PFrElement aux_dest = &lvar[39];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[85]);
}
{
PFrElement aux_dest = &lvar[40];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[87]);
}
{
PFrElement aux_dest = &lvar[41];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[89]);
}
{
PFrElement aux_dest = &lvar[42];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[91]);
}
{
PFrElement aux_dest = &lvar[43];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[93]);
}
{
PFrElement aux_dest = &lvar[44];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[95]);
}
{
PFrElement aux_dest = &lvar[45];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[97]);
}
{
PFrElement aux_dest = &lvar[46];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[99]);
}
{
PFrElement aux_dest = &lvar[47];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[101]);
}
{
PFrElement aux_dest = &lvar[48];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[103]);
}
{
PFrElement aux_dest = &lvar[49];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[105]);
}
{
PFrElement aux_dest = &lvar[50];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[107]);
}
{
PFrElement aux_dest = &lvar[51];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[109]);
}
{
PFrElement aux_dest = &lvar[52];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[111]);
}
{
PFrElement aux_dest = &lvar[53];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[113]);
}
{
PFrElement aux_dest = &lvar[54];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[115]);
}
{
PFrElement aux_dest = &lvar[55];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[117]);
}
{
PFrElement aux_dest = &lvar[56];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[119]);
}
{
PFrElement aux_dest = &lvar[57];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[121]);
}
{
PFrElement aux_dest = &lvar[58];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[123]);
}
{
PFrElement aux_dest = &lvar[59];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[125]);
}
{
PFrElement aux_dest = &lvar[60];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[127]);
}
{
PFrElement aux_dest = &lvar[61];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[129]);
}
{
PFrElement aux_dest = &lvar[62];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[131]);
}
{
PFrElement aux_dest = &lvar[63];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[133]);
}
{
PFrElement aux_dest = &lvar[64];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[135]);
}
{
PFrElement aux_dest = &lvar[65];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[65],&circuitConstants[16]); // line circom 50
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[65])) + 0)];
// load src
Fr_shr(&expaux[1],&circuitConstants[22],&lvar[65]); // line circom 51
Fr_band(&expaux[0],&expaux[1],&circuitConstants[2]); // line circom 51
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[65];
// load src
Fr_add(&expaux[0],&lvar[65],&circuitConstants[2]); // line circom 50
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[65],&circuitConstants[16]); // line circom 50
}
}

void K_20_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 20;
ctx->componentMemory[coffset].templateName = "K";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 0;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[0];
K_20_run(coffset,ctx);
}

void K_20_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
bool* mySubcomponentsParallel = ctx->componentMemory[ctx_index].subcomponentsParallel;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[4];
FrElement lvar[66];
uint sub_component_aux;
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[2]);
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[22]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[23]);
}
{
PFrElement aux_dest = &lvar[3];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[24]);
}
{
PFrElement aux_dest = &lvar[4];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[25]);
}
{
PFrElement aux_dest = &lvar[5];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[26]);
}
{
PFrElement aux_dest = &lvar[6];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[27]);
}
{
PFrElement aux_dest = &lvar[7];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[28]);
}
{
PFrElement aux_dest = &lvar[8];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[29]);
}
{
PFrElement aux_dest = &lvar[9];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[31]);
}
{
PFrElement aux_dest = &lvar[10];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[33]);
}
{
PFrElement aux_dest = &lvar[11];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[34]);
}
{
PFrElement aux_dest = &lvar[12];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[36]);
}
{
PFrElement aux_dest = &lvar[13];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[38]);
}
{
PFrElement aux_dest = &lvar[14];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[40]);
}
{
PFrElement aux_dest = &lvar[15];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[42]);
}
{
PFrElement aux_dest = &lvar[16];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[44]);
}
{
PFrElement aux_dest = &lvar[17];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[46]);
}
{
PFrElement aux_dest = &lvar[18];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[47]);
}
{
PFrElement aux_dest = &lvar[19];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[48]);
}
{
PFrElement aux_dest = &lvar[20];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[49]);
}
{
PFrElement aux_dest = &lvar[21];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[51]);
}
{
PFrElement aux_dest = &lvar[22];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[53]);
}
{
PFrElement aux_dest = &lvar[23];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[55]);
}
{
PFrElement aux_dest = &lvar[24];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[57]);
}
{
PFrElement aux_dest = &lvar[25];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[59]);
}
{
PFrElement aux_dest = &lvar[26];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[61]);
}
{
PFrElement aux_dest = &lvar[27];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[63]);
}
{
PFrElement aux_dest = &lvar[28];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[65]);
}
{
PFrElement aux_dest = &lvar[29];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[67]);
}
{
PFrElement aux_dest = &lvar[30];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[69]);
}
{
PFrElement aux_dest = &lvar[31];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[71]);
}
{
PFrElement aux_dest = &lvar[32];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[73]);
}
{
PFrElement aux_dest = &lvar[33];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[74]);
}
{
PFrElement aux_dest = &lvar[34];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[76]);
}
{
PFrElement aux_dest = &lvar[35];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[77]);
}
{
PFrElement aux_dest = &lvar[36];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[79]);
}
{
PFrElement aux_dest = &lvar[37];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[81]);
}
{
PFrElement aux_dest = &lvar[38];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[83]);
}
{
PFrElement aux_dest = &lvar[39];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[85]);
}
{
PFrElement aux_dest = &lvar[40];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[87]);
}
{
PFrElement aux_dest = &lvar[41];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[89]);
}
{
PFrElement aux_dest = &lvar[42];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[91]);
}
{
PFrElement aux_dest = &lvar[43];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[93]);
}
{
PFrElement aux_dest = &lvar[44];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[95]);
}
{
PFrElement aux_dest = &lvar[45];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[97]);
}
{
PFrElement aux_dest = &lvar[46];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[99]);
}
{
PFrElement aux_dest = &lvar[47];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[101]);
}
{
PFrElement aux_dest = &lvar[48];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[103]);
}
{
PFrElement aux_dest = &lvar[49];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[105]);
}
{
PFrElement aux_dest = &lvar[50];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[107]);
}
{
PFrElement aux_dest = &lvar[51];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[109]);
}
{
PFrElement aux_dest = &lvar[52];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[111]);
}
{
PFrElement aux_dest = &lvar[53];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[113]);
}
{
PFrElement aux_dest = &lvar[54];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[115]);
}
{
PFrElement aux_dest = &lvar[55];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[117]);
}
{
PFrElement aux_dest = &lvar[56];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[119]);
}
{
PFrElement aux_dest = &lvar[57];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[121]);
}
{
PFrElement aux_dest = &lvar[58];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[123]);
}
{
PFrElement aux_dest = &lvar[59];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[125]);
}
{
PFrElement aux_dest = &lvar[60];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[127]);
}
{
PFrElement aux_dest = &lvar[61];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[129]);
}
{
PFrElement aux_dest = &lvar[62];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[131]);
}
{
PFrElement aux_dest = &lvar[63];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[133]);
}
{
PFrElement aux_dest = &lvar[64];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[135]);
}
{
PFrElement aux_dest = &lvar[65];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[65],&circuitConstants[16]); // line circom 50
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[65])) + 0)];
// load src
Fr_shr(&expaux[1],&circuitConstants[23],&lvar[65]); // line circom 51
Fr_band(&expaux[0],&expaux[1],&circuitConstants[2]); // line circom 51
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[65];
// load src
Fr_add(&expaux[0],&lvar[65],&circuitConstants[2]); // line circom 50
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[65],&circuitConstants[16]); // line circom 50
}
}

void K_21_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 21;
ctx->componentMemory[coffset].templateName = "K";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 0;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[0];
K_21_run(coffset,ctx);
}

void K_21_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
bool* mySubcomponentsParallel = ctx->componentMemory[ctx_index].subcomponentsParallel;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[4];
FrElement lvar[66];
uint sub_component_aux;
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[4]);
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[22]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[23]);
}
{
PFrElement aux_dest = &lvar[3];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[24]);
}
{
PFrElement aux_dest = &lvar[4];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[25]);
}
{
PFrElement aux_dest = &lvar[5];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[26]);
}
{
PFrElement aux_dest = &lvar[6];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[27]);
}
{
PFrElement aux_dest = &lvar[7];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[28]);
}
{
PFrElement aux_dest = &lvar[8];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[29]);
}
{
PFrElement aux_dest = &lvar[9];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[31]);
}
{
PFrElement aux_dest = &lvar[10];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[33]);
}
{
PFrElement aux_dest = &lvar[11];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[34]);
}
{
PFrElement aux_dest = &lvar[12];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[36]);
}
{
PFrElement aux_dest = &lvar[13];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[38]);
}
{
PFrElement aux_dest = &lvar[14];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[40]);
}
{
PFrElement aux_dest = &lvar[15];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[42]);
}
{
PFrElement aux_dest = &lvar[16];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[44]);
}
{
PFrElement aux_dest = &lvar[17];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[46]);
}
{
PFrElement aux_dest = &lvar[18];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[47]);
}
{
PFrElement aux_dest = &lvar[19];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[48]);
}
{
PFrElement aux_dest = &lvar[20];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[49]);
}
{
PFrElement aux_dest = &lvar[21];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[51]);
}
{
PFrElement aux_dest = &lvar[22];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[53]);
}
{
PFrElement aux_dest = &lvar[23];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[55]);
}
{
PFrElement aux_dest = &lvar[24];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[57]);
}
{
PFrElement aux_dest = &lvar[25];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[59]);
}
{
PFrElement aux_dest = &lvar[26];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[61]);
}
{
PFrElement aux_dest = &lvar[27];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[63]);
}
{
PFrElement aux_dest = &lvar[28];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[65]);
}
{
PFrElement aux_dest = &lvar[29];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[67]);
}
{
PFrElement aux_dest = &lvar[30];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[69]);
}
{
PFrElement aux_dest = &lvar[31];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[71]);
}
{
PFrElement aux_dest = &lvar[32];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[73]);
}
{
PFrElement aux_dest = &lvar[33];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[74]);
}
{
PFrElement aux_dest = &lvar[34];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[76]);
}
{
PFrElement aux_dest = &lvar[35];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[77]);
}
{
PFrElement aux_dest = &lvar[36];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[79]);
}
{
PFrElement aux_dest = &lvar[37];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[81]);
}
{
PFrElement aux_dest = &lvar[38];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[83]);
}
{
PFrElement aux_dest = &lvar[39];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[85]);
}
{
PFrElement aux_dest = &lvar[40];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[87]);
}
{
PFrElement aux_dest = &lvar[41];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[89]);
}
{
PFrElement aux_dest = &lvar[42];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[91]);
}
{
PFrElement aux_dest = &lvar[43];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[93]);
}
{
PFrElement aux_dest = &lvar[44];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[95]);
}
{
PFrElement aux_dest = &lvar[45];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[97]);
}
{
PFrElement aux_dest = &lvar[46];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[99]);
}
{
PFrElement aux_dest = &lvar[47];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[101]);
}
{
PFrElement aux_dest = &lvar[48];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[103]);
}
{
PFrElement aux_dest = &lvar[49];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[105]);
}
{
PFrElement aux_dest = &lvar[50];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[107]);
}
{
PFrElement aux_dest = &lvar[51];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[109]);
}
{
PFrElement aux_dest = &lvar[52];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[111]);
}
{
PFrElement aux_dest = &lvar[53];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[113]);
}
{
PFrElement aux_dest = &lvar[54];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[115]);
}
{
PFrElement aux_dest = &lvar[55];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[117]);
}
{
PFrElement aux_dest = &lvar[56];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[119]);
}
{
PFrElement aux_dest = &lvar[57];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[121]);
}
{
PFrElement aux_dest = &lvar[58];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[123]);
}
{
PFrElement aux_dest = &lvar[59];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[125]);
}
{
PFrElement aux_dest = &lvar[60];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[127]);
}
{
PFrElement aux_dest = &lvar[61];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[129]);
}
{
PFrElement aux_dest = &lvar[62];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[131]);
}
{
PFrElement aux_dest = &lvar[63];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[133]);
}
{
PFrElement aux_dest = &lvar[64];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[135]);
}
{
PFrElement aux_dest = &lvar[65];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[65],&circuitConstants[16]); // line circom 50
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[65])) + 0)];
// load src
Fr_shr(&expaux[1],&circuitConstants[24],&lvar[65]); // line circom 51
Fr_band(&expaux[0],&expaux[1],&circuitConstants[2]); // line circom 51
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[65];
// load src
Fr_add(&expaux[0],&lvar[65],&circuitConstants[2]); // line circom 50
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[65],&circuitConstants[16]); // line circom 50
}
}

void K_22_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 22;
ctx->componentMemory[coffset].templateName = "K";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 0;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[0];
K_22_run(coffset,ctx);
}

void K_22_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
bool* mySubcomponentsParallel = ctx->componentMemory[ctx_index].subcomponentsParallel;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[4];
FrElement lvar[66];
uint sub_component_aux;
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[6]);
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[22]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[23]);
}
{
PFrElement aux_dest = &lvar[3];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[24]);
}
{
PFrElement aux_dest = &lvar[4];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[25]);
}
{
PFrElement aux_dest = &lvar[5];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[26]);
}
{
PFrElement aux_dest = &lvar[6];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[27]);
}
{
PFrElement aux_dest = &lvar[7];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[28]);
}
{
PFrElement aux_dest = &lvar[8];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[29]);
}
{
PFrElement aux_dest = &lvar[9];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[31]);
}
{
PFrElement aux_dest = &lvar[10];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[33]);
}
{
PFrElement aux_dest = &lvar[11];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[34]);
}
{
PFrElement aux_dest = &lvar[12];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[36]);
}
{
PFrElement aux_dest = &lvar[13];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[38]);
}
{
PFrElement aux_dest = &lvar[14];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[40]);
}
{
PFrElement aux_dest = &lvar[15];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[42]);
}
{
PFrElement aux_dest = &lvar[16];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[44]);
}
{
PFrElement aux_dest = &lvar[17];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[46]);
}
{
PFrElement aux_dest = &lvar[18];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[47]);
}
{
PFrElement aux_dest = &lvar[19];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[48]);
}
{
PFrElement aux_dest = &lvar[20];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[49]);
}
{
PFrElement aux_dest = &lvar[21];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[51]);
}
{
PFrElement aux_dest = &lvar[22];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[53]);
}
{
PFrElement aux_dest = &lvar[23];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[55]);
}
{
PFrElement aux_dest = &lvar[24];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[57]);
}
{
PFrElement aux_dest = &lvar[25];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[59]);
}
{
PFrElement aux_dest = &lvar[26];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[61]);
}
{
PFrElement aux_dest = &lvar[27];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[63]);
}
{
PFrElement aux_dest = &lvar[28];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[65]);
}
{
PFrElement aux_dest = &lvar[29];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[67]);
}
{
PFrElement aux_dest = &lvar[30];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[69]);
}
{
PFrElement aux_dest = &lvar[31];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[71]);
}
{
PFrElement aux_dest = &lvar[32];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[73]);
}
{
PFrElement aux_dest = &lvar[33];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[74]);
}
{
PFrElement aux_dest = &lvar[34];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[76]);
}
{
PFrElement aux_dest = &lvar[35];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[77]);
}
{
PFrElement aux_dest = &lvar[36];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[79]);
}
{
PFrElement aux_dest = &lvar[37];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[81]);
}
{
PFrElement aux_dest = &lvar[38];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[83]);
}
{
PFrElement aux_dest = &lvar[39];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[85]);
}
{
PFrElement aux_dest = &lvar[40];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[87]);
}
{
PFrElement aux_dest = &lvar[41];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[89]);
}
{
PFrElement aux_dest = &lvar[42];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[91]);
}
{
PFrElement aux_dest = &lvar[43];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[93]);
}
{
PFrElement aux_dest = &lvar[44];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[95]);
}
{
PFrElement aux_dest = &lvar[45];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[97]);
}
{
PFrElement aux_dest = &lvar[46];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[99]);
}
{
PFrElement aux_dest = &lvar[47];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[101]);
}
{
PFrElement aux_dest = &lvar[48];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[103]);
}
{
PFrElement aux_dest = &lvar[49];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[105]);
}
{
PFrElement aux_dest = &lvar[50];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[107]);
}
{
PFrElement aux_dest = &lvar[51];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[109]);
}
{
PFrElement aux_dest = &lvar[52];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[111]);
}
{
PFrElement aux_dest = &lvar[53];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[113]);
}
{
PFrElement aux_dest = &lvar[54];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[115]);
}
{
PFrElement aux_dest = &lvar[55];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[117]);
}
{
PFrElement aux_dest = &lvar[56];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[119]);
}
{
PFrElement aux_dest = &lvar[57];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[121]);
}
{
PFrElement aux_dest = &lvar[58];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[123]);
}
{
PFrElement aux_dest = &lvar[59];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[125]);
}
{
PFrElement aux_dest = &lvar[60];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[127]);
}
{
PFrElement aux_dest = &lvar[61];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[129]);
}
{
PFrElement aux_dest = &lvar[62];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[131]);
}
{
PFrElement aux_dest = &lvar[63];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[133]);
}
{
PFrElement aux_dest = &lvar[64];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[135]);
}
{
PFrElement aux_dest = &lvar[65];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[65],&circuitConstants[16]); // line circom 50
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[65])) + 0)];
// load src
Fr_shr(&expaux[1],&circuitConstants[25],&lvar[65]); // line circom 51
Fr_band(&expaux[0],&expaux[1],&circuitConstants[2]); // line circom 51
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[65];
// load src
Fr_add(&expaux[0],&lvar[65],&circuitConstants[2]); // line circom 50
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[65],&circuitConstants[16]); // line circom 50
}
}

void K_23_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 23;
ctx->componentMemory[coffset].templateName = "K";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 0;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[0];
K_23_run(coffset,ctx);
}

void K_23_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
bool* mySubcomponentsParallel = ctx->componentMemory[ctx_index].subcomponentsParallel;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[4];
FrElement lvar[66];
uint sub_component_aux;
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[8]);
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[22]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[23]);
}
{
PFrElement aux_dest = &lvar[3];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[24]);
}
{
PFrElement aux_dest = &lvar[4];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[25]);
}
{
PFrElement aux_dest = &lvar[5];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[26]);
}
{
PFrElement aux_dest = &lvar[6];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[27]);
}
{
PFrElement aux_dest = &lvar[7];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[28]);
}
{
PFrElement aux_dest = &lvar[8];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[29]);
}
{
PFrElement aux_dest = &lvar[9];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[31]);
}
{
PFrElement aux_dest = &lvar[10];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[33]);
}
{
PFrElement aux_dest = &lvar[11];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[34]);
}
{
PFrElement aux_dest = &lvar[12];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[36]);
}
{
PFrElement aux_dest = &lvar[13];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[38]);
}
{
PFrElement aux_dest = &lvar[14];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[40]);
}
{
PFrElement aux_dest = &lvar[15];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[42]);
}
{
PFrElement aux_dest = &lvar[16];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[44]);
}
{
PFrElement aux_dest = &lvar[17];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[46]);
}
{
PFrElement aux_dest = &lvar[18];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[47]);
}
{
PFrElement aux_dest = &lvar[19];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[48]);
}
{
PFrElement aux_dest = &lvar[20];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[49]);
}
{
PFrElement aux_dest = &lvar[21];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[51]);
}
{
PFrElement aux_dest = &lvar[22];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[53]);
}
{
PFrElement aux_dest = &lvar[23];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[55]);
}
{
PFrElement aux_dest = &lvar[24];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[57]);
}
{
PFrElement aux_dest = &lvar[25];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[59]);
}
{
PFrElement aux_dest = &lvar[26];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[61]);
}
{
PFrElement aux_dest = &lvar[27];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[63]);
}
{
PFrElement aux_dest = &lvar[28];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[65]);
}
{
PFrElement aux_dest = &lvar[29];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[67]);
}
{
PFrElement aux_dest = &lvar[30];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[69]);
}
{
PFrElement aux_dest = &lvar[31];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[71]);
}
{
PFrElement aux_dest = &lvar[32];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[73]);
}
{
PFrElement aux_dest = &lvar[33];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[74]);
}
{
PFrElement aux_dest = &lvar[34];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[76]);
}
{
PFrElement aux_dest = &lvar[35];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[77]);
}
{
PFrElement aux_dest = &lvar[36];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[79]);
}
{
PFrElement aux_dest = &lvar[37];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[81]);
}
{
PFrElement aux_dest = &lvar[38];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[83]);
}
{
PFrElement aux_dest = &lvar[39];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[85]);
}
{
PFrElement aux_dest = &lvar[40];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[87]);
}
{
PFrElement aux_dest = &lvar[41];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[89]);
}
{
PFrElement aux_dest = &lvar[42];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[91]);
}
{
PFrElement aux_dest = &lvar[43];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[93]);
}
{
PFrElement aux_dest = &lvar[44];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[95]);
}
{
PFrElement aux_dest = &lvar[45];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[97]);
}
{
PFrElement aux_dest = &lvar[46];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[99]);
}
{
PFrElement aux_dest = &lvar[47];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[101]);
}
{
PFrElement aux_dest = &lvar[48];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[103]);
}
{
PFrElement aux_dest = &lvar[49];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[105]);
}
{
PFrElement aux_dest = &lvar[50];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[107]);
}
{
PFrElement aux_dest = &lvar[51];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[109]);
}
{
PFrElement aux_dest = &lvar[52];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[111]);
}
{
PFrElement aux_dest = &lvar[53];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[113]);
}
{
PFrElement aux_dest = &lvar[54];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[115]);
}
{
PFrElement aux_dest = &lvar[55];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[117]);
}
{
PFrElement aux_dest = &lvar[56];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[119]);
}
{
PFrElement aux_dest = &lvar[57];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[121]);
}
{
PFrElement aux_dest = &lvar[58];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[123]);
}
{
PFrElement aux_dest = &lvar[59];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[125]);
}
{
PFrElement aux_dest = &lvar[60];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[127]);
}
{
PFrElement aux_dest = &lvar[61];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[129]);
}
{
PFrElement aux_dest = &lvar[62];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[131]);
}
{
PFrElement aux_dest = &lvar[63];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[133]);
}
{
PFrElement aux_dest = &lvar[64];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[135]);
}
{
PFrElement aux_dest = &lvar[65];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[65],&circuitConstants[16]); // line circom 50
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[65])) + 0)];
// load src
Fr_shr(&expaux[1],&circuitConstants[26],&lvar[65]); // line circom 51
Fr_band(&expaux[0],&expaux[1],&circuitConstants[2]); // line circom 51
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[65];
// load src
Fr_add(&expaux[0],&lvar[65],&circuitConstants[2]); // line circom 50
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[65],&circuitConstants[16]); // line circom 50
}
}

void K_24_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 24;
ctx->componentMemory[coffset].templateName = "K";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 0;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[0];
K_24_run(coffset,ctx);
}

void K_24_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
bool* mySubcomponentsParallel = ctx->componentMemory[ctx_index].subcomponentsParallel;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[4];
FrElement lvar[66];
uint sub_component_aux;
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[10]);
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[22]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[23]);
}
{
PFrElement aux_dest = &lvar[3];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[24]);
}
{
PFrElement aux_dest = &lvar[4];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[25]);
}
{
PFrElement aux_dest = &lvar[5];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[26]);
}
{
PFrElement aux_dest = &lvar[6];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[27]);
}
{
PFrElement aux_dest = &lvar[7];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[28]);
}
{
PFrElement aux_dest = &lvar[8];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[29]);
}
{
PFrElement aux_dest = &lvar[9];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[31]);
}
{
PFrElement aux_dest = &lvar[10];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[33]);
}
{
PFrElement aux_dest = &lvar[11];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[34]);
}
{
PFrElement aux_dest = &lvar[12];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[36]);
}
{
PFrElement aux_dest = &lvar[13];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[38]);
}
{
PFrElement aux_dest = &lvar[14];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[40]);
}
{
PFrElement aux_dest = &lvar[15];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[42]);
}
{
PFrElement aux_dest = &lvar[16];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[44]);
}
{
PFrElement aux_dest = &lvar[17];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[46]);
}
{
PFrElement aux_dest = &lvar[18];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[47]);
}
{
PFrElement aux_dest = &lvar[19];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[48]);
}
{
PFrElement aux_dest = &lvar[20];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[49]);
}
{
PFrElement aux_dest = &lvar[21];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[51]);
}
{
PFrElement aux_dest = &lvar[22];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[53]);
}
{
PFrElement aux_dest = &lvar[23];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[55]);
}
{
PFrElement aux_dest = &lvar[24];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[57]);
}
{
PFrElement aux_dest = &lvar[25];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[59]);
}
{
PFrElement aux_dest = &lvar[26];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[61]);
}
{
PFrElement aux_dest = &lvar[27];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[63]);
}
{
PFrElement aux_dest = &lvar[28];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[65]);
}
{
PFrElement aux_dest = &lvar[29];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[67]);
}
{
PFrElement aux_dest = &lvar[30];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[69]);
}
{
PFrElement aux_dest = &lvar[31];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[71]);
}
{
PFrElement aux_dest = &lvar[32];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[73]);
}
{
PFrElement aux_dest = &lvar[33];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[74]);
}
{
PFrElement aux_dest = &lvar[34];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[76]);
}
{
PFrElement aux_dest = &lvar[35];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[77]);
}
{
PFrElement aux_dest = &lvar[36];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[79]);
}
{
PFrElement aux_dest = &lvar[37];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[81]);
}
{
PFrElement aux_dest = &lvar[38];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[83]);
}
{
PFrElement aux_dest = &lvar[39];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[85]);
}
{
PFrElement aux_dest = &lvar[40];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[87]);
}
{
PFrElement aux_dest = &lvar[41];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[89]);
}
{
PFrElement aux_dest = &lvar[42];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[91]);
}
{
PFrElement aux_dest = &lvar[43];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[93]);
}
{
PFrElement aux_dest = &lvar[44];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[95]);
}
{
PFrElement aux_dest = &lvar[45];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[97]);
}
{
PFrElement aux_dest = &lvar[46];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[99]);
}
{
PFrElement aux_dest = &lvar[47];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[101]);
}
{
PFrElement aux_dest = &lvar[48];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[103]);
}
{
PFrElement aux_dest = &lvar[49];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[105]);
}
{
PFrElement aux_dest = &lvar[50];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[107]);
}
{
PFrElement aux_dest = &lvar[51];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[109]);
}
{
PFrElement aux_dest = &lvar[52];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[111]);
}
{
PFrElement aux_dest = &lvar[53];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[113]);
}
{
PFrElement aux_dest = &lvar[54];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[115]);
}
{
PFrElement aux_dest = &lvar[55];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[117]);
}
{
PFrElement aux_dest = &lvar[56];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[119]);
}
{
PFrElement aux_dest = &lvar[57];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[121]);
}
{
PFrElement aux_dest = &lvar[58];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[123]);
}
{
PFrElement aux_dest = &lvar[59];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[125]);
}
{
PFrElement aux_dest = &lvar[60];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[127]);
}
{
PFrElement aux_dest = &lvar[61];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[129]);
}
{
PFrElement aux_dest = &lvar[62];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[131]);
}
{
PFrElement aux_dest = &lvar[63];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[133]);
}
{
PFrElement aux_dest = &lvar[64];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[135]);
}
{
PFrElement aux_dest = &lvar[65];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[65],&circuitConstants[16]); // line circom 50
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[65])) + 0)];
// load src
Fr_shr(&expaux[1],&circuitConstants[27],&lvar[65]); // line circom 51
Fr_band(&expaux[0],&expaux[1],&circuitConstants[2]); // line circom 51
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[65];
// load src
Fr_add(&expaux[0],&lvar[65],&circuitConstants[2]); // line circom 50
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[65],&circuitConstants[16]); // line circom 50
}
}

void K_25_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 25;
ctx->componentMemory[coffset].templateName = "K";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 0;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[0];
K_25_run(coffset,ctx);
}

void K_25_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
bool* mySubcomponentsParallel = ctx->componentMemory[ctx_index].subcomponentsParallel;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[4];
FrElement lvar[66];
uint sub_component_aux;
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[12]);
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[22]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[23]);
}
{
PFrElement aux_dest = &lvar[3];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[24]);
}
{
PFrElement aux_dest = &lvar[4];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[25]);
}
{
PFrElement aux_dest = &lvar[5];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[26]);
}
{
PFrElement aux_dest = &lvar[6];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[27]);
}
{
PFrElement aux_dest = &lvar[7];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[28]);
}
{
PFrElement aux_dest = &lvar[8];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[29]);
}
{
PFrElement aux_dest = &lvar[9];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[31]);
}
{
PFrElement aux_dest = &lvar[10];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[33]);
}
{
PFrElement aux_dest = &lvar[11];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[34]);
}
{
PFrElement aux_dest = &lvar[12];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[36]);
}
{
PFrElement aux_dest = &lvar[13];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[38]);
}
{
PFrElement aux_dest = &lvar[14];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[40]);
}
{
PFrElement aux_dest = &lvar[15];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[42]);
}
{
PFrElement aux_dest = &lvar[16];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[44]);
}
{
PFrElement aux_dest = &lvar[17];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[46]);
}
{
PFrElement aux_dest = &lvar[18];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[47]);
}
{
PFrElement aux_dest = &lvar[19];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[48]);
}
{
PFrElement aux_dest = &lvar[20];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[49]);
}
{
PFrElement aux_dest = &lvar[21];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[51]);
}
{
PFrElement aux_dest = &lvar[22];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[53]);
}
{
PFrElement aux_dest = &lvar[23];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[55]);
}
{
PFrElement aux_dest = &lvar[24];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[57]);
}
{
PFrElement aux_dest = &lvar[25];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[59]);
}
{
PFrElement aux_dest = &lvar[26];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[61]);
}
{
PFrElement aux_dest = &lvar[27];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[63]);
}
{
PFrElement aux_dest = &lvar[28];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[65]);
}
{
PFrElement aux_dest = &lvar[29];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[67]);
}
{
PFrElement aux_dest = &lvar[30];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[69]);
}
{
PFrElement aux_dest = &lvar[31];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[71]);
}
{
PFrElement aux_dest = &lvar[32];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[73]);
}
{
PFrElement aux_dest = &lvar[33];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[74]);
}
{
PFrElement aux_dest = &lvar[34];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[76]);
}
{
PFrElement aux_dest = &lvar[35];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[77]);
}
{
PFrElement aux_dest = &lvar[36];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[79]);
}
{
PFrElement aux_dest = &lvar[37];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[81]);
}
{
PFrElement aux_dest = &lvar[38];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[83]);
}
{
PFrElement aux_dest = &lvar[39];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[85]);
}
{
PFrElement aux_dest = &lvar[40];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[87]);
}
{
PFrElement aux_dest = &lvar[41];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[89]);
}
{
PFrElement aux_dest = &lvar[42];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[91]);
}
{
PFrElement aux_dest = &lvar[43];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[93]);
}
{
PFrElement aux_dest = &lvar[44];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[95]);
}
{
PFrElement aux_dest = &lvar[45];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[97]);
}
{
PFrElement aux_dest = &lvar[46];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[99]);
}
{
PFrElement aux_dest = &lvar[47];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[101]);
}
{
PFrElement aux_dest = &lvar[48];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[103]);
}
{
PFrElement aux_dest = &lvar[49];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[105]);
}
{
PFrElement aux_dest = &lvar[50];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[107]);
}
{
PFrElement aux_dest = &lvar[51];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[109]);
}
{
PFrElement aux_dest = &lvar[52];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[111]);
}
{
PFrElement aux_dest = &lvar[53];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[113]);
}
{
PFrElement aux_dest = &lvar[54];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[115]);
}
{
PFrElement aux_dest = &lvar[55];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[117]);
}
{
PFrElement aux_dest = &lvar[56];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[119]);
}
{
PFrElement aux_dest = &lvar[57];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[121]);
}
{
PFrElement aux_dest = &lvar[58];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[123]);
}
{
PFrElement aux_dest = &lvar[59];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[125]);
}
{
PFrElement aux_dest = &lvar[60];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[127]);
}
{
PFrElement aux_dest = &lvar[61];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[129]);
}
{
PFrElement aux_dest = &lvar[62];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[131]);
}
{
PFrElement aux_dest = &lvar[63];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[133]);
}
{
PFrElement aux_dest = &lvar[64];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[135]);
}
{
PFrElement aux_dest = &lvar[65];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[65],&circuitConstants[16]); // line circom 50
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[65])) + 0)];
// load src
Fr_shr(&expaux[1],&circuitConstants[28],&lvar[65]); // line circom 51
Fr_band(&expaux[0],&expaux[1],&circuitConstants[2]); // line circom 51
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[65];
// load src
Fr_add(&expaux[0],&lvar[65],&circuitConstants[2]); // line circom 50
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[65],&circuitConstants[16]); // line circom 50
}
}

void K_26_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 26;
ctx->componentMemory[coffset].templateName = "K";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 0;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[0];
K_26_run(coffset,ctx);
}

void K_26_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
bool* mySubcomponentsParallel = ctx->componentMemory[ctx_index].subcomponentsParallel;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[4];
FrElement lvar[66];
uint sub_component_aux;
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[14]);
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[22]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[23]);
}
{
PFrElement aux_dest = &lvar[3];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[24]);
}
{
PFrElement aux_dest = &lvar[4];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[25]);
}
{
PFrElement aux_dest = &lvar[5];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[26]);
}
{
PFrElement aux_dest = &lvar[6];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[27]);
}
{
PFrElement aux_dest = &lvar[7];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[28]);
}
{
PFrElement aux_dest = &lvar[8];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[29]);
}
{
PFrElement aux_dest = &lvar[9];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[31]);
}
{
PFrElement aux_dest = &lvar[10];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[33]);
}
{
PFrElement aux_dest = &lvar[11];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[34]);
}
{
PFrElement aux_dest = &lvar[12];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[36]);
}
{
PFrElement aux_dest = &lvar[13];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[38]);
}
{
PFrElement aux_dest = &lvar[14];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[40]);
}
{
PFrElement aux_dest = &lvar[15];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[42]);
}
{
PFrElement aux_dest = &lvar[16];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[44]);
}
{
PFrElement aux_dest = &lvar[17];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[46]);
}
{
PFrElement aux_dest = &lvar[18];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[47]);
}
{
PFrElement aux_dest = &lvar[19];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[48]);
}
{
PFrElement aux_dest = &lvar[20];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[49]);
}
{
PFrElement aux_dest = &lvar[21];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[51]);
}
{
PFrElement aux_dest = &lvar[22];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[53]);
}
{
PFrElement aux_dest = &lvar[23];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[55]);
}
{
PFrElement aux_dest = &lvar[24];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[57]);
}
{
PFrElement aux_dest = &lvar[25];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[59]);
}
{
PFrElement aux_dest = &lvar[26];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[61]);
}
{
PFrElement aux_dest = &lvar[27];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[63]);
}
{
PFrElement aux_dest = &lvar[28];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[65]);
}
{
PFrElement aux_dest = &lvar[29];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[67]);
}
{
PFrElement aux_dest = &lvar[30];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[69]);
}
{
PFrElement aux_dest = &lvar[31];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[71]);
}
{
PFrElement aux_dest = &lvar[32];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[73]);
}
{
PFrElement aux_dest = &lvar[33];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[74]);
}
{
PFrElement aux_dest = &lvar[34];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[76]);
}
{
PFrElement aux_dest = &lvar[35];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[77]);
}
{
PFrElement aux_dest = &lvar[36];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[79]);
}
{
PFrElement aux_dest = &lvar[37];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[81]);
}
{
PFrElement aux_dest = &lvar[38];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[83]);
}
{
PFrElement aux_dest = &lvar[39];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[85]);
}
{
PFrElement aux_dest = &lvar[40];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[87]);
}
{
PFrElement aux_dest = &lvar[41];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[89]);
}
{
PFrElement aux_dest = &lvar[42];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[91]);
}
{
PFrElement aux_dest = &lvar[43];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[93]);
}
{
PFrElement aux_dest = &lvar[44];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[95]);
}
{
PFrElement aux_dest = &lvar[45];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[97]);
}
{
PFrElement aux_dest = &lvar[46];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[99]);
}
{
PFrElement aux_dest = &lvar[47];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[101]);
}
{
PFrElement aux_dest = &lvar[48];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[103]);
}
{
PFrElement aux_dest = &lvar[49];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[105]);
}
{
PFrElement aux_dest = &lvar[50];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[107]);
}
{
PFrElement aux_dest = &lvar[51];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[109]);
}
{
PFrElement aux_dest = &lvar[52];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[111]);
}
{
PFrElement aux_dest = &lvar[53];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[113]);
}
{
PFrElement aux_dest = &lvar[54];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[115]);
}
{
PFrElement aux_dest = &lvar[55];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[117]);
}
{
PFrElement aux_dest = &lvar[56];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[119]);
}
{
PFrElement aux_dest = &lvar[57];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[121]);
}
{
PFrElement aux_dest = &lvar[58];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[123]);
}
{
PFrElement aux_dest = &lvar[59];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[125]);
}
{
PFrElement aux_dest = &lvar[60];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[127]);
}
{
PFrElement aux_dest = &lvar[61];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[129]);
}
{
PFrElement aux_dest = &lvar[62];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[131]);
}
{
PFrElement aux_dest = &lvar[63];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[133]);
}
{
PFrElement aux_dest = &lvar[64];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[135]);
}
{
PFrElement aux_dest = &lvar[65];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[65],&circuitConstants[16]); // line circom 50
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[65])) + 0)];
// load src
Fr_shr(&expaux[1],&circuitConstants[29],&lvar[65]); // line circom 51
Fr_band(&expaux[0],&expaux[1],&circuitConstants[2]); // line circom 51
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[65];
// load src
Fr_add(&expaux[0],&lvar[65],&circuitConstants[2]); // line circom 50
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[65],&circuitConstants[16]); // line circom 50
}
}

void K_27_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 27;
ctx->componentMemory[coffset].templateName = "K";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 0;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[0];
K_27_run(coffset,ctx);
}

void K_27_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
bool* mySubcomponentsParallel = ctx->componentMemory[ctx_index].subcomponentsParallel;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[4];
FrElement lvar[66];
uint sub_component_aux;
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[30]);
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[22]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[23]);
}
{
PFrElement aux_dest = &lvar[3];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[24]);
}
{
PFrElement aux_dest = &lvar[4];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[25]);
}
{
PFrElement aux_dest = &lvar[5];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[26]);
}
{
PFrElement aux_dest = &lvar[6];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[27]);
}
{
PFrElement aux_dest = &lvar[7];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[28]);
}
{
PFrElement aux_dest = &lvar[8];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[29]);
}
{
PFrElement aux_dest = &lvar[9];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[31]);
}
{
PFrElement aux_dest = &lvar[10];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[33]);
}
{
PFrElement aux_dest = &lvar[11];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[34]);
}
{
PFrElement aux_dest = &lvar[12];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[36]);
}
{
PFrElement aux_dest = &lvar[13];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[38]);
}
{
PFrElement aux_dest = &lvar[14];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[40]);
}
{
PFrElement aux_dest = &lvar[15];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[42]);
}
{
PFrElement aux_dest = &lvar[16];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[44]);
}
{
PFrElement aux_dest = &lvar[17];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[46]);
}
{
PFrElement aux_dest = &lvar[18];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[47]);
}
{
PFrElement aux_dest = &lvar[19];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[48]);
}
{
PFrElement aux_dest = &lvar[20];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[49]);
}
{
PFrElement aux_dest = &lvar[21];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[51]);
}
{
PFrElement aux_dest = &lvar[22];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[53]);
}
{
PFrElement aux_dest = &lvar[23];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[55]);
}
{
PFrElement aux_dest = &lvar[24];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[57]);
}
{
PFrElement aux_dest = &lvar[25];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[59]);
}
{
PFrElement aux_dest = &lvar[26];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[61]);
}
{
PFrElement aux_dest = &lvar[27];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[63]);
}
{
PFrElement aux_dest = &lvar[28];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[65]);
}
{
PFrElement aux_dest = &lvar[29];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[67]);
}
{
PFrElement aux_dest = &lvar[30];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[69]);
}
{
PFrElement aux_dest = &lvar[31];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[71]);
}
{
PFrElement aux_dest = &lvar[32];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[73]);
}
{
PFrElement aux_dest = &lvar[33];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[74]);
}
{
PFrElement aux_dest = &lvar[34];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[76]);
}
{
PFrElement aux_dest = &lvar[35];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[77]);
}
{
PFrElement aux_dest = &lvar[36];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[79]);
}
{
PFrElement aux_dest = &lvar[37];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[81]);
}
{
PFrElement aux_dest = &lvar[38];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[83]);
}
{
PFrElement aux_dest = &lvar[39];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[85]);
}
{
PFrElement aux_dest = &lvar[40];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[87]);
}
{
PFrElement aux_dest = &lvar[41];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[89]);
}
{
PFrElement aux_dest = &lvar[42];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[91]);
}
{
PFrElement aux_dest = &lvar[43];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[93]);
}
{
PFrElement aux_dest = &lvar[44];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[95]);
}
{
PFrElement aux_dest = &lvar[45];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[97]);
}
{
PFrElement aux_dest = &lvar[46];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[99]);
}
{
PFrElement aux_dest = &lvar[47];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[101]);
}
{
PFrElement aux_dest = &lvar[48];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[103]);
}
{
PFrElement aux_dest = &lvar[49];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[105]);
}
{
PFrElement aux_dest = &lvar[50];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[107]);
}
{
PFrElement aux_dest = &lvar[51];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[109]);
}
{
PFrElement aux_dest = &lvar[52];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[111]);
}
{
PFrElement aux_dest = &lvar[53];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[113]);
}
{
PFrElement aux_dest = &lvar[54];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[115]);
}
{
PFrElement aux_dest = &lvar[55];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[117]);
}
{
PFrElement aux_dest = &lvar[56];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[119]);
}
{
PFrElement aux_dest = &lvar[57];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[121]);
}
{
PFrElement aux_dest = &lvar[58];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[123]);
}
{
PFrElement aux_dest = &lvar[59];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[125]);
}
{
PFrElement aux_dest = &lvar[60];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[127]);
}
{
PFrElement aux_dest = &lvar[61];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[129]);
}
{
PFrElement aux_dest = &lvar[62];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[131]);
}
{
PFrElement aux_dest = &lvar[63];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[133]);
}
{
PFrElement aux_dest = &lvar[64];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[135]);
}
{
PFrElement aux_dest = &lvar[65];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[65],&circuitConstants[16]); // line circom 50
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[65])) + 0)];
// load src
Fr_shr(&expaux[1],&circuitConstants[31],&lvar[65]); // line circom 51
Fr_band(&expaux[0],&expaux[1],&circuitConstants[2]); // line circom 51
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[65];
// load src
Fr_add(&expaux[0],&lvar[65],&circuitConstants[2]); // line circom 50
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[65],&circuitConstants[16]); // line circom 50
}
}

void K_28_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 28;
ctx->componentMemory[coffset].templateName = "K";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 0;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[0];
K_28_run(coffset,ctx);
}

void K_28_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
bool* mySubcomponentsParallel = ctx->componentMemory[ctx_index].subcomponentsParallel;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[4];
FrElement lvar[66];
uint sub_component_aux;
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[32]);
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[22]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[23]);
}
{
PFrElement aux_dest = &lvar[3];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[24]);
}
{
PFrElement aux_dest = &lvar[4];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[25]);
}
{
PFrElement aux_dest = &lvar[5];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[26]);
}
{
PFrElement aux_dest = &lvar[6];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[27]);
}
{
PFrElement aux_dest = &lvar[7];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[28]);
}
{
PFrElement aux_dest = &lvar[8];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[29]);
}
{
PFrElement aux_dest = &lvar[9];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[31]);
}
{
PFrElement aux_dest = &lvar[10];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[33]);
}
{
PFrElement aux_dest = &lvar[11];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[34]);
}
{
PFrElement aux_dest = &lvar[12];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[36]);
}
{
PFrElement aux_dest = &lvar[13];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[38]);
}
{
PFrElement aux_dest = &lvar[14];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[40]);
}
{
PFrElement aux_dest = &lvar[15];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[42]);
}
{
PFrElement aux_dest = &lvar[16];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[44]);
}
{
PFrElement aux_dest = &lvar[17];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[46]);
}
{
PFrElement aux_dest = &lvar[18];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[47]);
}
{
PFrElement aux_dest = &lvar[19];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[48]);
}
{
PFrElement aux_dest = &lvar[20];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[49]);
}
{
PFrElement aux_dest = &lvar[21];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[51]);
}
{
PFrElement aux_dest = &lvar[22];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[53]);
}
{
PFrElement aux_dest = &lvar[23];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[55]);
}
{
PFrElement aux_dest = &lvar[24];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[57]);
}
{
PFrElement aux_dest = &lvar[25];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[59]);
}
{
PFrElement aux_dest = &lvar[26];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[61]);
}
{
PFrElement aux_dest = &lvar[27];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[63]);
}
{
PFrElement aux_dest = &lvar[28];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[65]);
}
{
PFrElement aux_dest = &lvar[29];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[67]);
}
{
PFrElement aux_dest = &lvar[30];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[69]);
}
{
PFrElement aux_dest = &lvar[31];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[71]);
}
{
PFrElement aux_dest = &lvar[32];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[73]);
}
{
PFrElement aux_dest = &lvar[33];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[74]);
}
{
PFrElement aux_dest = &lvar[34];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[76]);
}
{
PFrElement aux_dest = &lvar[35];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[77]);
}
{
PFrElement aux_dest = &lvar[36];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[79]);
}
{
PFrElement aux_dest = &lvar[37];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[81]);
}
{
PFrElement aux_dest = &lvar[38];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[83]);
}
{
PFrElement aux_dest = &lvar[39];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[85]);
}
{
PFrElement aux_dest = &lvar[40];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[87]);
}
{
PFrElement aux_dest = &lvar[41];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[89]);
}
{
PFrElement aux_dest = &lvar[42];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[91]);
}
{
PFrElement aux_dest = &lvar[43];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[93]);
}
{
PFrElement aux_dest = &lvar[44];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[95]);
}
{
PFrElement aux_dest = &lvar[45];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[97]);
}
{
PFrElement aux_dest = &lvar[46];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[99]);
}
{
PFrElement aux_dest = &lvar[47];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[101]);
}
{
PFrElement aux_dest = &lvar[48];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[103]);
}
{
PFrElement aux_dest = &lvar[49];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[105]);
}
{
PFrElement aux_dest = &lvar[50];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[107]);
}
{
PFrElement aux_dest = &lvar[51];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[109]);
}
{
PFrElement aux_dest = &lvar[52];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[111]);
}
{
PFrElement aux_dest = &lvar[53];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[113]);
}
{
PFrElement aux_dest = &lvar[54];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[115]);
}
{
PFrElement aux_dest = &lvar[55];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[117]);
}
{
PFrElement aux_dest = &lvar[56];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[119]);
}
{
PFrElement aux_dest = &lvar[57];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[121]);
}
{
PFrElement aux_dest = &lvar[58];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[123]);
}
{
PFrElement aux_dest = &lvar[59];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[125]);
}
{
PFrElement aux_dest = &lvar[60];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[127]);
}
{
PFrElement aux_dest = &lvar[61];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[129]);
}
{
PFrElement aux_dest = &lvar[62];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[131]);
}
{
PFrElement aux_dest = &lvar[63];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[133]);
}
{
PFrElement aux_dest = &lvar[64];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[135]);
}
{
PFrElement aux_dest = &lvar[65];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[65],&circuitConstants[16]); // line circom 50
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[65])) + 0)];
// load src
Fr_shr(&expaux[1],&circuitConstants[33],&lvar[65]); // line circom 51
Fr_band(&expaux[0],&expaux[1],&circuitConstants[2]); // line circom 51
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[65];
// load src
Fr_add(&expaux[0],&lvar[65],&circuitConstants[2]); // line circom 50
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[65],&circuitConstants[16]); // line circom 50
}
}

void K_29_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 29;
ctx->componentMemory[coffset].templateName = "K";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 0;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[0];
K_29_run(coffset,ctx);
}

void K_29_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
bool* mySubcomponentsParallel = ctx->componentMemory[ctx_index].subcomponentsParallel;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[4];
FrElement lvar[66];
uint sub_component_aux;
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[19]);
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[22]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[23]);
}
{
PFrElement aux_dest = &lvar[3];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[24]);
}
{
PFrElement aux_dest = &lvar[4];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[25]);
}
{
PFrElement aux_dest = &lvar[5];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[26]);
}
{
PFrElement aux_dest = &lvar[6];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[27]);
}
{
PFrElement aux_dest = &lvar[7];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[28]);
}
{
PFrElement aux_dest = &lvar[8];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[29]);
}
{
PFrElement aux_dest = &lvar[9];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[31]);
}
{
PFrElement aux_dest = &lvar[10];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[33]);
}
{
PFrElement aux_dest = &lvar[11];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[34]);
}
{
PFrElement aux_dest = &lvar[12];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[36]);
}
{
PFrElement aux_dest = &lvar[13];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[38]);
}
{
PFrElement aux_dest = &lvar[14];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[40]);
}
{
PFrElement aux_dest = &lvar[15];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[42]);
}
{
PFrElement aux_dest = &lvar[16];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[44]);
}
{
PFrElement aux_dest = &lvar[17];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[46]);
}
{
PFrElement aux_dest = &lvar[18];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[47]);
}
{
PFrElement aux_dest = &lvar[19];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[48]);
}
{
PFrElement aux_dest = &lvar[20];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[49]);
}
{
PFrElement aux_dest = &lvar[21];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[51]);
}
{
PFrElement aux_dest = &lvar[22];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[53]);
}
{
PFrElement aux_dest = &lvar[23];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[55]);
}
{
PFrElement aux_dest = &lvar[24];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[57]);
}
{
PFrElement aux_dest = &lvar[25];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[59]);
}
{
PFrElement aux_dest = &lvar[26];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[61]);
}
{
PFrElement aux_dest = &lvar[27];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[63]);
}
{
PFrElement aux_dest = &lvar[28];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[65]);
}
{
PFrElement aux_dest = &lvar[29];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[67]);
}
{
PFrElement aux_dest = &lvar[30];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[69]);
}
{
PFrElement aux_dest = &lvar[31];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[71]);
}
{
PFrElement aux_dest = &lvar[32];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[73]);
}
{
PFrElement aux_dest = &lvar[33];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[74]);
}
{
PFrElement aux_dest = &lvar[34];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[76]);
}
{
PFrElement aux_dest = &lvar[35];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[77]);
}
{
PFrElement aux_dest = &lvar[36];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[79]);
}
{
PFrElement aux_dest = &lvar[37];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[81]);
}
{
PFrElement aux_dest = &lvar[38];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[83]);
}
{
PFrElement aux_dest = &lvar[39];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[85]);
}
{
PFrElement aux_dest = &lvar[40];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[87]);
}
{
PFrElement aux_dest = &lvar[41];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[89]);
}
{
PFrElement aux_dest = &lvar[42];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[91]);
}
{
PFrElement aux_dest = &lvar[43];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[93]);
}
{
PFrElement aux_dest = &lvar[44];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[95]);
}
{
PFrElement aux_dest = &lvar[45];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[97]);
}
{
PFrElement aux_dest = &lvar[46];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[99]);
}
{
PFrElement aux_dest = &lvar[47];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[101]);
}
{
PFrElement aux_dest = &lvar[48];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[103]);
}
{
PFrElement aux_dest = &lvar[49];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[105]);
}
{
PFrElement aux_dest = &lvar[50];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[107]);
}
{
PFrElement aux_dest = &lvar[51];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[109]);
}
{
PFrElement aux_dest = &lvar[52];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[111]);
}
{
PFrElement aux_dest = &lvar[53];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[113]);
}
{
PFrElement aux_dest = &lvar[54];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[115]);
}
{
PFrElement aux_dest = &lvar[55];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[117]);
}
{
PFrElement aux_dest = &lvar[56];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[119]);
}
{
PFrElement aux_dest = &lvar[57];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[121]);
}
{
PFrElement aux_dest = &lvar[58];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[123]);
}
{
PFrElement aux_dest = &lvar[59];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[125]);
}
{
PFrElement aux_dest = &lvar[60];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[127]);
}
{
PFrElement aux_dest = &lvar[61];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[129]);
}
{
PFrElement aux_dest = &lvar[62];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[131]);
}
{
PFrElement aux_dest = &lvar[63];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[133]);
}
{
PFrElement aux_dest = &lvar[64];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[135]);
}
{
PFrElement aux_dest = &lvar[65];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[65],&circuitConstants[16]); // line circom 50
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[65])) + 0)];
// load src
Fr_shr(&expaux[1],&circuitConstants[34],&lvar[65]); // line circom 51
Fr_band(&expaux[0],&expaux[1],&circuitConstants[2]); // line circom 51
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[65];
// load src
Fr_add(&expaux[0],&lvar[65],&circuitConstants[2]); // line circom 50
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[65],&circuitConstants[16]); // line circom 50
}
}

void K_30_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 30;
ctx->componentMemory[coffset].templateName = "K";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 0;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[0];
K_30_run(coffset,ctx);
}

void K_30_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
bool* mySubcomponentsParallel = ctx->componentMemory[ctx_index].subcomponentsParallel;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[4];
FrElement lvar[66];
uint sub_component_aux;
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[35]);
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[22]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[23]);
}
{
PFrElement aux_dest = &lvar[3];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[24]);
}
{
PFrElement aux_dest = &lvar[4];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[25]);
}
{
PFrElement aux_dest = &lvar[5];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[26]);
}
{
PFrElement aux_dest = &lvar[6];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[27]);
}
{
PFrElement aux_dest = &lvar[7];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[28]);
}
{
PFrElement aux_dest = &lvar[8];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[29]);
}
{
PFrElement aux_dest = &lvar[9];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[31]);
}
{
PFrElement aux_dest = &lvar[10];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[33]);
}
{
PFrElement aux_dest = &lvar[11];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[34]);
}
{
PFrElement aux_dest = &lvar[12];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[36]);
}
{
PFrElement aux_dest = &lvar[13];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[38]);
}
{
PFrElement aux_dest = &lvar[14];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[40]);
}
{
PFrElement aux_dest = &lvar[15];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[42]);
}
{
PFrElement aux_dest = &lvar[16];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[44]);
}
{
PFrElement aux_dest = &lvar[17];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[46]);
}
{
PFrElement aux_dest = &lvar[18];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[47]);
}
{
PFrElement aux_dest = &lvar[19];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[48]);
}
{
PFrElement aux_dest = &lvar[20];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[49]);
}
{
PFrElement aux_dest = &lvar[21];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[51]);
}
{
PFrElement aux_dest = &lvar[22];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[53]);
}
{
PFrElement aux_dest = &lvar[23];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[55]);
}
{
PFrElement aux_dest = &lvar[24];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[57]);
}
{
PFrElement aux_dest = &lvar[25];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[59]);
}
{
PFrElement aux_dest = &lvar[26];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[61]);
}
{
PFrElement aux_dest = &lvar[27];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[63]);
}
{
PFrElement aux_dest = &lvar[28];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[65]);
}
{
PFrElement aux_dest = &lvar[29];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[67]);
}
{
PFrElement aux_dest = &lvar[30];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[69]);
}
{
PFrElement aux_dest = &lvar[31];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[71]);
}
{
PFrElement aux_dest = &lvar[32];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[73]);
}
{
PFrElement aux_dest = &lvar[33];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[74]);
}
{
PFrElement aux_dest = &lvar[34];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[76]);
}
{
PFrElement aux_dest = &lvar[35];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[77]);
}
{
PFrElement aux_dest = &lvar[36];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[79]);
}
{
PFrElement aux_dest = &lvar[37];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[81]);
}
{
PFrElement aux_dest = &lvar[38];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[83]);
}
{
PFrElement aux_dest = &lvar[39];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[85]);
}
{
PFrElement aux_dest = &lvar[40];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[87]);
}
{
PFrElement aux_dest = &lvar[41];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[89]);
}
{
PFrElement aux_dest = &lvar[42];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[91]);
}
{
PFrElement aux_dest = &lvar[43];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[93]);
}
{
PFrElement aux_dest = &lvar[44];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[95]);
}
{
PFrElement aux_dest = &lvar[45];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[97]);
}
{
PFrElement aux_dest = &lvar[46];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[99]);
}
{
PFrElement aux_dest = &lvar[47];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[101]);
}
{
PFrElement aux_dest = &lvar[48];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[103]);
}
{
PFrElement aux_dest = &lvar[49];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[105]);
}
{
PFrElement aux_dest = &lvar[50];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[107]);
}
{
PFrElement aux_dest = &lvar[51];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[109]);
}
{
PFrElement aux_dest = &lvar[52];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[111]);
}
{
PFrElement aux_dest = &lvar[53];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[113]);
}
{
PFrElement aux_dest = &lvar[54];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[115]);
}
{
PFrElement aux_dest = &lvar[55];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[117]);
}
{
PFrElement aux_dest = &lvar[56];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[119]);
}
{
PFrElement aux_dest = &lvar[57];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[121]);
}
{
PFrElement aux_dest = &lvar[58];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[123]);
}
{
PFrElement aux_dest = &lvar[59];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[125]);
}
{
PFrElement aux_dest = &lvar[60];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[127]);
}
{
PFrElement aux_dest = &lvar[61];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[129]);
}
{
PFrElement aux_dest = &lvar[62];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[131]);
}
{
PFrElement aux_dest = &lvar[63];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[133]);
}
{
PFrElement aux_dest = &lvar[64];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[135]);
}
{
PFrElement aux_dest = &lvar[65];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[65],&circuitConstants[16]); // line circom 50
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[65])) + 0)];
// load src
Fr_shr(&expaux[1],&circuitConstants[36],&lvar[65]); // line circom 51
Fr_band(&expaux[0],&expaux[1],&circuitConstants[2]); // line circom 51
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[65];
// load src
Fr_add(&expaux[0],&lvar[65],&circuitConstants[2]); // line circom 50
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[65],&circuitConstants[16]); // line circom 50
}
}

void K_31_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 31;
ctx->componentMemory[coffset].templateName = "K";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 0;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[0];
K_31_run(coffset,ctx);
}

void K_31_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
bool* mySubcomponentsParallel = ctx->componentMemory[ctx_index].subcomponentsParallel;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[4];
FrElement lvar[66];
uint sub_component_aux;
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[37]);
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[22]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[23]);
}
{
PFrElement aux_dest = &lvar[3];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[24]);
}
{
PFrElement aux_dest = &lvar[4];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[25]);
}
{
PFrElement aux_dest = &lvar[5];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[26]);
}
{
PFrElement aux_dest = &lvar[6];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[27]);
}
{
PFrElement aux_dest = &lvar[7];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[28]);
}
{
PFrElement aux_dest = &lvar[8];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[29]);
}
{
PFrElement aux_dest = &lvar[9];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[31]);
}
{
PFrElement aux_dest = &lvar[10];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[33]);
}
{
PFrElement aux_dest = &lvar[11];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[34]);
}
{
PFrElement aux_dest = &lvar[12];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[36]);
}
{
PFrElement aux_dest = &lvar[13];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[38]);
}
{
PFrElement aux_dest = &lvar[14];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[40]);
}
{
PFrElement aux_dest = &lvar[15];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[42]);
}
{
PFrElement aux_dest = &lvar[16];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[44]);
}
{
PFrElement aux_dest = &lvar[17];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[46]);
}
{
PFrElement aux_dest = &lvar[18];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[47]);
}
{
PFrElement aux_dest = &lvar[19];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[48]);
}
{
PFrElement aux_dest = &lvar[20];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[49]);
}
{
PFrElement aux_dest = &lvar[21];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[51]);
}
{
PFrElement aux_dest = &lvar[22];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[53]);
}
{
PFrElement aux_dest = &lvar[23];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[55]);
}
{
PFrElement aux_dest = &lvar[24];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[57]);
}
{
PFrElement aux_dest = &lvar[25];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[59]);
}
{
PFrElement aux_dest = &lvar[26];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[61]);
}
{
PFrElement aux_dest = &lvar[27];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[63]);
}
{
PFrElement aux_dest = &lvar[28];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[65]);
}
{
PFrElement aux_dest = &lvar[29];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[67]);
}
{
PFrElement aux_dest = &lvar[30];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[69]);
}
{
PFrElement aux_dest = &lvar[31];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[71]);
}
{
PFrElement aux_dest = &lvar[32];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[73]);
}
{
PFrElement aux_dest = &lvar[33];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[74]);
}
{
PFrElement aux_dest = &lvar[34];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[76]);
}
{
PFrElement aux_dest = &lvar[35];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[77]);
}
{
PFrElement aux_dest = &lvar[36];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[79]);
}
{
PFrElement aux_dest = &lvar[37];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[81]);
}
{
PFrElement aux_dest = &lvar[38];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[83]);
}
{
PFrElement aux_dest = &lvar[39];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[85]);
}
{
PFrElement aux_dest = &lvar[40];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[87]);
}
{
PFrElement aux_dest = &lvar[41];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[89]);
}
{
PFrElement aux_dest = &lvar[42];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[91]);
}
{
PFrElement aux_dest = &lvar[43];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[93]);
}
{
PFrElement aux_dest = &lvar[44];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[95]);
}
{
PFrElement aux_dest = &lvar[45];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[97]);
}
{
PFrElement aux_dest = &lvar[46];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[99]);
}
{
PFrElement aux_dest = &lvar[47];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[101]);
}
{
PFrElement aux_dest = &lvar[48];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[103]);
}
{
PFrElement aux_dest = &lvar[49];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[105]);
}
{
PFrElement aux_dest = &lvar[50];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[107]);
}
{
PFrElement aux_dest = &lvar[51];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[109]);
}
{
PFrElement aux_dest = &lvar[52];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[111]);
}
{
PFrElement aux_dest = &lvar[53];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[113]);
}
{
PFrElement aux_dest = &lvar[54];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[115]);
}
{
PFrElement aux_dest = &lvar[55];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[117]);
}
{
PFrElement aux_dest = &lvar[56];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[119]);
}
{
PFrElement aux_dest = &lvar[57];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[121]);
}
{
PFrElement aux_dest = &lvar[58];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[123]);
}
{
PFrElement aux_dest = &lvar[59];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[125]);
}
{
PFrElement aux_dest = &lvar[60];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[127]);
}
{
PFrElement aux_dest = &lvar[61];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[129]);
}
{
PFrElement aux_dest = &lvar[62];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[131]);
}
{
PFrElement aux_dest = &lvar[63];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[133]);
}
{
PFrElement aux_dest = &lvar[64];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[135]);
}
{
PFrElement aux_dest = &lvar[65];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[65],&circuitConstants[16]); // line circom 50
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[65])) + 0)];
// load src
Fr_shr(&expaux[1],&circuitConstants[38],&lvar[65]); // line circom 51
Fr_band(&expaux[0],&expaux[1],&circuitConstants[2]); // line circom 51
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[65];
// load src
Fr_add(&expaux[0],&lvar[65],&circuitConstants[2]); // line circom 50
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[65],&circuitConstants[16]); // line circom 50
}
}

void K_32_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 32;
ctx->componentMemory[coffset].templateName = "K";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 0;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[0];
K_32_run(coffset,ctx);
}

void K_32_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
bool* mySubcomponentsParallel = ctx->componentMemory[ctx_index].subcomponentsParallel;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[4];
FrElement lvar[66];
uint sub_component_aux;
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[39]);
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[22]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[23]);
}
{
PFrElement aux_dest = &lvar[3];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[24]);
}
{
PFrElement aux_dest = &lvar[4];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[25]);
}
{
PFrElement aux_dest = &lvar[5];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[26]);
}
{
PFrElement aux_dest = &lvar[6];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[27]);
}
{
PFrElement aux_dest = &lvar[7];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[28]);
}
{
PFrElement aux_dest = &lvar[8];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[29]);
}
{
PFrElement aux_dest = &lvar[9];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[31]);
}
{
PFrElement aux_dest = &lvar[10];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[33]);
}
{
PFrElement aux_dest = &lvar[11];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[34]);
}
{
PFrElement aux_dest = &lvar[12];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[36]);
}
{
PFrElement aux_dest = &lvar[13];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[38]);
}
{
PFrElement aux_dest = &lvar[14];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[40]);
}
{
PFrElement aux_dest = &lvar[15];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[42]);
}
{
PFrElement aux_dest = &lvar[16];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[44]);
}
{
PFrElement aux_dest = &lvar[17];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[46]);
}
{
PFrElement aux_dest = &lvar[18];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[47]);
}
{
PFrElement aux_dest = &lvar[19];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[48]);
}
{
PFrElement aux_dest = &lvar[20];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[49]);
}
{
PFrElement aux_dest = &lvar[21];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[51]);
}
{
PFrElement aux_dest = &lvar[22];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[53]);
}
{
PFrElement aux_dest = &lvar[23];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[55]);
}
{
PFrElement aux_dest = &lvar[24];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[57]);
}
{
PFrElement aux_dest = &lvar[25];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[59]);
}
{
PFrElement aux_dest = &lvar[26];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[61]);
}
{
PFrElement aux_dest = &lvar[27];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[63]);
}
{
PFrElement aux_dest = &lvar[28];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[65]);
}
{
PFrElement aux_dest = &lvar[29];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[67]);
}
{
PFrElement aux_dest = &lvar[30];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[69]);
}
{
PFrElement aux_dest = &lvar[31];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[71]);
}
{
PFrElement aux_dest = &lvar[32];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[73]);
}
{
PFrElement aux_dest = &lvar[33];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[74]);
}
{
PFrElement aux_dest = &lvar[34];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[76]);
}
{
PFrElement aux_dest = &lvar[35];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[77]);
}
{
PFrElement aux_dest = &lvar[36];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[79]);
}
{
PFrElement aux_dest = &lvar[37];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[81]);
}
{
PFrElement aux_dest = &lvar[38];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[83]);
}
{
PFrElement aux_dest = &lvar[39];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[85]);
}
{
PFrElement aux_dest = &lvar[40];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[87]);
}
{
PFrElement aux_dest = &lvar[41];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[89]);
}
{
PFrElement aux_dest = &lvar[42];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[91]);
}
{
PFrElement aux_dest = &lvar[43];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[93]);
}
{
PFrElement aux_dest = &lvar[44];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[95]);
}
{
PFrElement aux_dest = &lvar[45];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[97]);
}
{
PFrElement aux_dest = &lvar[46];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[99]);
}
{
PFrElement aux_dest = &lvar[47];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[101]);
}
{
PFrElement aux_dest = &lvar[48];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[103]);
}
{
PFrElement aux_dest = &lvar[49];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[105]);
}
{
PFrElement aux_dest = &lvar[50];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[107]);
}
{
PFrElement aux_dest = &lvar[51];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[109]);
}
{
PFrElement aux_dest = &lvar[52];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[111]);
}
{
PFrElement aux_dest = &lvar[53];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[113]);
}
{
PFrElement aux_dest = &lvar[54];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[115]);
}
{
PFrElement aux_dest = &lvar[55];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[117]);
}
{
PFrElement aux_dest = &lvar[56];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[119]);
}
{
PFrElement aux_dest = &lvar[57];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[121]);
}
{
PFrElement aux_dest = &lvar[58];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[123]);
}
{
PFrElement aux_dest = &lvar[59];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[125]);
}
{
PFrElement aux_dest = &lvar[60];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[127]);
}
{
PFrElement aux_dest = &lvar[61];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[129]);
}
{
PFrElement aux_dest = &lvar[62];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[131]);
}
{
PFrElement aux_dest = &lvar[63];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[133]);
}
{
PFrElement aux_dest = &lvar[64];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[135]);
}
{
PFrElement aux_dest = &lvar[65];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[65],&circuitConstants[16]); // line circom 50
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[65])) + 0)];
// load src
Fr_shr(&expaux[1],&circuitConstants[40],&lvar[65]); // line circom 51
Fr_band(&expaux[0],&expaux[1],&circuitConstants[2]); // line circom 51
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[65];
// load src
Fr_add(&expaux[0],&lvar[65],&circuitConstants[2]); // line circom 50
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[65],&circuitConstants[16]); // line circom 50
}
}

void K_33_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 33;
ctx->componentMemory[coffset].templateName = "K";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 0;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[0];
K_33_run(coffset,ctx);
}

void K_33_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
bool* mySubcomponentsParallel = ctx->componentMemory[ctx_index].subcomponentsParallel;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[4];
FrElement lvar[66];
uint sub_component_aux;
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[41]);
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[22]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[23]);
}
{
PFrElement aux_dest = &lvar[3];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[24]);
}
{
PFrElement aux_dest = &lvar[4];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[25]);
}
{
PFrElement aux_dest = &lvar[5];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[26]);
}
{
PFrElement aux_dest = &lvar[6];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[27]);
}
{
PFrElement aux_dest = &lvar[7];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[28]);
}
{
PFrElement aux_dest = &lvar[8];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[29]);
}
{
PFrElement aux_dest = &lvar[9];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[31]);
}
{
PFrElement aux_dest = &lvar[10];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[33]);
}
{
PFrElement aux_dest = &lvar[11];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[34]);
}
{
PFrElement aux_dest = &lvar[12];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[36]);
}
{
PFrElement aux_dest = &lvar[13];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[38]);
}
{
PFrElement aux_dest = &lvar[14];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[40]);
}
{
PFrElement aux_dest = &lvar[15];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[42]);
}
{
PFrElement aux_dest = &lvar[16];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[44]);
}
{
PFrElement aux_dest = &lvar[17];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[46]);
}
{
PFrElement aux_dest = &lvar[18];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[47]);
}
{
PFrElement aux_dest = &lvar[19];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[48]);
}
{
PFrElement aux_dest = &lvar[20];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[49]);
}
{
PFrElement aux_dest = &lvar[21];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[51]);
}
{
PFrElement aux_dest = &lvar[22];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[53]);
}
{
PFrElement aux_dest = &lvar[23];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[55]);
}
{
PFrElement aux_dest = &lvar[24];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[57]);
}
{
PFrElement aux_dest = &lvar[25];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[59]);
}
{
PFrElement aux_dest = &lvar[26];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[61]);
}
{
PFrElement aux_dest = &lvar[27];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[63]);
}
{
PFrElement aux_dest = &lvar[28];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[65]);
}
{
PFrElement aux_dest = &lvar[29];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[67]);
}
{
PFrElement aux_dest = &lvar[30];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[69]);
}
{
PFrElement aux_dest = &lvar[31];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[71]);
}
{
PFrElement aux_dest = &lvar[32];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[73]);
}
{
PFrElement aux_dest = &lvar[33];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[74]);
}
{
PFrElement aux_dest = &lvar[34];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[76]);
}
{
PFrElement aux_dest = &lvar[35];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[77]);
}
{
PFrElement aux_dest = &lvar[36];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[79]);
}
{
PFrElement aux_dest = &lvar[37];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[81]);
}
{
PFrElement aux_dest = &lvar[38];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[83]);
}
{
PFrElement aux_dest = &lvar[39];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[85]);
}
{
PFrElement aux_dest = &lvar[40];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[87]);
}
{
PFrElement aux_dest = &lvar[41];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[89]);
}
{
PFrElement aux_dest = &lvar[42];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[91]);
}
{
PFrElement aux_dest = &lvar[43];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[93]);
}
{
PFrElement aux_dest = &lvar[44];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[95]);
}
{
PFrElement aux_dest = &lvar[45];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[97]);
}
{
PFrElement aux_dest = &lvar[46];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[99]);
}
{
PFrElement aux_dest = &lvar[47];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[101]);
}
{
PFrElement aux_dest = &lvar[48];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[103]);
}
{
PFrElement aux_dest = &lvar[49];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[105]);
}
{
PFrElement aux_dest = &lvar[50];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[107]);
}
{
PFrElement aux_dest = &lvar[51];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[109]);
}
{
PFrElement aux_dest = &lvar[52];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[111]);
}
{
PFrElement aux_dest = &lvar[53];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[113]);
}
{
PFrElement aux_dest = &lvar[54];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[115]);
}
{
PFrElement aux_dest = &lvar[55];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[117]);
}
{
PFrElement aux_dest = &lvar[56];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[119]);
}
{
PFrElement aux_dest = &lvar[57];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[121]);
}
{
PFrElement aux_dest = &lvar[58];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[123]);
}
{
PFrElement aux_dest = &lvar[59];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[125]);
}
{
PFrElement aux_dest = &lvar[60];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[127]);
}
{
PFrElement aux_dest = &lvar[61];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[129]);
}
{
PFrElement aux_dest = &lvar[62];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[131]);
}
{
PFrElement aux_dest = &lvar[63];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[133]);
}
{
PFrElement aux_dest = &lvar[64];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[135]);
}
{
PFrElement aux_dest = &lvar[65];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[65],&circuitConstants[16]); // line circom 50
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[65])) + 0)];
// load src
Fr_shr(&expaux[1],&circuitConstants[42],&lvar[65]); // line circom 51
Fr_band(&expaux[0],&expaux[1],&circuitConstants[2]); // line circom 51
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[65];
// load src
Fr_add(&expaux[0],&lvar[65],&circuitConstants[2]); // line circom 50
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[65],&circuitConstants[16]); // line circom 50
}
}

void K_34_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 34;
ctx->componentMemory[coffset].templateName = "K";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 0;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[0];
K_34_run(coffset,ctx);
}

void K_34_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
bool* mySubcomponentsParallel = ctx->componentMemory[ctx_index].subcomponentsParallel;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[4];
FrElement lvar[66];
uint sub_component_aux;
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[43]);
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[22]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[23]);
}
{
PFrElement aux_dest = &lvar[3];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[24]);
}
{
PFrElement aux_dest = &lvar[4];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[25]);
}
{
PFrElement aux_dest = &lvar[5];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[26]);
}
{
PFrElement aux_dest = &lvar[6];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[27]);
}
{
PFrElement aux_dest = &lvar[7];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[28]);
}
{
PFrElement aux_dest = &lvar[8];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[29]);
}
{
PFrElement aux_dest = &lvar[9];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[31]);
}
{
PFrElement aux_dest = &lvar[10];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[33]);
}
{
PFrElement aux_dest = &lvar[11];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[34]);
}
{
PFrElement aux_dest = &lvar[12];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[36]);
}
{
PFrElement aux_dest = &lvar[13];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[38]);
}
{
PFrElement aux_dest = &lvar[14];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[40]);
}
{
PFrElement aux_dest = &lvar[15];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[42]);
}
{
PFrElement aux_dest = &lvar[16];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[44]);
}
{
PFrElement aux_dest = &lvar[17];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[46]);
}
{
PFrElement aux_dest = &lvar[18];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[47]);
}
{
PFrElement aux_dest = &lvar[19];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[48]);
}
{
PFrElement aux_dest = &lvar[20];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[49]);
}
{
PFrElement aux_dest = &lvar[21];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[51]);
}
{
PFrElement aux_dest = &lvar[22];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[53]);
}
{
PFrElement aux_dest = &lvar[23];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[55]);
}
{
PFrElement aux_dest = &lvar[24];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[57]);
}
{
PFrElement aux_dest = &lvar[25];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[59]);
}
{
PFrElement aux_dest = &lvar[26];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[61]);
}
{
PFrElement aux_dest = &lvar[27];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[63]);
}
{
PFrElement aux_dest = &lvar[28];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[65]);
}
{
PFrElement aux_dest = &lvar[29];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[67]);
}
{
PFrElement aux_dest = &lvar[30];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[69]);
}
{
PFrElement aux_dest = &lvar[31];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[71]);
}
{
PFrElement aux_dest = &lvar[32];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[73]);
}
{
PFrElement aux_dest = &lvar[33];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[74]);
}
{
PFrElement aux_dest = &lvar[34];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[76]);
}
{
PFrElement aux_dest = &lvar[35];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[77]);
}
{
PFrElement aux_dest = &lvar[36];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[79]);
}
{
PFrElement aux_dest = &lvar[37];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[81]);
}
{
PFrElement aux_dest = &lvar[38];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[83]);
}
{
PFrElement aux_dest = &lvar[39];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[85]);
}
{
PFrElement aux_dest = &lvar[40];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[87]);
}
{
PFrElement aux_dest = &lvar[41];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[89]);
}
{
PFrElement aux_dest = &lvar[42];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[91]);
}
{
PFrElement aux_dest = &lvar[43];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[93]);
}
{
PFrElement aux_dest = &lvar[44];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[95]);
}
{
PFrElement aux_dest = &lvar[45];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[97]);
}
{
PFrElement aux_dest = &lvar[46];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[99]);
}
{
PFrElement aux_dest = &lvar[47];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[101]);
}
{
PFrElement aux_dest = &lvar[48];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[103]);
}
{
PFrElement aux_dest = &lvar[49];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[105]);
}
{
PFrElement aux_dest = &lvar[50];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[107]);
}
{
PFrElement aux_dest = &lvar[51];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[109]);
}
{
PFrElement aux_dest = &lvar[52];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[111]);
}
{
PFrElement aux_dest = &lvar[53];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[113]);
}
{
PFrElement aux_dest = &lvar[54];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[115]);
}
{
PFrElement aux_dest = &lvar[55];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[117]);
}
{
PFrElement aux_dest = &lvar[56];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[119]);
}
{
PFrElement aux_dest = &lvar[57];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[121]);
}
{
PFrElement aux_dest = &lvar[58];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[123]);
}
{
PFrElement aux_dest = &lvar[59];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[125]);
}
{
PFrElement aux_dest = &lvar[60];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[127]);
}
{
PFrElement aux_dest = &lvar[61];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[129]);
}
{
PFrElement aux_dest = &lvar[62];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[131]);
}
{
PFrElement aux_dest = &lvar[63];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[133]);
}
{
PFrElement aux_dest = &lvar[64];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[135]);
}
{
PFrElement aux_dest = &lvar[65];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[65],&circuitConstants[16]); // line circom 50
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[65])) + 0)];
// load src
Fr_shr(&expaux[1],&circuitConstants[44],&lvar[65]); // line circom 51
Fr_band(&expaux[0],&expaux[1],&circuitConstants[2]); // line circom 51
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[65];
// load src
Fr_add(&expaux[0],&lvar[65],&circuitConstants[2]); // line circom 50
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[65],&circuitConstants[16]); // line circom 50
}
}

void K_35_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 35;
ctx->componentMemory[coffset].templateName = "K";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 0;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[0];
K_35_run(coffset,ctx);
}

void K_35_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
bool* mySubcomponentsParallel = ctx->componentMemory[ctx_index].subcomponentsParallel;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[4];
FrElement lvar[66];
uint sub_component_aux;
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[45]);
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[22]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[23]);
}
{
PFrElement aux_dest = &lvar[3];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[24]);
}
{
PFrElement aux_dest = &lvar[4];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[25]);
}
{
PFrElement aux_dest = &lvar[5];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[26]);
}
{
PFrElement aux_dest = &lvar[6];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[27]);
}
{
PFrElement aux_dest = &lvar[7];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[28]);
}
{
PFrElement aux_dest = &lvar[8];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[29]);
}
{
PFrElement aux_dest = &lvar[9];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[31]);
}
{
PFrElement aux_dest = &lvar[10];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[33]);
}
{
PFrElement aux_dest = &lvar[11];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[34]);
}
{
PFrElement aux_dest = &lvar[12];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[36]);
}
{
PFrElement aux_dest = &lvar[13];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[38]);
}
{
PFrElement aux_dest = &lvar[14];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[40]);
}
{
PFrElement aux_dest = &lvar[15];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[42]);
}
{
PFrElement aux_dest = &lvar[16];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[44]);
}
{
PFrElement aux_dest = &lvar[17];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[46]);
}
{
PFrElement aux_dest = &lvar[18];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[47]);
}
{
PFrElement aux_dest = &lvar[19];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[48]);
}
{
PFrElement aux_dest = &lvar[20];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[49]);
}
{
PFrElement aux_dest = &lvar[21];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[51]);
}
{
PFrElement aux_dest = &lvar[22];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[53]);
}
{
PFrElement aux_dest = &lvar[23];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[55]);
}
{
PFrElement aux_dest = &lvar[24];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[57]);
}
{
PFrElement aux_dest = &lvar[25];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[59]);
}
{
PFrElement aux_dest = &lvar[26];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[61]);
}
{
PFrElement aux_dest = &lvar[27];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[63]);
}
{
PFrElement aux_dest = &lvar[28];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[65]);
}
{
PFrElement aux_dest = &lvar[29];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[67]);
}
{
PFrElement aux_dest = &lvar[30];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[69]);
}
{
PFrElement aux_dest = &lvar[31];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[71]);
}
{
PFrElement aux_dest = &lvar[32];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[73]);
}
{
PFrElement aux_dest = &lvar[33];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[74]);
}
{
PFrElement aux_dest = &lvar[34];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[76]);
}
{
PFrElement aux_dest = &lvar[35];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[77]);
}
{
PFrElement aux_dest = &lvar[36];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[79]);
}
{
PFrElement aux_dest = &lvar[37];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[81]);
}
{
PFrElement aux_dest = &lvar[38];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[83]);
}
{
PFrElement aux_dest = &lvar[39];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[85]);
}
{
PFrElement aux_dest = &lvar[40];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[87]);
}
{
PFrElement aux_dest = &lvar[41];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[89]);
}
{
PFrElement aux_dest = &lvar[42];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[91]);
}
{
PFrElement aux_dest = &lvar[43];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[93]);
}
{
PFrElement aux_dest = &lvar[44];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[95]);
}
{
PFrElement aux_dest = &lvar[45];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[97]);
}
{
PFrElement aux_dest = &lvar[46];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[99]);
}
{
PFrElement aux_dest = &lvar[47];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[101]);
}
{
PFrElement aux_dest = &lvar[48];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[103]);
}
{
PFrElement aux_dest = &lvar[49];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[105]);
}
{
PFrElement aux_dest = &lvar[50];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[107]);
}
{
PFrElement aux_dest = &lvar[51];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[109]);
}
{
PFrElement aux_dest = &lvar[52];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[111]);
}
{
PFrElement aux_dest = &lvar[53];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[113]);
}
{
PFrElement aux_dest = &lvar[54];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[115]);
}
{
PFrElement aux_dest = &lvar[55];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[117]);
}
{
PFrElement aux_dest = &lvar[56];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[119]);
}
{
PFrElement aux_dest = &lvar[57];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[121]);
}
{
PFrElement aux_dest = &lvar[58];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[123]);
}
{
PFrElement aux_dest = &lvar[59];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[125]);
}
{
PFrElement aux_dest = &lvar[60];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[127]);
}
{
PFrElement aux_dest = &lvar[61];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[129]);
}
{
PFrElement aux_dest = &lvar[62];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[131]);
}
{
PFrElement aux_dest = &lvar[63];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[133]);
}
{
PFrElement aux_dest = &lvar[64];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[135]);
}
{
PFrElement aux_dest = &lvar[65];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[65],&circuitConstants[16]); // line circom 50
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[65])) + 0)];
// load src
Fr_shr(&expaux[1],&circuitConstants[46],&lvar[65]); // line circom 51
Fr_band(&expaux[0],&expaux[1],&circuitConstants[2]); // line circom 51
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[65];
// load src
Fr_add(&expaux[0],&lvar[65],&circuitConstants[2]); // line circom 50
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[65],&circuitConstants[16]); // line circom 50
}
}

void K_36_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 36;
ctx->componentMemory[coffset].templateName = "K";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 0;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[0];
K_36_run(coffset,ctx);
}

void K_36_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
bool* mySubcomponentsParallel = ctx->componentMemory[ctx_index].subcomponentsParallel;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[4];
FrElement lvar[66];
uint sub_component_aux;
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[17]);
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[22]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[23]);
}
{
PFrElement aux_dest = &lvar[3];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[24]);
}
{
PFrElement aux_dest = &lvar[4];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[25]);
}
{
PFrElement aux_dest = &lvar[5];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[26]);
}
{
PFrElement aux_dest = &lvar[6];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[27]);
}
{
PFrElement aux_dest = &lvar[7];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[28]);
}
{
PFrElement aux_dest = &lvar[8];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[29]);
}
{
PFrElement aux_dest = &lvar[9];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[31]);
}
{
PFrElement aux_dest = &lvar[10];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[33]);
}
{
PFrElement aux_dest = &lvar[11];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[34]);
}
{
PFrElement aux_dest = &lvar[12];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[36]);
}
{
PFrElement aux_dest = &lvar[13];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[38]);
}
{
PFrElement aux_dest = &lvar[14];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[40]);
}
{
PFrElement aux_dest = &lvar[15];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[42]);
}
{
PFrElement aux_dest = &lvar[16];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[44]);
}
{
PFrElement aux_dest = &lvar[17];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[46]);
}
{
PFrElement aux_dest = &lvar[18];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[47]);
}
{
PFrElement aux_dest = &lvar[19];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[48]);
}
{
PFrElement aux_dest = &lvar[20];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[49]);
}
{
PFrElement aux_dest = &lvar[21];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[51]);
}
{
PFrElement aux_dest = &lvar[22];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[53]);
}
{
PFrElement aux_dest = &lvar[23];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[55]);
}
{
PFrElement aux_dest = &lvar[24];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[57]);
}
{
PFrElement aux_dest = &lvar[25];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[59]);
}
{
PFrElement aux_dest = &lvar[26];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[61]);
}
{
PFrElement aux_dest = &lvar[27];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[63]);
}
{
PFrElement aux_dest = &lvar[28];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[65]);
}
{
PFrElement aux_dest = &lvar[29];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[67]);
}
{
PFrElement aux_dest = &lvar[30];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[69]);
}
{
PFrElement aux_dest = &lvar[31];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[71]);
}
{
PFrElement aux_dest = &lvar[32];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[73]);
}
{
PFrElement aux_dest = &lvar[33];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[74]);
}
{
PFrElement aux_dest = &lvar[34];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[76]);
}
{
PFrElement aux_dest = &lvar[35];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[77]);
}
{
PFrElement aux_dest = &lvar[36];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[79]);
}
{
PFrElement aux_dest = &lvar[37];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[81]);
}
{
PFrElement aux_dest = &lvar[38];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[83]);
}
{
PFrElement aux_dest = &lvar[39];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[85]);
}
{
PFrElement aux_dest = &lvar[40];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[87]);
}
{
PFrElement aux_dest = &lvar[41];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[89]);
}
{
PFrElement aux_dest = &lvar[42];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[91]);
}
{
PFrElement aux_dest = &lvar[43];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[93]);
}
{
PFrElement aux_dest = &lvar[44];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[95]);
}
{
PFrElement aux_dest = &lvar[45];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[97]);
}
{
PFrElement aux_dest = &lvar[46];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[99]);
}
{
PFrElement aux_dest = &lvar[47];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[101]);
}
{
PFrElement aux_dest = &lvar[48];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[103]);
}
{
PFrElement aux_dest = &lvar[49];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[105]);
}
{
PFrElement aux_dest = &lvar[50];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[107]);
}
{
PFrElement aux_dest = &lvar[51];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[109]);
}
{
PFrElement aux_dest = &lvar[52];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[111]);
}
{
PFrElement aux_dest = &lvar[53];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[113]);
}
{
PFrElement aux_dest = &lvar[54];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[115]);
}
{
PFrElement aux_dest = &lvar[55];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[117]);
}
{
PFrElement aux_dest = &lvar[56];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[119]);
}
{
PFrElement aux_dest = &lvar[57];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[121]);
}
{
PFrElement aux_dest = &lvar[58];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[123]);
}
{
PFrElement aux_dest = &lvar[59];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[125]);
}
{
PFrElement aux_dest = &lvar[60];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[127]);
}
{
PFrElement aux_dest = &lvar[61];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[129]);
}
{
PFrElement aux_dest = &lvar[62];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[131]);
}
{
PFrElement aux_dest = &lvar[63];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[133]);
}
{
PFrElement aux_dest = &lvar[64];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[135]);
}
{
PFrElement aux_dest = &lvar[65];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[65],&circuitConstants[16]); // line circom 50
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[65])) + 0)];
// load src
Fr_shr(&expaux[1],&circuitConstants[47],&lvar[65]); // line circom 51
Fr_band(&expaux[0],&expaux[1],&circuitConstants[2]); // line circom 51
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[65];
// load src
Fr_add(&expaux[0],&lvar[65],&circuitConstants[2]); // line circom 50
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[65],&circuitConstants[16]); // line circom 50
}
}

void K_37_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 37;
ctx->componentMemory[coffset].templateName = "K";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 0;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[0];
K_37_run(coffset,ctx);
}

void K_37_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
bool* mySubcomponentsParallel = ctx->componentMemory[ctx_index].subcomponentsParallel;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[4];
FrElement lvar[66];
uint sub_component_aux;
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[20]);
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[22]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[23]);
}
{
PFrElement aux_dest = &lvar[3];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[24]);
}
{
PFrElement aux_dest = &lvar[4];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[25]);
}
{
PFrElement aux_dest = &lvar[5];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[26]);
}
{
PFrElement aux_dest = &lvar[6];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[27]);
}
{
PFrElement aux_dest = &lvar[7];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[28]);
}
{
PFrElement aux_dest = &lvar[8];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[29]);
}
{
PFrElement aux_dest = &lvar[9];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[31]);
}
{
PFrElement aux_dest = &lvar[10];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[33]);
}
{
PFrElement aux_dest = &lvar[11];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[34]);
}
{
PFrElement aux_dest = &lvar[12];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[36]);
}
{
PFrElement aux_dest = &lvar[13];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[38]);
}
{
PFrElement aux_dest = &lvar[14];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[40]);
}
{
PFrElement aux_dest = &lvar[15];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[42]);
}
{
PFrElement aux_dest = &lvar[16];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[44]);
}
{
PFrElement aux_dest = &lvar[17];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[46]);
}
{
PFrElement aux_dest = &lvar[18];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[47]);
}
{
PFrElement aux_dest = &lvar[19];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[48]);
}
{
PFrElement aux_dest = &lvar[20];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[49]);
}
{
PFrElement aux_dest = &lvar[21];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[51]);
}
{
PFrElement aux_dest = &lvar[22];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[53]);
}
{
PFrElement aux_dest = &lvar[23];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[55]);
}
{
PFrElement aux_dest = &lvar[24];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[57]);
}
{
PFrElement aux_dest = &lvar[25];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[59]);
}
{
PFrElement aux_dest = &lvar[26];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[61]);
}
{
PFrElement aux_dest = &lvar[27];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[63]);
}
{
PFrElement aux_dest = &lvar[28];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[65]);
}
{
PFrElement aux_dest = &lvar[29];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[67]);
}
{
PFrElement aux_dest = &lvar[30];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[69]);
}
{
PFrElement aux_dest = &lvar[31];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[71]);
}
{
PFrElement aux_dest = &lvar[32];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[73]);
}
{
PFrElement aux_dest = &lvar[33];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[74]);
}
{
PFrElement aux_dest = &lvar[34];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[76]);
}
{
PFrElement aux_dest = &lvar[35];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[77]);
}
{
PFrElement aux_dest = &lvar[36];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[79]);
}
{
PFrElement aux_dest = &lvar[37];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[81]);
}
{
PFrElement aux_dest = &lvar[38];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[83]);
}
{
PFrElement aux_dest = &lvar[39];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[85]);
}
{
PFrElement aux_dest = &lvar[40];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[87]);
}
{
PFrElement aux_dest = &lvar[41];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[89]);
}
{
PFrElement aux_dest = &lvar[42];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[91]);
}
{
PFrElement aux_dest = &lvar[43];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[93]);
}
{
PFrElement aux_dest = &lvar[44];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[95]);
}
{
PFrElement aux_dest = &lvar[45];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[97]);
}
{
PFrElement aux_dest = &lvar[46];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[99]);
}
{
PFrElement aux_dest = &lvar[47];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[101]);
}
{
PFrElement aux_dest = &lvar[48];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[103]);
}
{
PFrElement aux_dest = &lvar[49];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[105]);
}
{
PFrElement aux_dest = &lvar[50];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[107]);
}
{
PFrElement aux_dest = &lvar[51];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[109]);
}
{
PFrElement aux_dest = &lvar[52];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[111]);
}
{
PFrElement aux_dest = &lvar[53];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[113]);
}
{
PFrElement aux_dest = &lvar[54];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[115]);
}
{
PFrElement aux_dest = &lvar[55];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[117]);
}
{
PFrElement aux_dest = &lvar[56];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[119]);
}
{
PFrElement aux_dest = &lvar[57];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[121]);
}
{
PFrElement aux_dest = &lvar[58];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[123]);
}
{
PFrElement aux_dest = &lvar[59];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[125]);
}
{
PFrElement aux_dest = &lvar[60];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[127]);
}
{
PFrElement aux_dest = &lvar[61];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[129]);
}
{
PFrElement aux_dest = &lvar[62];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[131]);
}
{
PFrElement aux_dest = &lvar[63];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[133]);
}
{
PFrElement aux_dest = &lvar[64];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[135]);
}
{
PFrElement aux_dest = &lvar[65];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[65],&circuitConstants[16]); // line circom 50
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[65])) + 0)];
// load src
Fr_shr(&expaux[1],&circuitConstants[48],&lvar[65]); // line circom 51
Fr_band(&expaux[0],&expaux[1],&circuitConstants[2]); // line circom 51
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[65];
// load src
Fr_add(&expaux[0],&lvar[65],&circuitConstants[2]); // line circom 50
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[65],&circuitConstants[16]); // line circom 50
}
}

void K_38_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 38;
ctx->componentMemory[coffset].templateName = "K";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 0;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[0];
K_38_run(coffset,ctx);
}

void K_38_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
bool* mySubcomponentsParallel = ctx->componentMemory[ctx_index].subcomponentsParallel;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[4];
FrElement lvar[66];
uint sub_component_aux;
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[18]);
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[22]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[23]);
}
{
PFrElement aux_dest = &lvar[3];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[24]);
}
{
PFrElement aux_dest = &lvar[4];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[25]);
}
{
PFrElement aux_dest = &lvar[5];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[26]);
}
{
PFrElement aux_dest = &lvar[6];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[27]);
}
{
PFrElement aux_dest = &lvar[7];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[28]);
}
{
PFrElement aux_dest = &lvar[8];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[29]);
}
{
PFrElement aux_dest = &lvar[9];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[31]);
}
{
PFrElement aux_dest = &lvar[10];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[33]);
}
{
PFrElement aux_dest = &lvar[11];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[34]);
}
{
PFrElement aux_dest = &lvar[12];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[36]);
}
{
PFrElement aux_dest = &lvar[13];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[38]);
}
{
PFrElement aux_dest = &lvar[14];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[40]);
}
{
PFrElement aux_dest = &lvar[15];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[42]);
}
{
PFrElement aux_dest = &lvar[16];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[44]);
}
{
PFrElement aux_dest = &lvar[17];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[46]);
}
{
PFrElement aux_dest = &lvar[18];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[47]);
}
{
PFrElement aux_dest = &lvar[19];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[48]);
}
{
PFrElement aux_dest = &lvar[20];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[49]);
}
{
PFrElement aux_dest = &lvar[21];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[51]);
}
{
PFrElement aux_dest = &lvar[22];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[53]);
}
{
PFrElement aux_dest = &lvar[23];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[55]);
}
{
PFrElement aux_dest = &lvar[24];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[57]);
}
{
PFrElement aux_dest = &lvar[25];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[59]);
}
{
PFrElement aux_dest = &lvar[26];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[61]);
}
{
PFrElement aux_dest = &lvar[27];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[63]);
}
{
PFrElement aux_dest = &lvar[28];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[65]);
}
{
PFrElement aux_dest = &lvar[29];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[67]);
}
{
PFrElement aux_dest = &lvar[30];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[69]);
}
{
PFrElement aux_dest = &lvar[31];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[71]);
}
{
PFrElement aux_dest = &lvar[32];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[73]);
}
{
PFrElement aux_dest = &lvar[33];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[74]);
}
{
PFrElement aux_dest = &lvar[34];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[76]);
}
{
PFrElement aux_dest = &lvar[35];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[77]);
}
{
PFrElement aux_dest = &lvar[36];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[79]);
}
{
PFrElement aux_dest = &lvar[37];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[81]);
}
{
PFrElement aux_dest = &lvar[38];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[83]);
}
{
PFrElement aux_dest = &lvar[39];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[85]);
}
{
PFrElement aux_dest = &lvar[40];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[87]);
}
{
PFrElement aux_dest = &lvar[41];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[89]);
}
{
PFrElement aux_dest = &lvar[42];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[91]);
}
{
PFrElement aux_dest = &lvar[43];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[93]);
}
{
PFrElement aux_dest = &lvar[44];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[95]);
}
{
PFrElement aux_dest = &lvar[45];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[97]);
}
{
PFrElement aux_dest = &lvar[46];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[99]);
}
{
PFrElement aux_dest = &lvar[47];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[101]);
}
{
PFrElement aux_dest = &lvar[48];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[103]);
}
{
PFrElement aux_dest = &lvar[49];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[105]);
}
{
PFrElement aux_dest = &lvar[50];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[107]);
}
{
PFrElement aux_dest = &lvar[51];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[109]);
}
{
PFrElement aux_dest = &lvar[52];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[111]);
}
{
PFrElement aux_dest = &lvar[53];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[113]);
}
{
PFrElement aux_dest = &lvar[54];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[115]);
}
{
PFrElement aux_dest = &lvar[55];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[117]);
}
{
PFrElement aux_dest = &lvar[56];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[119]);
}
{
PFrElement aux_dest = &lvar[57];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[121]);
}
{
PFrElement aux_dest = &lvar[58];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[123]);
}
{
PFrElement aux_dest = &lvar[59];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[125]);
}
{
PFrElement aux_dest = &lvar[60];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[127]);
}
{
PFrElement aux_dest = &lvar[61];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[129]);
}
{
PFrElement aux_dest = &lvar[62];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[131]);
}
{
PFrElement aux_dest = &lvar[63];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[133]);
}
{
PFrElement aux_dest = &lvar[64];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[135]);
}
{
PFrElement aux_dest = &lvar[65];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[65],&circuitConstants[16]); // line circom 50
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[65])) + 0)];
// load src
Fr_shr(&expaux[1],&circuitConstants[49],&lvar[65]); // line circom 51
Fr_band(&expaux[0],&expaux[1],&circuitConstants[2]); // line circom 51
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[65];
// load src
Fr_add(&expaux[0],&lvar[65],&circuitConstants[2]); // line circom 50
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[65],&circuitConstants[16]); // line circom 50
}
}

void K_39_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 39;
ctx->componentMemory[coffset].templateName = "K";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 0;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[0];
K_39_run(coffset,ctx);
}

void K_39_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
bool* mySubcomponentsParallel = ctx->componentMemory[ctx_index].subcomponentsParallel;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[4];
FrElement lvar[66];
uint sub_component_aux;
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[50]);
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[22]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[23]);
}
{
PFrElement aux_dest = &lvar[3];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[24]);
}
{
PFrElement aux_dest = &lvar[4];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[25]);
}
{
PFrElement aux_dest = &lvar[5];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[26]);
}
{
PFrElement aux_dest = &lvar[6];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[27]);
}
{
PFrElement aux_dest = &lvar[7];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[28]);
}
{
PFrElement aux_dest = &lvar[8];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[29]);
}
{
PFrElement aux_dest = &lvar[9];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[31]);
}
{
PFrElement aux_dest = &lvar[10];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[33]);
}
{
PFrElement aux_dest = &lvar[11];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[34]);
}
{
PFrElement aux_dest = &lvar[12];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[36]);
}
{
PFrElement aux_dest = &lvar[13];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[38]);
}
{
PFrElement aux_dest = &lvar[14];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[40]);
}
{
PFrElement aux_dest = &lvar[15];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[42]);
}
{
PFrElement aux_dest = &lvar[16];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[44]);
}
{
PFrElement aux_dest = &lvar[17];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[46]);
}
{
PFrElement aux_dest = &lvar[18];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[47]);
}
{
PFrElement aux_dest = &lvar[19];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[48]);
}
{
PFrElement aux_dest = &lvar[20];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[49]);
}
{
PFrElement aux_dest = &lvar[21];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[51]);
}
{
PFrElement aux_dest = &lvar[22];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[53]);
}
{
PFrElement aux_dest = &lvar[23];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[55]);
}
{
PFrElement aux_dest = &lvar[24];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[57]);
}
{
PFrElement aux_dest = &lvar[25];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[59]);
}
{
PFrElement aux_dest = &lvar[26];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[61]);
}
{
PFrElement aux_dest = &lvar[27];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[63]);
}
{
PFrElement aux_dest = &lvar[28];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[65]);
}
{
PFrElement aux_dest = &lvar[29];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[67]);
}
{
PFrElement aux_dest = &lvar[30];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[69]);
}
{
PFrElement aux_dest = &lvar[31];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[71]);
}
{
PFrElement aux_dest = &lvar[32];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[73]);
}
{
PFrElement aux_dest = &lvar[33];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[74]);
}
{
PFrElement aux_dest = &lvar[34];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[76]);
}
{
PFrElement aux_dest = &lvar[35];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[77]);
}
{
PFrElement aux_dest = &lvar[36];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[79]);
}
{
PFrElement aux_dest = &lvar[37];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[81]);
}
{
PFrElement aux_dest = &lvar[38];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[83]);
}
{
PFrElement aux_dest = &lvar[39];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[85]);
}
{
PFrElement aux_dest = &lvar[40];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[87]);
}
{
PFrElement aux_dest = &lvar[41];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[89]);
}
{
PFrElement aux_dest = &lvar[42];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[91]);
}
{
PFrElement aux_dest = &lvar[43];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[93]);
}
{
PFrElement aux_dest = &lvar[44];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[95]);
}
{
PFrElement aux_dest = &lvar[45];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[97]);
}
{
PFrElement aux_dest = &lvar[46];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[99]);
}
{
PFrElement aux_dest = &lvar[47];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[101]);
}
{
PFrElement aux_dest = &lvar[48];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[103]);
}
{
PFrElement aux_dest = &lvar[49];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[105]);
}
{
PFrElement aux_dest = &lvar[50];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[107]);
}
{
PFrElement aux_dest = &lvar[51];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[109]);
}
{
PFrElement aux_dest = &lvar[52];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[111]);
}
{
PFrElement aux_dest = &lvar[53];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[113]);
}
{
PFrElement aux_dest = &lvar[54];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[115]);
}
{
PFrElement aux_dest = &lvar[55];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[117]);
}
{
PFrElement aux_dest = &lvar[56];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[119]);
}
{
PFrElement aux_dest = &lvar[57];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[121]);
}
{
PFrElement aux_dest = &lvar[58];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[123]);
}
{
PFrElement aux_dest = &lvar[59];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[125]);
}
{
PFrElement aux_dest = &lvar[60];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[127]);
}
{
PFrElement aux_dest = &lvar[61];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[129]);
}
{
PFrElement aux_dest = &lvar[62];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[131]);
}
{
PFrElement aux_dest = &lvar[63];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[133]);
}
{
PFrElement aux_dest = &lvar[64];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[135]);
}
{
PFrElement aux_dest = &lvar[65];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[65],&circuitConstants[16]); // line circom 50
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[65])) + 0)];
// load src
Fr_shr(&expaux[1],&circuitConstants[51],&lvar[65]); // line circom 51
Fr_band(&expaux[0],&expaux[1],&circuitConstants[2]); // line circom 51
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[65];
// load src
Fr_add(&expaux[0],&lvar[65],&circuitConstants[2]); // line circom 50
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[65],&circuitConstants[16]); // line circom 50
}
}

void K_40_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 40;
ctx->componentMemory[coffset].templateName = "K";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 0;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[0];
K_40_run(coffset,ctx);
}

void K_40_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
bool* mySubcomponentsParallel = ctx->componentMemory[ctx_index].subcomponentsParallel;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[4];
FrElement lvar[66];
uint sub_component_aux;
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[52]);
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[22]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[23]);
}
{
PFrElement aux_dest = &lvar[3];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[24]);
}
{
PFrElement aux_dest = &lvar[4];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[25]);
}
{
PFrElement aux_dest = &lvar[5];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[26]);
}
{
PFrElement aux_dest = &lvar[6];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[27]);
}
{
PFrElement aux_dest = &lvar[7];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[28]);
}
{
PFrElement aux_dest = &lvar[8];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[29]);
}
{
PFrElement aux_dest = &lvar[9];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[31]);
}
{
PFrElement aux_dest = &lvar[10];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[33]);
}
{
PFrElement aux_dest = &lvar[11];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[34]);
}
{
PFrElement aux_dest = &lvar[12];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[36]);
}
{
PFrElement aux_dest = &lvar[13];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[38]);
}
{
PFrElement aux_dest = &lvar[14];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[40]);
}
{
PFrElement aux_dest = &lvar[15];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[42]);
}
{
PFrElement aux_dest = &lvar[16];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[44]);
}
{
PFrElement aux_dest = &lvar[17];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[46]);
}
{
PFrElement aux_dest = &lvar[18];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[47]);
}
{
PFrElement aux_dest = &lvar[19];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[48]);
}
{
PFrElement aux_dest = &lvar[20];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[49]);
}
{
PFrElement aux_dest = &lvar[21];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[51]);
}
{
PFrElement aux_dest = &lvar[22];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[53]);
}
{
PFrElement aux_dest = &lvar[23];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[55]);
}
{
PFrElement aux_dest = &lvar[24];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[57]);
}
{
PFrElement aux_dest = &lvar[25];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[59]);
}
{
PFrElement aux_dest = &lvar[26];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[61]);
}
{
PFrElement aux_dest = &lvar[27];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[63]);
}
{
PFrElement aux_dest = &lvar[28];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[65]);
}
{
PFrElement aux_dest = &lvar[29];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[67]);
}
{
PFrElement aux_dest = &lvar[30];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[69]);
}
{
PFrElement aux_dest = &lvar[31];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[71]);
}
{
PFrElement aux_dest = &lvar[32];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[73]);
}
{
PFrElement aux_dest = &lvar[33];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[74]);
}
{
PFrElement aux_dest = &lvar[34];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[76]);
}
{
PFrElement aux_dest = &lvar[35];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[77]);
}
{
PFrElement aux_dest = &lvar[36];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[79]);
}
{
PFrElement aux_dest = &lvar[37];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[81]);
}
{
PFrElement aux_dest = &lvar[38];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[83]);
}
{
PFrElement aux_dest = &lvar[39];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[85]);
}
{
PFrElement aux_dest = &lvar[40];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[87]);
}
{
PFrElement aux_dest = &lvar[41];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[89]);
}
{
PFrElement aux_dest = &lvar[42];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[91]);
}
{
PFrElement aux_dest = &lvar[43];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[93]);
}
{
PFrElement aux_dest = &lvar[44];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[95]);
}
{
PFrElement aux_dest = &lvar[45];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[97]);
}
{
PFrElement aux_dest = &lvar[46];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[99]);
}
{
PFrElement aux_dest = &lvar[47];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[101]);
}
{
PFrElement aux_dest = &lvar[48];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[103]);
}
{
PFrElement aux_dest = &lvar[49];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[105]);
}
{
PFrElement aux_dest = &lvar[50];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[107]);
}
{
PFrElement aux_dest = &lvar[51];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[109]);
}
{
PFrElement aux_dest = &lvar[52];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[111]);
}
{
PFrElement aux_dest = &lvar[53];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[113]);
}
{
PFrElement aux_dest = &lvar[54];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[115]);
}
{
PFrElement aux_dest = &lvar[55];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[117]);
}
{
PFrElement aux_dest = &lvar[56];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[119]);
}
{
PFrElement aux_dest = &lvar[57];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[121]);
}
{
PFrElement aux_dest = &lvar[58];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[123]);
}
{
PFrElement aux_dest = &lvar[59];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[125]);
}
{
PFrElement aux_dest = &lvar[60];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[127]);
}
{
PFrElement aux_dest = &lvar[61];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[129]);
}
{
PFrElement aux_dest = &lvar[62];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[131]);
}
{
PFrElement aux_dest = &lvar[63];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[133]);
}
{
PFrElement aux_dest = &lvar[64];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[135]);
}
{
PFrElement aux_dest = &lvar[65];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[65],&circuitConstants[16]); // line circom 50
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[65])) + 0)];
// load src
Fr_shr(&expaux[1],&circuitConstants[53],&lvar[65]); // line circom 51
Fr_band(&expaux[0],&expaux[1],&circuitConstants[2]); // line circom 51
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[65];
// load src
Fr_add(&expaux[0],&lvar[65],&circuitConstants[2]); // line circom 50
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[65],&circuitConstants[16]); // line circom 50
}
}

void K_41_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 41;
ctx->componentMemory[coffset].templateName = "K";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 0;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[0];
K_41_run(coffset,ctx);
}

void K_41_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
bool* mySubcomponentsParallel = ctx->componentMemory[ctx_index].subcomponentsParallel;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[4];
FrElement lvar[66];
uint sub_component_aux;
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[54]);
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[22]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[23]);
}
{
PFrElement aux_dest = &lvar[3];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[24]);
}
{
PFrElement aux_dest = &lvar[4];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[25]);
}
{
PFrElement aux_dest = &lvar[5];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[26]);
}
{
PFrElement aux_dest = &lvar[6];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[27]);
}
{
PFrElement aux_dest = &lvar[7];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[28]);
}
{
PFrElement aux_dest = &lvar[8];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[29]);
}
{
PFrElement aux_dest = &lvar[9];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[31]);
}
{
PFrElement aux_dest = &lvar[10];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[33]);
}
{
PFrElement aux_dest = &lvar[11];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[34]);
}
{
PFrElement aux_dest = &lvar[12];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[36]);
}
{
PFrElement aux_dest = &lvar[13];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[38]);
}
{
PFrElement aux_dest = &lvar[14];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[40]);
}
{
PFrElement aux_dest = &lvar[15];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[42]);
}
{
PFrElement aux_dest = &lvar[16];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[44]);
}
{
PFrElement aux_dest = &lvar[17];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[46]);
}
{
PFrElement aux_dest = &lvar[18];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[47]);
}
{
PFrElement aux_dest = &lvar[19];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[48]);
}
{
PFrElement aux_dest = &lvar[20];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[49]);
}
{
PFrElement aux_dest = &lvar[21];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[51]);
}
{
PFrElement aux_dest = &lvar[22];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[53]);
}
{
PFrElement aux_dest = &lvar[23];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[55]);
}
{
PFrElement aux_dest = &lvar[24];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[57]);
}
{
PFrElement aux_dest = &lvar[25];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[59]);
}
{
PFrElement aux_dest = &lvar[26];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[61]);
}
{
PFrElement aux_dest = &lvar[27];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[63]);
}
{
PFrElement aux_dest = &lvar[28];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[65]);
}
{
PFrElement aux_dest = &lvar[29];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[67]);
}
{
PFrElement aux_dest = &lvar[30];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[69]);
}
{
PFrElement aux_dest = &lvar[31];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[71]);
}
{
PFrElement aux_dest = &lvar[32];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[73]);
}
{
PFrElement aux_dest = &lvar[33];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[74]);
}
{
PFrElement aux_dest = &lvar[34];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[76]);
}
{
PFrElement aux_dest = &lvar[35];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[77]);
}
{
PFrElement aux_dest = &lvar[36];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[79]);
}
{
PFrElement aux_dest = &lvar[37];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[81]);
}
{
PFrElement aux_dest = &lvar[38];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[83]);
}
{
PFrElement aux_dest = &lvar[39];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[85]);
}
{
PFrElement aux_dest = &lvar[40];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[87]);
}
{
PFrElement aux_dest = &lvar[41];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[89]);
}
{
PFrElement aux_dest = &lvar[42];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[91]);
}
{
PFrElement aux_dest = &lvar[43];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[93]);
}
{
PFrElement aux_dest = &lvar[44];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[95]);
}
{
PFrElement aux_dest = &lvar[45];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[97]);
}
{
PFrElement aux_dest = &lvar[46];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[99]);
}
{
PFrElement aux_dest = &lvar[47];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[101]);
}
{
PFrElement aux_dest = &lvar[48];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[103]);
}
{
PFrElement aux_dest = &lvar[49];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[105]);
}
{
PFrElement aux_dest = &lvar[50];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[107]);
}
{
PFrElement aux_dest = &lvar[51];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[109]);
}
{
PFrElement aux_dest = &lvar[52];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[111]);
}
{
PFrElement aux_dest = &lvar[53];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[113]);
}
{
PFrElement aux_dest = &lvar[54];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[115]);
}
{
PFrElement aux_dest = &lvar[55];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[117]);
}
{
PFrElement aux_dest = &lvar[56];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[119]);
}
{
PFrElement aux_dest = &lvar[57];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[121]);
}
{
PFrElement aux_dest = &lvar[58];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[123]);
}
{
PFrElement aux_dest = &lvar[59];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[125]);
}
{
PFrElement aux_dest = &lvar[60];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[127]);
}
{
PFrElement aux_dest = &lvar[61];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[129]);
}
{
PFrElement aux_dest = &lvar[62];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[131]);
}
{
PFrElement aux_dest = &lvar[63];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[133]);
}
{
PFrElement aux_dest = &lvar[64];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[135]);
}
{
PFrElement aux_dest = &lvar[65];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[65],&circuitConstants[16]); // line circom 50
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[65])) + 0)];
// load src
Fr_shr(&expaux[1],&circuitConstants[55],&lvar[65]); // line circom 51
Fr_band(&expaux[0],&expaux[1],&circuitConstants[2]); // line circom 51
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[65];
// load src
Fr_add(&expaux[0],&lvar[65],&circuitConstants[2]); // line circom 50
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[65],&circuitConstants[16]); // line circom 50
}
}

void K_42_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 42;
ctx->componentMemory[coffset].templateName = "K";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 0;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[0];
K_42_run(coffset,ctx);
}

void K_42_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
bool* mySubcomponentsParallel = ctx->componentMemory[ctx_index].subcomponentsParallel;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[4];
FrElement lvar[66];
uint sub_component_aux;
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[56]);
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[22]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[23]);
}
{
PFrElement aux_dest = &lvar[3];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[24]);
}
{
PFrElement aux_dest = &lvar[4];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[25]);
}
{
PFrElement aux_dest = &lvar[5];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[26]);
}
{
PFrElement aux_dest = &lvar[6];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[27]);
}
{
PFrElement aux_dest = &lvar[7];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[28]);
}
{
PFrElement aux_dest = &lvar[8];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[29]);
}
{
PFrElement aux_dest = &lvar[9];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[31]);
}
{
PFrElement aux_dest = &lvar[10];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[33]);
}
{
PFrElement aux_dest = &lvar[11];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[34]);
}
{
PFrElement aux_dest = &lvar[12];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[36]);
}
{
PFrElement aux_dest = &lvar[13];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[38]);
}
{
PFrElement aux_dest = &lvar[14];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[40]);
}
{
PFrElement aux_dest = &lvar[15];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[42]);
}
{
PFrElement aux_dest = &lvar[16];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[44]);
}
{
PFrElement aux_dest = &lvar[17];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[46]);
}
{
PFrElement aux_dest = &lvar[18];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[47]);
}
{
PFrElement aux_dest = &lvar[19];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[48]);
}
{
PFrElement aux_dest = &lvar[20];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[49]);
}
{
PFrElement aux_dest = &lvar[21];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[51]);
}
{
PFrElement aux_dest = &lvar[22];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[53]);
}
{
PFrElement aux_dest = &lvar[23];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[55]);
}
{
PFrElement aux_dest = &lvar[24];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[57]);
}
{
PFrElement aux_dest = &lvar[25];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[59]);
}
{
PFrElement aux_dest = &lvar[26];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[61]);
}
{
PFrElement aux_dest = &lvar[27];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[63]);
}
{
PFrElement aux_dest = &lvar[28];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[65]);
}
{
PFrElement aux_dest = &lvar[29];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[67]);
}
{
PFrElement aux_dest = &lvar[30];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[69]);
}
{
PFrElement aux_dest = &lvar[31];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[71]);
}
{
PFrElement aux_dest = &lvar[32];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[73]);
}
{
PFrElement aux_dest = &lvar[33];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[74]);
}
{
PFrElement aux_dest = &lvar[34];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[76]);
}
{
PFrElement aux_dest = &lvar[35];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[77]);
}
{
PFrElement aux_dest = &lvar[36];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[79]);
}
{
PFrElement aux_dest = &lvar[37];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[81]);
}
{
PFrElement aux_dest = &lvar[38];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[83]);
}
{
PFrElement aux_dest = &lvar[39];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[85]);
}
{
PFrElement aux_dest = &lvar[40];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[87]);
}
{
PFrElement aux_dest = &lvar[41];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[89]);
}
{
PFrElement aux_dest = &lvar[42];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[91]);
}
{
PFrElement aux_dest = &lvar[43];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[93]);
}
{
PFrElement aux_dest = &lvar[44];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[95]);
}
{
PFrElement aux_dest = &lvar[45];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[97]);
}
{
PFrElement aux_dest = &lvar[46];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[99]);
}
{
PFrElement aux_dest = &lvar[47];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[101]);
}
{
PFrElement aux_dest = &lvar[48];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[103]);
}
{
PFrElement aux_dest = &lvar[49];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[105]);
}
{
PFrElement aux_dest = &lvar[50];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[107]);
}
{
PFrElement aux_dest = &lvar[51];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[109]);
}
{
PFrElement aux_dest = &lvar[52];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[111]);
}
{
PFrElement aux_dest = &lvar[53];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[113]);
}
{
PFrElement aux_dest = &lvar[54];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[115]);
}
{
PFrElement aux_dest = &lvar[55];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[117]);
}
{
PFrElement aux_dest = &lvar[56];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[119]);
}
{
PFrElement aux_dest = &lvar[57];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[121]);
}
{
PFrElement aux_dest = &lvar[58];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[123]);
}
{
PFrElement aux_dest = &lvar[59];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[125]);
}
{
PFrElement aux_dest = &lvar[60];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[127]);
}
{
PFrElement aux_dest = &lvar[61];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[129]);
}
{
PFrElement aux_dest = &lvar[62];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[131]);
}
{
PFrElement aux_dest = &lvar[63];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[133]);
}
{
PFrElement aux_dest = &lvar[64];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[135]);
}
{
PFrElement aux_dest = &lvar[65];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[65],&circuitConstants[16]); // line circom 50
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[65])) + 0)];
// load src
Fr_shr(&expaux[1],&circuitConstants[57],&lvar[65]); // line circom 51
Fr_band(&expaux[0],&expaux[1],&circuitConstants[2]); // line circom 51
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[65];
// load src
Fr_add(&expaux[0],&lvar[65],&circuitConstants[2]); // line circom 50
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[65],&circuitConstants[16]); // line circom 50
}
}

void K_43_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 43;
ctx->componentMemory[coffset].templateName = "K";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 0;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[0];
K_43_run(coffset,ctx);
}

void K_43_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
bool* mySubcomponentsParallel = ctx->componentMemory[ctx_index].subcomponentsParallel;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[4];
FrElement lvar[66];
uint sub_component_aux;
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[58]);
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[22]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[23]);
}
{
PFrElement aux_dest = &lvar[3];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[24]);
}
{
PFrElement aux_dest = &lvar[4];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[25]);
}
{
PFrElement aux_dest = &lvar[5];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[26]);
}
{
PFrElement aux_dest = &lvar[6];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[27]);
}
{
PFrElement aux_dest = &lvar[7];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[28]);
}
{
PFrElement aux_dest = &lvar[8];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[29]);
}
{
PFrElement aux_dest = &lvar[9];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[31]);
}
{
PFrElement aux_dest = &lvar[10];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[33]);
}
{
PFrElement aux_dest = &lvar[11];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[34]);
}
{
PFrElement aux_dest = &lvar[12];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[36]);
}
{
PFrElement aux_dest = &lvar[13];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[38]);
}
{
PFrElement aux_dest = &lvar[14];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[40]);
}
{
PFrElement aux_dest = &lvar[15];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[42]);
}
{
PFrElement aux_dest = &lvar[16];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[44]);
}
{
PFrElement aux_dest = &lvar[17];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[46]);
}
{
PFrElement aux_dest = &lvar[18];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[47]);
}
{
PFrElement aux_dest = &lvar[19];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[48]);
}
{
PFrElement aux_dest = &lvar[20];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[49]);
}
{
PFrElement aux_dest = &lvar[21];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[51]);
}
{
PFrElement aux_dest = &lvar[22];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[53]);
}
{
PFrElement aux_dest = &lvar[23];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[55]);
}
{
PFrElement aux_dest = &lvar[24];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[57]);
}
{
PFrElement aux_dest = &lvar[25];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[59]);
}
{
PFrElement aux_dest = &lvar[26];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[61]);
}
{
PFrElement aux_dest = &lvar[27];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[63]);
}
{
PFrElement aux_dest = &lvar[28];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[65]);
}
{
PFrElement aux_dest = &lvar[29];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[67]);
}
{
PFrElement aux_dest = &lvar[30];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[69]);
}
{
PFrElement aux_dest = &lvar[31];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[71]);
}
{
PFrElement aux_dest = &lvar[32];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[73]);
}
{
PFrElement aux_dest = &lvar[33];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[74]);
}
{
PFrElement aux_dest = &lvar[34];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[76]);
}
{
PFrElement aux_dest = &lvar[35];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[77]);
}
{
PFrElement aux_dest = &lvar[36];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[79]);
}
{
PFrElement aux_dest = &lvar[37];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[81]);
}
{
PFrElement aux_dest = &lvar[38];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[83]);
}
{
PFrElement aux_dest = &lvar[39];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[85]);
}
{
PFrElement aux_dest = &lvar[40];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[87]);
}
{
PFrElement aux_dest = &lvar[41];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[89]);
}
{
PFrElement aux_dest = &lvar[42];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[91]);
}
{
PFrElement aux_dest = &lvar[43];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[93]);
}
{
PFrElement aux_dest = &lvar[44];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[95]);
}
{
PFrElement aux_dest = &lvar[45];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[97]);
}
{
PFrElement aux_dest = &lvar[46];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[99]);
}
{
PFrElement aux_dest = &lvar[47];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[101]);
}
{
PFrElement aux_dest = &lvar[48];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[103]);
}
{
PFrElement aux_dest = &lvar[49];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[105]);
}
{
PFrElement aux_dest = &lvar[50];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[107]);
}
{
PFrElement aux_dest = &lvar[51];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[109]);
}
{
PFrElement aux_dest = &lvar[52];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[111]);
}
{
PFrElement aux_dest = &lvar[53];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[113]);
}
{
PFrElement aux_dest = &lvar[54];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[115]);
}
{
PFrElement aux_dest = &lvar[55];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[117]);
}
{
PFrElement aux_dest = &lvar[56];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[119]);
}
{
PFrElement aux_dest = &lvar[57];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[121]);
}
{
PFrElement aux_dest = &lvar[58];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[123]);
}
{
PFrElement aux_dest = &lvar[59];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[125]);
}
{
PFrElement aux_dest = &lvar[60];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[127]);
}
{
PFrElement aux_dest = &lvar[61];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[129]);
}
{
PFrElement aux_dest = &lvar[62];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[131]);
}
{
PFrElement aux_dest = &lvar[63];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[133]);
}
{
PFrElement aux_dest = &lvar[64];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[135]);
}
{
PFrElement aux_dest = &lvar[65];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[65],&circuitConstants[16]); // line circom 50
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[65])) + 0)];
// load src
Fr_shr(&expaux[1],&circuitConstants[59],&lvar[65]); // line circom 51
Fr_band(&expaux[0],&expaux[1],&circuitConstants[2]); // line circom 51
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[65];
// load src
Fr_add(&expaux[0],&lvar[65],&circuitConstants[2]); // line circom 50
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[65],&circuitConstants[16]); // line circom 50
}
}

void K_44_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 44;
ctx->componentMemory[coffset].templateName = "K";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 0;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[0];
K_44_run(coffset,ctx);
}

void K_44_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
bool* mySubcomponentsParallel = ctx->componentMemory[ctx_index].subcomponentsParallel;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[4];
FrElement lvar[66];
uint sub_component_aux;
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[60]);
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[22]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[23]);
}
{
PFrElement aux_dest = &lvar[3];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[24]);
}
{
PFrElement aux_dest = &lvar[4];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[25]);
}
{
PFrElement aux_dest = &lvar[5];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[26]);
}
{
PFrElement aux_dest = &lvar[6];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[27]);
}
{
PFrElement aux_dest = &lvar[7];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[28]);
}
{
PFrElement aux_dest = &lvar[8];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[29]);
}
{
PFrElement aux_dest = &lvar[9];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[31]);
}
{
PFrElement aux_dest = &lvar[10];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[33]);
}
{
PFrElement aux_dest = &lvar[11];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[34]);
}
{
PFrElement aux_dest = &lvar[12];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[36]);
}
{
PFrElement aux_dest = &lvar[13];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[38]);
}
{
PFrElement aux_dest = &lvar[14];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[40]);
}
{
PFrElement aux_dest = &lvar[15];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[42]);
}
{
PFrElement aux_dest = &lvar[16];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[44]);
}
{
PFrElement aux_dest = &lvar[17];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[46]);
}
{
PFrElement aux_dest = &lvar[18];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[47]);
}
{
PFrElement aux_dest = &lvar[19];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[48]);
}
{
PFrElement aux_dest = &lvar[20];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[49]);
}
{
PFrElement aux_dest = &lvar[21];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[51]);
}
{
PFrElement aux_dest = &lvar[22];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[53]);
}
{
PFrElement aux_dest = &lvar[23];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[55]);
}
{
PFrElement aux_dest = &lvar[24];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[57]);
}
{
PFrElement aux_dest = &lvar[25];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[59]);
}
{
PFrElement aux_dest = &lvar[26];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[61]);
}
{
PFrElement aux_dest = &lvar[27];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[63]);
}
{
PFrElement aux_dest = &lvar[28];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[65]);
}
{
PFrElement aux_dest = &lvar[29];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[67]);
}
{
PFrElement aux_dest = &lvar[30];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[69]);
}
{
PFrElement aux_dest = &lvar[31];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[71]);
}
{
PFrElement aux_dest = &lvar[32];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[73]);
}
{
PFrElement aux_dest = &lvar[33];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[74]);
}
{
PFrElement aux_dest = &lvar[34];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[76]);
}
{
PFrElement aux_dest = &lvar[35];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[77]);
}
{
PFrElement aux_dest = &lvar[36];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[79]);
}
{
PFrElement aux_dest = &lvar[37];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[81]);
}
{
PFrElement aux_dest = &lvar[38];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[83]);
}
{
PFrElement aux_dest = &lvar[39];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[85]);
}
{
PFrElement aux_dest = &lvar[40];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[87]);
}
{
PFrElement aux_dest = &lvar[41];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[89]);
}
{
PFrElement aux_dest = &lvar[42];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[91]);
}
{
PFrElement aux_dest = &lvar[43];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[93]);
}
{
PFrElement aux_dest = &lvar[44];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[95]);
}
{
PFrElement aux_dest = &lvar[45];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[97]);
}
{
PFrElement aux_dest = &lvar[46];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[99]);
}
{
PFrElement aux_dest = &lvar[47];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[101]);
}
{
PFrElement aux_dest = &lvar[48];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[103]);
}
{
PFrElement aux_dest = &lvar[49];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[105]);
}
{
PFrElement aux_dest = &lvar[50];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[107]);
}
{
PFrElement aux_dest = &lvar[51];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[109]);
}
{
PFrElement aux_dest = &lvar[52];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[111]);
}
{
PFrElement aux_dest = &lvar[53];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[113]);
}
{
PFrElement aux_dest = &lvar[54];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[115]);
}
{
PFrElement aux_dest = &lvar[55];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[117]);
}
{
PFrElement aux_dest = &lvar[56];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[119]);
}
{
PFrElement aux_dest = &lvar[57];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[121]);
}
{
PFrElement aux_dest = &lvar[58];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[123]);
}
{
PFrElement aux_dest = &lvar[59];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[125]);
}
{
PFrElement aux_dest = &lvar[60];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[127]);
}
{
PFrElement aux_dest = &lvar[61];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[129]);
}
{
PFrElement aux_dest = &lvar[62];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[131]);
}
{
PFrElement aux_dest = &lvar[63];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[133]);
}
{
PFrElement aux_dest = &lvar[64];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[135]);
}
{
PFrElement aux_dest = &lvar[65];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[65],&circuitConstants[16]); // line circom 50
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[65])) + 0)];
// load src
Fr_shr(&expaux[1],&circuitConstants[61],&lvar[65]); // line circom 51
Fr_band(&expaux[0],&expaux[1],&circuitConstants[2]); // line circom 51
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[65];
// load src
Fr_add(&expaux[0],&lvar[65],&circuitConstants[2]); // line circom 50
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[65],&circuitConstants[16]); // line circom 50
}
}

void K_45_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 45;
ctx->componentMemory[coffset].templateName = "K";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 0;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[0];
K_45_run(coffset,ctx);
}

void K_45_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
bool* mySubcomponentsParallel = ctx->componentMemory[ctx_index].subcomponentsParallel;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[4];
FrElement lvar[66];
uint sub_component_aux;
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[62]);
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[22]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[23]);
}
{
PFrElement aux_dest = &lvar[3];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[24]);
}
{
PFrElement aux_dest = &lvar[4];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[25]);
}
{
PFrElement aux_dest = &lvar[5];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[26]);
}
{
PFrElement aux_dest = &lvar[6];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[27]);
}
{
PFrElement aux_dest = &lvar[7];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[28]);
}
{
PFrElement aux_dest = &lvar[8];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[29]);
}
{
PFrElement aux_dest = &lvar[9];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[31]);
}
{
PFrElement aux_dest = &lvar[10];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[33]);
}
{
PFrElement aux_dest = &lvar[11];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[34]);
}
{
PFrElement aux_dest = &lvar[12];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[36]);
}
{
PFrElement aux_dest = &lvar[13];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[38]);
}
{
PFrElement aux_dest = &lvar[14];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[40]);
}
{
PFrElement aux_dest = &lvar[15];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[42]);
}
{
PFrElement aux_dest = &lvar[16];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[44]);
}
{
PFrElement aux_dest = &lvar[17];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[46]);
}
{
PFrElement aux_dest = &lvar[18];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[47]);
}
{
PFrElement aux_dest = &lvar[19];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[48]);
}
{
PFrElement aux_dest = &lvar[20];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[49]);
}
{
PFrElement aux_dest = &lvar[21];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[51]);
}
{
PFrElement aux_dest = &lvar[22];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[53]);
}
{
PFrElement aux_dest = &lvar[23];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[55]);
}
{
PFrElement aux_dest = &lvar[24];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[57]);
}
{
PFrElement aux_dest = &lvar[25];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[59]);
}
{
PFrElement aux_dest = &lvar[26];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[61]);
}
{
PFrElement aux_dest = &lvar[27];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[63]);
}
{
PFrElement aux_dest = &lvar[28];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[65]);
}
{
PFrElement aux_dest = &lvar[29];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[67]);
}
{
PFrElement aux_dest = &lvar[30];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[69]);
}
{
PFrElement aux_dest = &lvar[31];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[71]);
}
{
PFrElement aux_dest = &lvar[32];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[73]);
}
{
PFrElement aux_dest = &lvar[33];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[74]);
}
{
PFrElement aux_dest = &lvar[34];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[76]);
}
{
PFrElement aux_dest = &lvar[35];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[77]);
}
{
PFrElement aux_dest = &lvar[36];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[79]);
}
{
PFrElement aux_dest = &lvar[37];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[81]);
}
{
PFrElement aux_dest = &lvar[38];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[83]);
}
{
PFrElement aux_dest = &lvar[39];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[85]);
}
{
PFrElement aux_dest = &lvar[40];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[87]);
}
{
PFrElement aux_dest = &lvar[41];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[89]);
}
{
PFrElement aux_dest = &lvar[42];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[91]);
}
{
PFrElement aux_dest = &lvar[43];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[93]);
}
{
PFrElement aux_dest = &lvar[44];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[95]);
}
{
PFrElement aux_dest = &lvar[45];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[97]);
}
{
PFrElement aux_dest = &lvar[46];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[99]);
}
{
PFrElement aux_dest = &lvar[47];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[101]);
}
{
PFrElement aux_dest = &lvar[48];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[103]);
}
{
PFrElement aux_dest = &lvar[49];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[105]);
}
{
PFrElement aux_dest = &lvar[50];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[107]);
}
{
PFrElement aux_dest = &lvar[51];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[109]);
}
{
PFrElement aux_dest = &lvar[52];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[111]);
}
{
PFrElement aux_dest = &lvar[53];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[113]);
}
{
PFrElement aux_dest = &lvar[54];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[115]);
}
{
PFrElement aux_dest = &lvar[55];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[117]);
}
{
PFrElement aux_dest = &lvar[56];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[119]);
}
{
PFrElement aux_dest = &lvar[57];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[121]);
}
{
PFrElement aux_dest = &lvar[58];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[123]);
}
{
PFrElement aux_dest = &lvar[59];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[125]);
}
{
PFrElement aux_dest = &lvar[60];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[127]);
}
{
PFrElement aux_dest = &lvar[61];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[129]);
}
{
PFrElement aux_dest = &lvar[62];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[131]);
}
{
PFrElement aux_dest = &lvar[63];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[133]);
}
{
PFrElement aux_dest = &lvar[64];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[135]);
}
{
PFrElement aux_dest = &lvar[65];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[65],&circuitConstants[16]); // line circom 50
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[65])) + 0)];
// load src
Fr_shr(&expaux[1],&circuitConstants[63],&lvar[65]); // line circom 51
Fr_band(&expaux[0],&expaux[1],&circuitConstants[2]); // line circom 51
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[65];
// load src
Fr_add(&expaux[0],&lvar[65],&circuitConstants[2]); // line circom 50
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[65],&circuitConstants[16]); // line circom 50
}
}

void K_46_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 46;
ctx->componentMemory[coffset].templateName = "K";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 0;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[0];
K_46_run(coffset,ctx);
}

void K_46_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
bool* mySubcomponentsParallel = ctx->componentMemory[ctx_index].subcomponentsParallel;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[4];
FrElement lvar[66];
uint sub_component_aux;
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[64]);
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[22]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[23]);
}
{
PFrElement aux_dest = &lvar[3];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[24]);
}
{
PFrElement aux_dest = &lvar[4];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[25]);
}
{
PFrElement aux_dest = &lvar[5];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[26]);
}
{
PFrElement aux_dest = &lvar[6];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[27]);
}
{
PFrElement aux_dest = &lvar[7];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[28]);
}
{
PFrElement aux_dest = &lvar[8];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[29]);
}
{
PFrElement aux_dest = &lvar[9];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[31]);
}
{
PFrElement aux_dest = &lvar[10];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[33]);
}
{
PFrElement aux_dest = &lvar[11];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[34]);
}
{
PFrElement aux_dest = &lvar[12];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[36]);
}
{
PFrElement aux_dest = &lvar[13];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[38]);
}
{
PFrElement aux_dest = &lvar[14];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[40]);
}
{
PFrElement aux_dest = &lvar[15];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[42]);
}
{
PFrElement aux_dest = &lvar[16];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[44]);
}
{
PFrElement aux_dest = &lvar[17];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[46]);
}
{
PFrElement aux_dest = &lvar[18];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[47]);
}
{
PFrElement aux_dest = &lvar[19];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[48]);
}
{
PFrElement aux_dest = &lvar[20];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[49]);
}
{
PFrElement aux_dest = &lvar[21];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[51]);
}
{
PFrElement aux_dest = &lvar[22];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[53]);
}
{
PFrElement aux_dest = &lvar[23];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[55]);
}
{
PFrElement aux_dest = &lvar[24];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[57]);
}
{
PFrElement aux_dest = &lvar[25];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[59]);
}
{
PFrElement aux_dest = &lvar[26];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[61]);
}
{
PFrElement aux_dest = &lvar[27];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[63]);
}
{
PFrElement aux_dest = &lvar[28];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[65]);
}
{
PFrElement aux_dest = &lvar[29];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[67]);
}
{
PFrElement aux_dest = &lvar[30];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[69]);
}
{
PFrElement aux_dest = &lvar[31];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[71]);
}
{
PFrElement aux_dest = &lvar[32];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[73]);
}
{
PFrElement aux_dest = &lvar[33];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[74]);
}
{
PFrElement aux_dest = &lvar[34];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[76]);
}
{
PFrElement aux_dest = &lvar[35];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[77]);
}
{
PFrElement aux_dest = &lvar[36];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[79]);
}
{
PFrElement aux_dest = &lvar[37];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[81]);
}
{
PFrElement aux_dest = &lvar[38];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[83]);
}
{
PFrElement aux_dest = &lvar[39];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[85]);
}
{
PFrElement aux_dest = &lvar[40];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[87]);
}
{
PFrElement aux_dest = &lvar[41];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[89]);
}
{
PFrElement aux_dest = &lvar[42];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[91]);
}
{
PFrElement aux_dest = &lvar[43];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[93]);
}
{
PFrElement aux_dest = &lvar[44];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[95]);
}
{
PFrElement aux_dest = &lvar[45];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[97]);
}
{
PFrElement aux_dest = &lvar[46];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[99]);
}
{
PFrElement aux_dest = &lvar[47];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[101]);
}
{
PFrElement aux_dest = &lvar[48];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[103]);
}
{
PFrElement aux_dest = &lvar[49];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[105]);
}
{
PFrElement aux_dest = &lvar[50];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[107]);
}
{
PFrElement aux_dest = &lvar[51];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[109]);
}
{
PFrElement aux_dest = &lvar[52];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[111]);
}
{
PFrElement aux_dest = &lvar[53];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[113]);
}
{
PFrElement aux_dest = &lvar[54];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[115]);
}
{
PFrElement aux_dest = &lvar[55];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[117]);
}
{
PFrElement aux_dest = &lvar[56];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[119]);
}
{
PFrElement aux_dest = &lvar[57];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[121]);
}
{
PFrElement aux_dest = &lvar[58];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[123]);
}
{
PFrElement aux_dest = &lvar[59];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[125]);
}
{
PFrElement aux_dest = &lvar[60];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[127]);
}
{
PFrElement aux_dest = &lvar[61];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[129]);
}
{
PFrElement aux_dest = &lvar[62];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[131]);
}
{
PFrElement aux_dest = &lvar[63];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[133]);
}
{
PFrElement aux_dest = &lvar[64];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[135]);
}
{
PFrElement aux_dest = &lvar[65];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[65],&circuitConstants[16]); // line circom 50
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[65])) + 0)];
// load src
Fr_shr(&expaux[1],&circuitConstants[65],&lvar[65]); // line circom 51
Fr_band(&expaux[0],&expaux[1],&circuitConstants[2]); // line circom 51
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[65];
// load src
Fr_add(&expaux[0],&lvar[65],&circuitConstants[2]); // line circom 50
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[65],&circuitConstants[16]); // line circom 50
}
}

void K_47_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 47;
ctx->componentMemory[coffset].templateName = "K";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 0;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[0];
K_47_run(coffset,ctx);
}

void K_47_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
bool* mySubcomponentsParallel = ctx->componentMemory[ctx_index].subcomponentsParallel;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[4];
FrElement lvar[66];
uint sub_component_aux;
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[66]);
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[22]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[23]);
}
{
PFrElement aux_dest = &lvar[3];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[24]);
}
{
PFrElement aux_dest = &lvar[4];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[25]);
}
{
PFrElement aux_dest = &lvar[5];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[26]);
}
{
PFrElement aux_dest = &lvar[6];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[27]);
}
{
PFrElement aux_dest = &lvar[7];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[28]);
}
{
PFrElement aux_dest = &lvar[8];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[29]);
}
{
PFrElement aux_dest = &lvar[9];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[31]);
}
{
PFrElement aux_dest = &lvar[10];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[33]);
}
{
PFrElement aux_dest = &lvar[11];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[34]);
}
{
PFrElement aux_dest = &lvar[12];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[36]);
}
{
PFrElement aux_dest = &lvar[13];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[38]);
}
{
PFrElement aux_dest = &lvar[14];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[40]);
}
{
PFrElement aux_dest = &lvar[15];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[42]);
}
{
PFrElement aux_dest = &lvar[16];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[44]);
}
{
PFrElement aux_dest = &lvar[17];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[46]);
}
{
PFrElement aux_dest = &lvar[18];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[47]);
}
{
PFrElement aux_dest = &lvar[19];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[48]);
}
{
PFrElement aux_dest = &lvar[20];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[49]);
}
{
PFrElement aux_dest = &lvar[21];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[51]);
}
{
PFrElement aux_dest = &lvar[22];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[53]);
}
{
PFrElement aux_dest = &lvar[23];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[55]);
}
{
PFrElement aux_dest = &lvar[24];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[57]);
}
{
PFrElement aux_dest = &lvar[25];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[59]);
}
{
PFrElement aux_dest = &lvar[26];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[61]);
}
{
PFrElement aux_dest = &lvar[27];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[63]);
}
{
PFrElement aux_dest = &lvar[28];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[65]);
}
{
PFrElement aux_dest = &lvar[29];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[67]);
}
{
PFrElement aux_dest = &lvar[30];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[69]);
}
{
PFrElement aux_dest = &lvar[31];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[71]);
}
{
PFrElement aux_dest = &lvar[32];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[73]);
}
{
PFrElement aux_dest = &lvar[33];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[74]);
}
{
PFrElement aux_dest = &lvar[34];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[76]);
}
{
PFrElement aux_dest = &lvar[35];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[77]);
}
{
PFrElement aux_dest = &lvar[36];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[79]);
}
{
PFrElement aux_dest = &lvar[37];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[81]);
}
{
PFrElement aux_dest = &lvar[38];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[83]);
}
{
PFrElement aux_dest = &lvar[39];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[85]);
}
{
PFrElement aux_dest = &lvar[40];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[87]);
}
{
PFrElement aux_dest = &lvar[41];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[89]);
}
{
PFrElement aux_dest = &lvar[42];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[91]);
}
{
PFrElement aux_dest = &lvar[43];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[93]);
}
{
PFrElement aux_dest = &lvar[44];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[95]);
}
{
PFrElement aux_dest = &lvar[45];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[97]);
}
{
PFrElement aux_dest = &lvar[46];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[99]);
}
{
PFrElement aux_dest = &lvar[47];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[101]);
}
{
PFrElement aux_dest = &lvar[48];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[103]);
}
{
PFrElement aux_dest = &lvar[49];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[105]);
}
{
PFrElement aux_dest = &lvar[50];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[107]);
}
{
PFrElement aux_dest = &lvar[51];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[109]);
}
{
PFrElement aux_dest = &lvar[52];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[111]);
}
{
PFrElement aux_dest = &lvar[53];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[113]);
}
{
PFrElement aux_dest = &lvar[54];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[115]);
}
{
PFrElement aux_dest = &lvar[55];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[117]);
}
{
PFrElement aux_dest = &lvar[56];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[119]);
}
{
PFrElement aux_dest = &lvar[57];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[121]);
}
{
PFrElement aux_dest = &lvar[58];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[123]);
}
{
PFrElement aux_dest = &lvar[59];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[125]);
}
{
PFrElement aux_dest = &lvar[60];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[127]);
}
{
PFrElement aux_dest = &lvar[61];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[129]);
}
{
PFrElement aux_dest = &lvar[62];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[131]);
}
{
PFrElement aux_dest = &lvar[63];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[133]);
}
{
PFrElement aux_dest = &lvar[64];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[135]);
}
{
PFrElement aux_dest = &lvar[65];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[65],&circuitConstants[16]); // line circom 50
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[65])) + 0)];
// load src
Fr_shr(&expaux[1],&circuitConstants[67],&lvar[65]); // line circom 51
Fr_band(&expaux[0],&expaux[1],&circuitConstants[2]); // line circom 51
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[65];
// load src
Fr_add(&expaux[0],&lvar[65],&circuitConstants[2]); // line circom 50
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[65],&circuitConstants[16]); // line circom 50
}
}

void K_48_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 48;
ctx->componentMemory[coffset].templateName = "K";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 0;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[0];
K_48_run(coffset,ctx);
}

void K_48_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
bool* mySubcomponentsParallel = ctx->componentMemory[ctx_index].subcomponentsParallel;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[4];
FrElement lvar[66];
uint sub_component_aux;
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[68]);
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[22]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[23]);
}
{
PFrElement aux_dest = &lvar[3];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[24]);
}
{
PFrElement aux_dest = &lvar[4];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[25]);
}
{
PFrElement aux_dest = &lvar[5];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[26]);
}
{
PFrElement aux_dest = &lvar[6];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[27]);
}
{
PFrElement aux_dest = &lvar[7];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[28]);
}
{
PFrElement aux_dest = &lvar[8];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[29]);
}
{
PFrElement aux_dest = &lvar[9];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[31]);
}
{
PFrElement aux_dest = &lvar[10];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[33]);
}
{
PFrElement aux_dest = &lvar[11];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[34]);
}
{
PFrElement aux_dest = &lvar[12];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[36]);
}
{
PFrElement aux_dest = &lvar[13];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[38]);
}
{
PFrElement aux_dest = &lvar[14];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[40]);
}
{
PFrElement aux_dest = &lvar[15];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[42]);
}
{
PFrElement aux_dest = &lvar[16];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[44]);
}
{
PFrElement aux_dest = &lvar[17];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[46]);
}
{
PFrElement aux_dest = &lvar[18];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[47]);
}
{
PFrElement aux_dest = &lvar[19];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[48]);
}
{
PFrElement aux_dest = &lvar[20];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[49]);
}
{
PFrElement aux_dest = &lvar[21];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[51]);
}
{
PFrElement aux_dest = &lvar[22];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[53]);
}
{
PFrElement aux_dest = &lvar[23];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[55]);
}
{
PFrElement aux_dest = &lvar[24];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[57]);
}
{
PFrElement aux_dest = &lvar[25];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[59]);
}
{
PFrElement aux_dest = &lvar[26];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[61]);
}
{
PFrElement aux_dest = &lvar[27];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[63]);
}
{
PFrElement aux_dest = &lvar[28];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[65]);
}
{
PFrElement aux_dest = &lvar[29];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[67]);
}
{
PFrElement aux_dest = &lvar[30];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[69]);
}
{
PFrElement aux_dest = &lvar[31];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[71]);
}
{
PFrElement aux_dest = &lvar[32];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[73]);
}
{
PFrElement aux_dest = &lvar[33];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[74]);
}
{
PFrElement aux_dest = &lvar[34];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[76]);
}
{
PFrElement aux_dest = &lvar[35];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[77]);
}
{
PFrElement aux_dest = &lvar[36];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[79]);
}
{
PFrElement aux_dest = &lvar[37];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[81]);
}
{
PFrElement aux_dest = &lvar[38];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[83]);
}
{
PFrElement aux_dest = &lvar[39];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[85]);
}
{
PFrElement aux_dest = &lvar[40];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[87]);
}
{
PFrElement aux_dest = &lvar[41];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[89]);
}
{
PFrElement aux_dest = &lvar[42];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[91]);
}
{
PFrElement aux_dest = &lvar[43];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[93]);
}
{
PFrElement aux_dest = &lvar[44];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[95]);
}
{
PFrElement aux_dest = &lvar[45];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[97]);
}
{
PFrElement aux_dest = &lvar[46];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[99]);
}
{
PFrElement aux_dest = &lvar[47];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[101]);
}
{
PFrElement aux_dest = &lvar[48];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[103]);
}
{
PFrElement aux_dest = &lvar[49];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[105]);
}
{
PFrElement aux_dest = &lvar[50];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[107]);
}
{
PFrElement aux_dest = &lvar[51];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[109]);
}
{
PFrElement aux_dest = &lvar[52];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[111]);
}
{
PFrElement aux_dest = &lvar[53];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[113]);
}
{
PFrElement aux_dest = &lvar[54];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[115]);
}
{
PFrElement aux_dest = &lvar[55];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[117]);
}
{
PFrElement aux_dest = &lvar[56];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[119]);
}
{
PFrElement aux_dest = &lvar[57];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[121]);
}
{
PFrElement aux_dest = &lvar[58];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[123]);
}
{
PFrElement aux_dest = &lvar[59];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[125]);
}
{
PFrElement aux_dest = &lvar[60];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[127]);
}
{
PFrElement aux_dest = &lvar[61];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[129]);
}
{
PFrElement aux_dest = &lvar[62];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[131]);
}
{
PFrElement aux_dest = &lvar[63];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[133]);
}
{
PFrElement aux_dest = &lvar[64];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[135]);
}
{
PFrElement aux_dest = &lvar[65];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[65],&circuitConstants[16]); // line circom 50
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[65])) + 0)];
// load src
Fr_shr(&expaux[1],&circuitConstants[69],&lvar[65]); // line circom 51
Fr_band(&expaux[0],&expaux[1],&circuitConstants[2]); // line circom 51
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[65];
// load src
Fr_add(&expaux[0],&lvar[65],&circuitConstants[2]); // line circom 50
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[65],&circuitConstants[16]); // line circom 50
}
}

void K_49_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 49;
ctx->componentMemory[coffset].templateName = "K";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 0;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[0];
K_49_run(coffset,ctx);
}

void K_49_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
bool* mySubcomponentsParallel = ctx->componentMemory[ctx_index].subcomponentsParallel;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[4];
FrElement lvar[66];
uint sub_component_aux;
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[70]);
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[22]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[23]);
}
{
PFrElement aux_dest = &lvar[3];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[24]);
}
{
PFrElement aux_dest = &lvar[4];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[25]);
}
{
PFrElement aux_dest = &lvar[5];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[26]);
}
{
PFrElement aux_dest = &lvar[6];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[27]);
}
{
PFrElement aux_dest = &lvar[7];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[28]);
}
{
PFrElement aux_dest = &lvar[8];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[29]);
}
{
PFrElement aux_dest = &lvar[9];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[31]);
}
{
PFrElement aux_dest = &lvar[10];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[33]);
}
{
PFrElement aux_dest = &lvar[11];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[34]);
}
{
PFrElement aux_dest = &lvar[12];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[36]);
}
{
PFrElement aux_dest = &lvar[13];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[38]);
}
{
PFrElement aux_dest = &lvar[14];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[40]);
}
{
PFrElement aux_dest = &lvar[15];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[42]);
}
{
PFrElement aux_dest = &lvar[16];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[44]);
}
{
PFrElement aux_dest = &lvar[17];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[46]);
}
{
PFrElement aux_dest = &lvar[18];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[47]);
}
{
PFrElement aux_dest = &lvar[19];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[48]);
}
{
PFrElement aux_dest = &lvar[20];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[49]);
}
{
PFrElement aux_dest = &lvar[21];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[51]);
}
{
PFrElement aux_dest = &lvar[22];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[53]);
}
{
PFrElement aux_dest = &lvar[23];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[55]);
}
{
PFrElement aux_dest = &lvar[24];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[57]);
}
{
PFrElement aux_dest = &lvar[25];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[59]);
}
{
PFrElement aux_dest = &lvar[26];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[61]);
}
{
PFrElement aux_dest = &lvar[27];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[63]);
}
{
PFrElement aux_dest = &lvar[28];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[65]);
}
{
PFrElement aux_dest = &lvar[29];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[67]);
}
{
PFrElement aux_dest = &lvar[30];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[69]);
}
{
PFrElement aux_dest = &lvar[31];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[71]);
}
{
PFrElement aux_dest = &lvar[32];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[73]);
}
{
PFrElement aux_dest = &lvar[33];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[74]);
}
{
PFrElement aux_dest = &lvar[34];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[76]);
}
{
PFrElement aux_dest = &lvar[35];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[77]);
}
{
PFrElement aux_dest = &lvar[36];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[79]);
}
{
PFrElement aux_dest = &lvar[37];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[81]);
}
{
PFrElement aux_dest = &lvar[38];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[83]);
}
{
PFrElement aux_dest = &lvar[39];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[85]);
}
{
PFrElement aux_dest = &lvar[40];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[87]);
}
{
PFrElement aux_dest = &lvar[41];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[89]);
}
{
PFrElement aux_dest = &lvar[42];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[91]);
}
{
PFrElement aux_dest = &lvar[43];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[93]);
}
{
PFrElement aux_dest = &lvar[44];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[95]);
}
{
PFrElement aux_dest = &lvar[45];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[97]);
}
{
PFrElement aux_dest = &lvar[46];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[99]);
}
{
PFrElement aux_dest = &lvar[47];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[101]);
}
{
PFrElement aux_dest = &lvar[48];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[103]);
}
{
PFrElement aux_dest = &lvar[49];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[105]);
}
{
PFrElement aux_dest = &lvar[50];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[107]);
}
{
PFrElement aux_dest = &lvar[51];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[109]);
}
{
PFrElement aux_dest = &lvar[52];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[111]);
}
{
PFrElement aux_dest = &lvar[53];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[113]);
}
{
PFrElement aux_dest = &lvar[54];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[115]);
}
{
PFrElement aux_dest = &lvar[55];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[117]);
}
{
PFrElement aux_dest = &lvar[56];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[119]);
}
{
PFrElement aux_dest = &lvar[57];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[121]);
}
{
PFrElement aux_dest = &lvar[58];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[123]);
}
{
PFrElement aux_dest = &lvar[59];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[125]);
}
{
PFrElement aux_dest = &lvar[60];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[127]);
}
{
PFrElement aux_dest = &lvar[61];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[129]);
}
{
PFrElement aux_dest = &lvar[62];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[131]);
}
{
PFrElement aux_dest = &lvar[63];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[133]);
}
{
PFrElement aux_dest = &lvar[64];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[135]);
}
{
PFrElement aux_dest = &lvar[65];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[65],&circuitConstants[16]); // line circom 50
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[65])) + 0)];
// load src
Fr_shr(&expaux[1],&circuitConstants[71],&lvar[65]); // line circom 51
Fr_band(&expaux[0],&expaux[1],&circuitConstants[2]); // line circom 51
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[65];
// load src
Fr_add(&expaux[0],&lvar[65],&circuitConstants[2]); // line circom 50
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[65],&circuitConstants[16]); // line circom 50
}
}

void K_50_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 50;
ctx->componentMemory[coffset].templateName = "K";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 0;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[0];
K_50_run(coffset,ctx);
}

void K_50_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
bool* mySubcomponentsParallel = ctx->componentMemory[ctx_index].subcomponentsParallel;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[4];
FrElement lvar[66];
uint sub_component_aux;
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[72]);
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[22]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[23]);
}
{
PFrElement aux_dest = &lvar[3];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[24]);
}
{
PFrElement aux_dest = &lvar[4];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[25]);
}
{
PFrElement aux_dest = &lvar[5];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[26]);
}
{
PFrElement aux_dest = &lvar[6];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[27]);
}
{
PFrElement aux_dest = &lvar[7];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[28]);
}
{
PFrElement aux_dest = &lvar[8];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[29]);
}
{
PFrElement aux_dest = &lvar[9];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[31]);
}
{
PFrElement aux_dest = &lvar[10];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[33]);
}
{
PFrElement aux_dest = &lvar[11];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[34]);
}
{
PFrElement aux_dest = &lvar[12];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[36]);
}
{
PFrElement aux_dest = &lvar[13];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[38]);
}
{
PFrElement aux_dest = &lvar[14];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[40]);
}
{
PFrElement aux_dest = &lvar[15];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[42]);
}
{
PFrElement aux_dest = &lvar[16];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[44]);
}
{
PFrElement aux_dest = &lvar[17];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[46]);
}
{
PFrElement aux_dest = &lvar[18];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[47]);
}
{
PFrElement aux_dest = &lvar[19];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[48]);
}
{
PFrElement aux_dest = &lvar[20];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[49]);
}
{
PFrElement aux_dest = &lvar[21];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[51]);
}
{
PFrElement aux_dest = &lvar[22];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[53]);
}
{
PFrElement aux_dest = &lvar[23];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[55]);
}
{
PFrElement aux_dest = &lvar[24];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[57]);
}
{
PFrElement aux_dest = &lvar[25];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[59]);
}
{
PFrElement aux_dest = &lvar[26];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[61]);
}
{
PFrElement aux_dest = &lvar[27];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[63]);
}
{
PFrElement aux_dest = &lvar[28];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[65]);
}
{
PFrElement aux_dest = &lvar[29];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[67]);
}
{
PFrElement aux_dest = &lvar[30];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[69]);
}
{
PFrElement aux_dest = &lvar[31];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[71]);
}
{
PFrElement aux_dest = &lvar[32];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[73]);
}
{
PFrElement aux_dest = &lvar[33];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[74]);
}
{
PFrElement aux_dest = &lvar[34];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[76]);
}
{
PFrElement aux_dest = &lvar[35];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[77]);
}
{
PFrElement aux_dest = &lvar[36];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[79]);
}
{
PFrElement aux_dest = &lvar[37];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[81]);
}
{
PFrElement aux_dest = &lvar[38];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[83]);
}
{
PFrElement aux_dest = &lvar[39];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[85]);
}
{
PFrElement aux_dest = &lvar[40];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[87]);
}
{
PFrElement aux_dest = &lvar[41];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[89]);
}
{
PFrElement aux_dest = &lvar[42];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[91]);
}
{
PFrElement aux_dest = &lvar[43];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[93]);
}
{
PFrElement aux_dest = &lvar[44];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[95]);
}
{
PFrElement aux_dest = &lvar[45];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[97]);
}
{
PFrElement aux_dest = &lvar[46];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[99]);
}
{
PFrElement aux_dest = &lvar[47];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[101]);
}
{
PFrElement aux_dest = &lvar[48];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[103]);
}
{
PFrElement aux_dest = &lvar[49];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[105]);
}
{
PFrElement aux_dest = &lvar[50];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[107]);
}
{
PFrElement aux_dest = &lvar[51];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[109]);
}
{
PFrElement aux_dest = &lvar[52];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[111]);
}
{
PFrElement aux_dest = &lvar[53];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[113]);
}
{
PFrElement aux_dest = &lvar[54];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[115]);
}
{
PFrElement aux_dest = &lvar[55];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[117]);
}
{
PFrElement aux_dest = &lvar[56];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[119]);
}
{
PFrElement aux_dest = &lvar[57];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[121]);
}
{
PFrElement aux_dest = &lvar[58];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[123]);
}
{
PFrElement aux_dest = &lvar[59];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[125]);
}
{
PFrElement aux_dest = &lvar[60];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[127]);
}
{
PFrElement aux_dest = &lvar[61];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[129]);
}
{
PFrElement aux_dest = &lvar[62];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[131]);
}
{
PFrElement aux_dest = &lvar[63];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[133]);
}
{
PFrElement aux_dest = &lvar[64];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[135]);
}
{
PFrElement aux_dest = &lvar[65];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[65],&circuitConstants[16]); // line circom 50
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[65])) + 0)];
// load src
Fr_shr(&expaux[1],&circuitConstants[73],&lvar[65]); // line circom 51
Fr_band(&expaux[0],&expaux[1],&circuitConstants[2]); // line circom 51
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[65];
// load src
Fr_add(&expaux[0],&lvar[65],&circuitConstants[2]); // line circom 50
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[65],&circuitConstants[16]); // line circom 50
}
}

void K_51_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 51;
ctx->componentMemory[coffset].templateName = "K";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 0;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[0];
K_51_run(coffset,ctx);
}

void K_51_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
bool* mySubcomponentsParallel = ctx->componentMemory[ctx_index].subcomponentsParallel;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[4];
FrElement lvar[66];
uint sub_component_aux;
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[16]);
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[22]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[23]);
}
{
PFrElement aux_dest = &lvar[3];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[24]);
}
{
PFrElement aux_dest = &lvar[4];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[25]);
}
{
PFrElement aux_dest = &lvar[5];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[26]);
}
{
PFrElement aux_dest = &lvar[6];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[27]);
}
{
PFrElement aux_dest = &lvar[7];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[28]);
}
{
PFrElement aux_dest = &lvar[8];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[29]);
}
{
PFrElement aux_dest = &lvar[9];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[31]);
}
{
PFrElement aux_dest = &lvar[10];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[33]);
}
{
PFrElement aux_dest = &lvar[11];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[34]);
}
{
PFrElement aux_dest = &lvar[12];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[36]);
}
{
PFrElement aux_dest = &lvar[13];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[38]);
}
{
PFrElement aux_dest = &lvar[14];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[40]);
}
{
PFrElement aux_dest = &lvar[15];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[42]);
}
{
PFrElement aux_dest = &lvar[16];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[44]);
}
{
PFrElement aux_dest = &lvar[17];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[46]);
}
{
PFrElement aux_dest = &lvar[18];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[47]);
}
{
PFrElement aux_dest = &lvar[19];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[48]);
}
{
PFrElement aux_dest = &lvar[20];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[49]);
}
{
PFrElement aux_dest = &lvar[21];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[51]);
}
{
PFrElement aux_dest = &lvar[22];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[53]);
}
{
PFrElement aux_dest = &lvar[23];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[55]);
}
{
PFrElement aux_dest = &lvar[24];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[57]);
}
{
PFrElement aux_dest = &lvar[25];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[59]);
}
{
PFrElement aux_dest = &lvar[26];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[61]);
}
{
PFrElement aux_dest = &lvar[27];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[63]);
}
{
PFrElement aux_dest = &lvar[28];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[65]);
}
{
PFrElement aux_dest = &lvar[29];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[67]);
}
{
PFrElement aux_dest = &lvar[30];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[69]);
}
{
PFrElement aux_dest = &lvar[31];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[71]);
}
{
PFrElement aux_dest = &lvar[32];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[73]);
}
{
PFrElement aux_dest = &lvar[33];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[74]);
}
{
PFrElement aux_dest = &lvar[34];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[76]);
}
{
PFrElement aux_dest = &lvar[35];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[77]);
}
{
PFrElement aux_dest = &lvar[36];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[79]);
}
{
PFrElement aux_dest = &lvar[37];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[81]);
}
{
PFrElement aux_dest = &lvar[38];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[83]);
}
{
PFrElement aux_dest = &lvar[39];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[85]);
}
{
PFrElement aux_dest = &lvar[40];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[87]);
}
{
PFrElement aux_dest = &lvar[41];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[89]);
}
{
PFrElement aux_dest = &lvar[42];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[91]);
}
{
PFrElement aux_dest = &lvar[43];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[93]);
}
{
PFrElement aux_dest = &lvar[44];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[95]);
}
{
PFrElement aux_dest = &lvar[45];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[97]);
}
{
PFrElement aux_dest = &lvar[46];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[99]);
}
{
PFrElement aux_dest = &lvar[47];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[101]);
}
{
PFrElement aux_dest = &lvar[48];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[103]);
}
{
PFrElement aux_dest = &lvar[49];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[105]);
}
{
PFrElement aux_dest = &lvar[50];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[107]);
}
{
PFrElement aux_dest = &lvar[51];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[109]);
}
{
PFrElement aux_dest = &lvar[52];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[111]);
}
{
PFrElement aux_dest = &lvar[53];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[113]);
}
{
PFrElement aux_dest = &lvar[54];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[115]);
}
{
PFrElement aux_dest = &lvar[55];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[117]);
}
{
PFrElement aux_dest = &lvar[56];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[119]);
}
{
PFrElement aux_dest = &lvar[57];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[121]);
}
{
PFrElement aux_dest = &lvar[58];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[123]);
}
{
PFrElement aux_dest = &lvar[59];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[125]);
}
{
PFrElement aux_dest = &lvar[60];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[127]);
}
{
PFrElement aux_dest = &lvar[61];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[129]);
}
{
PFrElement aux_dest = &lvar[62];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[131]);
}
{
PFrElement aux_dest = &lvar[63];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[133]);
}
{
PFrElement aux_dest = &lvar[64];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[135]);
}
{
PFrElement aux_dest = &lvar[65];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[65],&circuitConstants[16]); // line circom 50
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[65])) + 0)];
// load src
Fr_shr(&expaux[1],&circuitConstants[74],&lvar[65]); // line circom 51
Fr_band(&expaux[0],&expaux[1],&circuitConstants[2]); // line circom 51
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[65];
// load src
Fr_add(&expaux[0],&lvar[65],&circuitConstants[2]); // line circom 50
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[65],&circuitConstants[16]); // line circom 50
}
}

void K_52_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 52;
ctx->componentMemory[coffset].templateName = "K";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 0;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[0];
K_52_run(coffset,ctx);
}

void K_52_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
bool* mySubcomponentsParallel = ctx->componentMemory[ctx_index].subcomponentsParallel;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[4];
FrElement lvar[66];
uint sub_component_aux;
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[75]);
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[22]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[23]);
}
{
PFrElement aux_dest = &lvar[3];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[24]);
}
{
PFrElement aux_dest = &lvar[4];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[25]);
}
{
PFrElement aux_dest = &lvar[5];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[26]);
}
{
PFrElement aux_dest = &lvar[6];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[27]);
}
{
PFrElement aux_dest = &lvar[7];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[28]);
}
{
PFrElement aux_dest = &lvar[8];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[29]);
}
{
PFrElement aux_dest = &lvar[9];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[31]);
}
{
PFrElement aux_dest = &lvar[10];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[33]);
}
{
PFrElement aux_dest = &lvar[11];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[34]);
}
{
PFrElement aux_dest = &lvar[12];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[36]);
}
{
PFrElement aux_dest = &lvar[13];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[38]);
}
{
PFrElement aux_dest = &lvar[14];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[40]);
}
{
PFrElement aux_dest = &lvar[15];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[42]);
}
{
PFrElement aux_dest = &lvar[16];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[44]);
}
{
PFrElement aux_dest = &lvar[17];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[46]);
}
{
PFrElement aux_dest = &lvar[18];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[47]);
}
{
PFrElement aux_dest = &lvar[19];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[48]);
}
{
PFrElement aux_dest = &lvar[20];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[49]);
}
{
PFrElement aux_dest = &lvar[21];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[51]);
}
{
PFrElement aux_dest = &lvar[22];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[53]);
}
{
PFrElement aux_dest = &lvar[23];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[55]);
}
{
PFrElement aux_dest = &lvar[24];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[57]);
}
{
PFrElement aux_dest = &lvar[25];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[59]);
}
{
PFrElement aux_dest = &lvar[26];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[61]);
}
{
PFrElement aux_dest = &lvar[27];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[63]);
}
{
PFrElement aux_dest = &lvar[28];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[65]);
}
{
PFrElement aux_dest = &lvar[29];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[67]);
}
{
PFrElement aux_dest = &lvar[30];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[69]);
}
{
PFrElement aux_dest = &lvar[31];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[71]);
}
{
PFrElement aux_dest = &lvar[32];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[73]);
}
{
PFrElement aux_dest = &lvar[33];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[74]);
}
{
PFrElement aux_dest = &lvar[34];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[76]);
}
{
PFrElement aux_dest = &lvar[35];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[77]);
}
{
PFrElement aux_dest = &lvar[36];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[79]);
}
{
PFrElement aux_dest = &lvar[37];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[81]);
}
{
PFrElement aux_dest = &lvar[38];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[83]);
}
{
PFrElement aux_dest = &lvar[39];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[85]);
}
{
PFrElement aux_dest = &lvar[40];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[87]);
}
{
PFrElement aux_dest = &lvar[41];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[89]);
}
{
PFrElement aux_dest = &lvar[42];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[91]);
}
{
PFrElement aux_dest = &lvar[43];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[93]);
}
{
PFrElement aux_dest = &lvar[44];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[95]);
}
{
PFrElement aux_dest = &lvar[45];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[97]);
}
{
PFrElement aux_dest = &lvar[46];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[99]);
}
{
PFrElement aux_dest = &lvar[47];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[101]);
}
{
PFrElement aux_dest = &lvar[48];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[103]);
}
{
PFrElement aux_dest = &lvar[49];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[105]);
}
{
PFrElement aux_dest = &lvar[50];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[107]);
}
{
PFrElement aux_dest = &lvar[51];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[109]);
}
{
PFrElement aux_dest = &lvar[52];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[111]);
}
{
PFrElement aux_dest = &lvar[53];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[113]);
}
{
PFrElement aux_dest = &lvar[54];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[115]);
}
{
PFrElement aux_dest = &lvar[55];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[117]);
}
{
PFrElement aux_dest = &lvar[56];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[119]);
}
{
PFrElement aux_dest = &lvar[57];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[121]);
}
{
PFrElement aux_dest = &lvar[58];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[123]);
}
{
PFrElement aux_dest = &lvar[59];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[125]);
}
{
PFrElement aux_dest = &lvar[60];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[127]);
}
{
PFrElement aux_dest = &lvar[61];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[129]);
}
{
PFrElement aux_dest = &lvar[62];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[131]);
}
{
PFrElement aux_dest = &lvar[63];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[133]);
}
{
PFrElement aux_dest = &lvar[64];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[135]);
}
{
PFrElement aux_dest = &lvar[65];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[65],&circuitConstants[16]); // line circom 50
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[65])) + 0)];
// load src
Fr_shr(&expaux[1],&circuitConstants[76],&lvar[65]); // line circom 51
Fr_band(&expaux[0],&expaux[1],&circuitConstants[2]); // line circom 51
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[65];
// load src
Fr_add(&expaux[0],&lvar[65],&circuitConstants[2]); // line circom 50
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[65],&circuitConstants[16]); // line circom 50
}
}

void K_53_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 53;
ctx->componentMemory[coffset].templateName = "K";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 0;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[0];
K_53_run(coffset,ctx);
}

void K_53_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
bool* mySubcomponentsParallel = ctx->componentMemory[ctx_index].subcomponentsParallel;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[4];
FrElement lvar[66];
uint sub_component_aux;
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[21]);
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[22]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[23]);
}
{
PFrElement aux_dest = &lvar[3];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[24]);
}
{
PFrElement aux_dest = &lvar[4];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[25]);
}
{
PFrElement aux_dest = &lvar[5];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[26]);
}
{
PFrElement aux_dest = &lvar[6];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[27]);
}
{
PFrElement aux_dest = &lvar[7];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[28]);
}
{
PFrElement aux_dest = &lvar[8];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[29]);
}
{
PFrElement aux_dest = &lvar[9];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[31]);
}
{
PFrElement aux_dest = &lvar[10];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[33]);
}
{
PFrElement aux_dest = &lvar[11];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[34]);
}
{
PFrElement aux_dest = &lvar[12];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[36]);
}
{
PFrElement aux_dest = &lvar[13];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[38]);
}
{
PFrElement aux_dest = &lvar[14];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[40]);
}
{
PFrElement aux_dest = &lvar[15];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[42]);
}
{
PFrElement aux_dest = &lvar[16];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[44]);
}
{
PFrElement aux_dest = &lvar[17];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[46]);
}
{
PFrElement aux_dest = &lvar[18];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[47]);
}
{
PFrElement aux_dest = &lvar[19];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[48]);
}
{
PFrElement aux_dest = &lvar[20];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[49]);
}
{
PFrElement aux_dest = &lvar[21];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[51]);
}
{
PFrElement aux_dest = &lvar[22];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[53]);
}
{
PFrElement aux_dest = &lvar[23];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[55]);
}
{
PFrElement aux_dest = &lvar[24];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[57]);
}
{
PFrElement aux_dest = &lvar[25];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[59]);
}
{
PFrElement aux_dest = &lvar[26];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[61]);
}
{
PFrElement aux_dest = &lvar[27];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[63]);
}
{
PFrElement aux_dest = &lvar[28];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[65]);
}
{
PFrElement aux_dest = &lvar[29];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[67]);
}
{
PFrElement aux_dest = &lvar[30];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[69]);
}
{
PFrElement aux_dest = &lvar[31];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[71]);
}
{
PFrElement aux_dest = &lvar[32];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[73]);
}
{
PFrElement aux_dest = &lvar[33];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[74]);
}
{
PFrElement aux_dest = &lvar[34];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[76]);
}
{
PFrElement aux_dest = &lvar[35];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[77]);
}
{
PFrElement aux_dest = &lvar[36];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[79]);
}
{
PFrElement aux_dest = &lvar[37];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[81]);
}
{
PFrElement aux_dest = &lvar[38];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[83]);
}
{
PFrElement aux_dest = &lvar[39];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[85]);
}
{
PFrElement aux_dest = &lvar[40];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[87]);
}
{
PFrElement aux_dest = &lvar[41];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[89]);
}
{
PFrElement aux_dest = &lvar[42];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[91]);
}
{
PFrElement aux_dest = &lvar[43];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[93]);
}
{
PFrElement aux_dest = &lvar[44];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[95]);
}
{
PFrElement aux_dest = &lvar[45];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[97]);
}
{
PFrElement aux_dest = &lvar[46];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[99]);
}
{
PFrElement aux_dest = &lvar[47];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[101]);
}
{
PFrElement aux_dest = &lvar[48];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[103]);
}
{
PFrElement aux_dest = &lvar[49];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[105]);
}
{
PFrElement aux_dest = &lvar[50];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[107]);
}
{
PFrElement aux_dest = &lvar[51];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[109]);
}
{
PFrElement aux_dest = &lvar[52];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[111]);
}
{
PFrElement aux_dest = &lvar[53];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[113]);
}
{
PFrElement aux_dest = &lvar[54];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[115]);
}
{
PFrElement aux_dest = &lvar[55];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[117]);
}
{
PFrElement aux_dest = &lvar[56];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[119]);
}
{
PFrElement aux_dest = &lvar[57];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[121]);
}
{
PFrElement aux_dest = &lvar[58];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[123]);
}
{
PFrElement aux_dest = &lvar[59];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[125]);
}
{
PFrElement aux_dest = &lvar[60];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[127]);
}
{
PFrElement aux_dest = &lvar[61];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[129]);
}
{
PFrElement aux_dest = &lvar[62];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[131]);
}
{
PFrElement aux_dest = &lvar[63];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[133]);
}
{
PFrElement aux_dest = &lvar[64];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[135]);
}
{
PFrElement aux_dest = &lvar[65];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[65],&circuitConstants[16]); // line circom 50
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[65])) + 0)];
// load src
Fr_shr(&expaux[1],&circuitConstants[77],&lvar[65]); // line circom 51
Fr_band(&expaux[0],&expaux[1],&circuitConstants[2]); // line circom 51
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[65];
// load src
Fr_add(&expaux[0],&lvar[65],&circuitConstants[2]); // line circom 50
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[65],&circuitConstants[16]); // line circom 50
}
}

void K_54_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 54;
ctx->componentMemory[coffset].templateName = "K";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 0;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[0];
K_54_run(coffset,ctx);
}

void K_54_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
bool* mySubcomponentsParallel = ctx->componentMemory[ctx_index].subcomponentsParallel;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[4];
FrElement lvar[66];
uint sub_component_aux;
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[78]);
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[22]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[23]);
}
{
PFrElement aux_dest = &lvar[3];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[24]);
}
{
PFrElement aux_dest = &lvar[4];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[25]);
}
{
PFrElement aux_dest = &lvar[5];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[26]);
}
{
PFrElement aux_dest = &lvar[6];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[27]);
}
{
PFrElement aux_dest = &lvar[7];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[28]);
}
{
PFrElement aux_dest = &lvar[8];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[29]);
}
{
PFrElement aux_dest = &lvar[9];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[31]);
}
{
PFrElement aux_dest = &lvar[10];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[33]);
}
{
PFrElement aux_dest = &lvar[11];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[34]);
}
{
PFrElement aux_dest = &lvar[12];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[36]);
}
{
PFrElement aux_dest = &lvar[13];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[38]);
}
{
PFrElement aux_dest = &lvar[14];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[40]);
}
{
PFrElement aux_dest = &lvar[15];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[42]);
}
{
PFrElement aux_dest = &lvar[16];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[44]);
}
{
PFrElement aux_dest = &lvar[17];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[46]);
}
{
PFrElement aux_dest = &lvar[18];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[47]);
}
{
PFrElement aux_dest = &lvar[19];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[48]);
}
{
PFrElement aux_dest = &lvar[20];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[49]);
}
{
PFrElement aux_dest = &lvar[21];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[51]);
}
{
PFrElement aux_dest = &lvar[22];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[53]);
}
{
PFrElement aux_dest = &lvar[23];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[55]);
}
{
PFrElement aux_dest = &lvar[24];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[57]);
}
{
PFrElement aux_dest = &lvar[25];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[59]);
}
{
PFrElement aux_dest = &lvar[26];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[61]);
}
{
PFrElement aux_dest = &lvar[27];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[63]);
}
{
PFrElement aux_dest = &lvar[28];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[65]);
}
{
PFrElement aux_dest = &lvar[29];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[67]);
}
{
PFrElement aux_dest = &lvar[30];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[69]);
}
{
PFrElement aux_dest = &lvar[31];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[71]);
}
{
PFrElement aux_dest = &lvar[32];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[73]);
}
{
PFrElement aux_dest = &lvar[33];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[74]);
}
{
PFrElement aux_dest = &lvar[34];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[76]);
}
{
PFrElement aux_dest = &lvar[35];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[77]);
}
{
PFrElement aux_dest = &lvar[36];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[79]);
}
{
PFrElement aux_dest = &lvar[37];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[81]);
}
{
PFrElement aux_dest = &lvar[38];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[83]);
}
{
PFrElement aux_dest = &lvar[39];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[85]);
}
{
PFrElement aux_dest = &lvar[40];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[87]);
}
{
PFrElement aux_dest = &lvar[41];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[89]);
}
{
PFrElement aux_dest = &lvar[42];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[91]);
}
{
PFrElement aux_dest = &lvar[43];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[93]);
}
{
PFrElement aux_dest = &lvar[44];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[95]);
}
{
PFrElement aux_dest = &lvar[45];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[97]);
}
{
PFrElement aux_dest = &lvar[46];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[99]);
}
{
PFrElement aux_dest = &lvar[47];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[101]);
}
{
PFrElement aux_dest = &lvar[48];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[103]);
}
{
PFrElement aux_dest = &lvar[49];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[105]);
}
{
PFrElement aux_dest = &lvar[50];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[107]);
}
{
PFrElement aux_dest = &lvar[51];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[109]);
}
{
PFrElement aux_dest = &lvar[52];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[111]);
}
{
PFrElement aux_dest = &lvar[53];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[113]);
}
{
PFrElement aux_dest = &lvar[54];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[115]);
}
{
PFrElement aux_dest = &lvar[55];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[117]);
}
{
PFrElement aux_dest = &lvar[56];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[119]);
}
{
PFrElement aux_dest = &lvar[57];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[121]);
}
{
PFrElement aux_dest = &lvar[58];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[123]);
}
{
PFrElement aux_dest = &lvar[59];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[125]);
}
{
PFrElement aux_dest = &lvar[60];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[127]);
}
{
PFrElement aux_dest = &lvar[61];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[129]);
}
{
PFrElement aux_dest = &lvar[62];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[131]);
}
{
PFrElement aux_dest = &lvar[63];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[133]);
}
{
PFrElement aux_dest = &lvar[64];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[135]);
}
{
PFrElement aux_dest = &lvar[65];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[65],&circuitConstants[16]); // line circom 50
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[65])) + 0)];
// load src
Fr_shr(&expaux[1],&circuitConstants[79],&lvar[65]); // line circom 51
Fr_band(&expaux[0],&expaux[1],&circuitConstants[2]); // line circom 51
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[65];
// load src
Fr_add(&expaux[0],&lvar[65],&circuitConstants[2]); // line circom 50
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[65],&circuitConstants[16]); // line circom 50
}
}

void K_55_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 55;
ctx->componentMemory[coffset].templateName = "K";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 0;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[0];
K_55_run(coffset,ctx);
}

void K_55_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
bool* mySubcomponentsParallel = ctx->componentMemory[ctx_index].subcomponentsParallel;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[4];
FrElement lvar[66];
uint sub_component_aux;
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[80]);
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[22]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[23]);
}
{
PFrElement aux_dest = &lvar[3];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[24]);
}
{
PFrElement aux_dest = &lvar[4];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[25]);
}
{
PFrElement aux_dest = &lvar[5];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[26]);
}
{
PFrElement aux_dest = &lvar[6];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[27]);
}
{
PFrElement aux_dest = &lvar[7];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[28]);
}
{
PFrElement aux_dest = &lvar[8];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[29]);
}
{
PFrElement aux_dest = &lvar[9];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[31]);
}
{
PFrElement aux_dest = &lvar[10];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[33]);
}
{
PFrElement aux_dest = &lvar[11];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[34]);
}
{
PFrElement aux_dest = &lvar[12];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[36]);
}
{
PFrElement aux_dest = &lvar[13];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[38]);
}
{
PFrElement aux_dest = &lvar[14];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[40]);
}
{
PFrElement aux_dest = &lvar[15];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[42]);
}
{
PFrElement aux_dest = &lvar[16];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[44]);
}
{
PFrElement aux_dest = &lvar[17];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[46]);
}
{
PFrElement aux_dest = &lvar[18];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[47]);
}
{
PFrElement aux_dest = &lvar[19];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[48]);
}
{
PFrElement aux_dest = &lvar[20];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[49]);
}
{
PFrElement aux_dest = &lvar[21];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[51]);
}
{
PFrElement aux_dest = &lvar[22];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[53]);
}
{
PFrElement aux_dest = &lvar[23];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[55]);
}
{
PFrElement aux_dest = &lvar[24];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[57]);
}
{
PFrElement aux_dest = &lvar[25];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[59]);
}
{
PFrElement aux_dest = &lvar[26];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[61]);
}
{
PFrElement aux_dest = &lvar[27];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[63]);
}
{
PFrElement aux_dest = &lvar[28];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[65]);
}
{
PFrElement aux_dest = &lvar[29];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[67]);
}
{
PFrElement aux_dest = &lvar[30];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[69]);
}
{
PFrElement aux_dest = &lvar[31];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[71]);
}
{
PFrElement aux_dest = &lvar[32];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[73]);
}
{
PFrElement aux_dest = &lvar[33];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[74]);
}
{
PFrElement aux_dest = &lvar[34];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[76]);
}
{
PFrElement aux_dest = &lvar[35];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[77]);
}
{
PFrElement aux_dest = &lvar[36];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[79]);
}
{
PFrElement aux_dest = &lvar[37];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[81]);
}
{
PFrElement aux_dest = &lvar[38];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[83]);
}
{
PFrElement aux_dest = &lvar[39];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[85]);
}
{
PFrElement aux_dest = &lvar[40];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[87]);
}
{
PFrElement aux_dest = &lvar[41];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[89]);
}
{
PFrElement aux_dest = &lvar[42];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[91]);
}
{
PFrElement aux_dest = &lvar[43];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[93]);
}
{
PFrElement aux_dest = &lvar[44];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[95]);
}
{
PFrElement aux_dest = &lvar[45];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[97]);
}
{
PFrElement aux_dest = &lvar[46];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[99]);
}
{
PFrElement aux_dest = &lvar[47];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[101]);
}
{
PFrElement aux_dest = &lvar[48];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[103]);
}
{
PFrElement aux_dest = &lvar[49];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[105]);
}
{
PFrElement aux_dest = &lvar[50];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[107]);
}
{
PFrElement aux_dest = &lvar[51];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[109]);
}
{
PFrElement aux_dest = &lvar[52];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[111]);
}
{
PFrElement aux_dest = &lvar[53];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[113]);
}
{
PFrElement aux_dest = &lvar[54];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[115]);
}
{
PFrElement aux_dest = &lvar[55];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[117]);
}
{
PFrElement aux_dest = &lvar[56];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[119]);
}
{
PFrElement aux_dest = &lvar[57];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[121]);
}
{
PFrElement aux_dest = &lvar[58];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[123]);
}
{
PFrElement aux_dest = &lvar[59];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[125]);
}
{
PFrElement aux_dest = &lvar[60];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[127]);
}
{
PFrElement aux_dest = &lvar[61];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[129]);
}
{
PFrElement aux_dest = &lvar[62];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[131]);
}
{
PFrElement aux_dest = &lvar[63];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[133]);
}
{
PFrElement aux_dest = &lvar[64];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[135]);
}
{
PFrElement aux_dest = &lvar[65];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[65],&circuitConstants[16]); // line circom 50
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[65])) + 0)];
// load src
Fr_shr(&expaux[1],&circuitConstants[81],&lvar[65]); // line circom 51
Fr_band(&expaux[0],&expaux[1],&circuitConstants[2]); // line circom 51
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[65];
// load src
Fr_add(&expaux[0],&lvar[65],&circuitConstants[2]); // line circom 50
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[65],&circuitConstants[16]); // line circom 50
}
}

void K_56_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 56;
ctx->componentMemory[coffset].templateName = "K";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 0;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[0];
K_56_run(coffset,ctx);
}

void K_56_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
bool* mySubcomponentsParallel = ctx->componentMemory[ctx_index].subcomponentsParallel;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[4];
FrElement lvar[66];
uint sub_component_aux;
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[82]);
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[22]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[23]);
}
{
PFrElement aux_dest = &lvar[3];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[24]);
}
{
PFrElement aux_dest = &lvar[4];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[25]);
}
{
PFrElement aux_dest = &lvar[5];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[26]);
}
{
PFrElement aux_dest = &lvar[6];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[27]);
}
{
PFrElement aux_dest = &lvar[7];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[28]);
}
{
PFrElement aux_dest = &lvar[8];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[29]);
}
{
PFrElement aux_dest = &lvar[9];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[31]);
}
{
PFrElement aux_dest = &lvar[10];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[33]);
}
{
PFrElement aux_dest = &lvar[11];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[34]);
}
{
PFrElement aux_dest = &lvar[12];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[36]);
}
{
PFrElement aux_dest = &lvar[13];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[38]);
}
{
PFrElement aux_dest = &lvar[14];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[40]);
}
{
PFrElement aux_dest = &lvar[15];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[42]);
}
{
PFrElement aux_dest = &lvar[16];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[44]);
}
{
PFrElement aux_dest = &lvar[17];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[46]);
}
{
PFrElement aux_dest = &lvar[18];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[47]);
}
{
PFrElement aux_dest = &lvar[19];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[48]);
}
{
PFrElement aux_dest = &lvar[20];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[49]);
}
{
PFrElement aux_dest = &lvar[21];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[51]);
}
{
PFrElement aux_dest = &lvar[22];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[53]);
}
{
PFrElement aux_dest = &lvar[23];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[55]);
}
{
PFrElement aux_dest = &lvar[24];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[57]);
}
{
PFrElement aux_dest = &lvar[25];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[59]);
}
{
PFrElement aux_dest = &lvar[26];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[61]);
}
{
PFrElement aux_dest = &lvar[27];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[63]);
}
{
PFrElement aux_dest = &lvar[28];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[65]);
}
{
PFrElement aux_dest = &lvar[29];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[67]);
}
{
PFrElement aux_dest = &lvar[30];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[69]);
}
{
PFrElement aux_dest = &lvar[31];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[71]);
}
{
PFrElement aux_dest = &lvar[32];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[73]);
}
{
PFrElement aux_dest = &lvar[33];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[74]);
}
{
PFrElement aux_dest = &lvar[34];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[76]);
}
{
PFrElement aux_dest = &lvar[35];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[77]);
}
{
PFrElement aux_dest = &lvar[36];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[79]);
}
{
PFrElement aux_dest = &lvar[37];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[81]);
}
{
PFrElement aux_dest = &lvar[38];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[83]);
}
{
PFrElement aux_dest = &lvar[39];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[85]);
}
{
PFrElement aux_dest = &lvar[40];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[87]);
}
{
PFrElement aux_dest = &lvar[41];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[89]);
}
{
PFrElement aux_dest = &lvar[42];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[91]);
}
{
PFrElement aux_dest = &lvar[43];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[93]);
}
{
PFrElement aux_dest = &lvar[44];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[95]);
}
{
PFrElement aux_dest = &lvar[45];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[97]);
}
{
PFrElement aux_dest = &lvar[46];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[99]);
}
{
PFrElement aux_dest = &lvar[47];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[101]);
}
{
PFrElement aux_dest = &lvar[48];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[103]);
}
{
PFrElement aux_dest = &lvar[49];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[105]);
}
{
PFrElement aux_dest = &lvar[50];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[107]);
}
{
PFrElement aux_dest = &lvar[51];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[109]);
}
{
PFrElement aux_dest = &lvar[52];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[111]);
}
{
PFrElement aux_dest = &lvar[53];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[113]);
}
{
PFrElement aux_dest = &lvar[54];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[115]);
}
{
PFrElement aux_dest = &lvar[55];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[117]);
}
{
PFrElement aux_dest = &lvar[56];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[119]);
}
{
PFrElement aux_dest = &lvar[57];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[121]);
}
{
PFrElement aux_dest = &lvar[58];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[123]);
}
{
PFrElement aux_dest = &lvar[59];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[125]);
}
{
PFrElement aux_dest = &lvar[60];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[127]);
}
{
PFrElement aux_dest = &lvar[61];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[129]);
}
{
PFrElement aux_dest = &lvar[62];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[131]);
}
{
PFrElement aux_dest = &lvar[63];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[133]);
}
{
PFrElement aux_dest = &lvar[64];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[135]);
}
{
PFrElement aux_dest = &lvar[65];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[65],&circuitConstants[16]); // line circom 50
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[65])) + 0)];
// load src
Fr_shr(&expaux[1],&circuitConstants[83],&lvar[65]); // line circom 51
Fr_band(&expaux[0],&expaux[1],&circuitConstants[2]); // line circom 51
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[65];
// load src
Fr_add(&expaux[0],&lvar[65],&circuitConstants[2]); // line circom 50
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[65],&circuitConstants[16]); // line circom 50
}
}

void K_57_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 57;
ctx->componentMemory[coffset].templateName = "K";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 0;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[0];
K_57_run(coffset,ctx);
}

void K_57_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
bool* mySubcomponentsParallel = ctx->componentMemory[ctx_index].subcomponentsParallel;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[4];
FrElement lvar[66];
uint sub_component_aux;
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[84]);
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[22]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[23]);
}
{
PFrElement aux_dest = &lvar[3];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[24]);
}
{
PFrElement aux_dest = &lvar[4];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[25]);
}
{
PFrElement aux_dest = &lvar[5];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[26]);
}
{
PFrElement aux_dest = &lvar[6];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[27]);
}
{
PFrElement aux_dest = &lvar[7];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[28]);
}
{
PFrElement aux_dest = &lvar[8];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[29]);
}
{
PFrElement aux_dest = &lvar[9];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[31]);
}
{
PFrElement aux_dest = &lvar[10];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[33]);
}
{
PFrElement aux_dest = &lvar[11];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[34]);
}
{
PFrElement aux_dest = &lvar[12];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[36]);
}
{
PFrElement aux_dest = &lvar[13];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[38]);
}
{
PFrElement aux_dest = &lvar[14];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[40]);
}
{
PFrElement aux_dest = &lvar[15];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[42]);
}
{
PFrElement aux_dest = &lvar[16];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[44]);
}
{
PFrElement aux_dest = &lvar[17];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[46]);
}
{
PFrElement aux_dest = &lvar[18];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[47]);
}
{
PFrElement aux_dest = &lvar[19];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[48]);
}
{
PFrElement aux_dest = &lvar[20];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[49]);
}
{
PFrElement aux_dest = &lvar[21];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[51]);
}
{
PFrElement aux_dest = &lvar[22];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[53]);
}
{
PFrElement aux_dest = &lvar[23];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[55]);
}
{
PFrElement aux_dest = &lvar[24];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[57]);
}
{
PFrElement aux_dest = &lvar[25];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[59]);
}
{
PFrElement aux_dest = &lvar[26];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[61]);
}
{
PFrElement aux_dest = &lvar[27];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[63]);
}
{
PFrElement aux_dest = &lvar[28];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[65]);
}
{
PFrElement aux_dest = &lvar[29];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[67]);
}
{
PFrElement aux_dest = &lvar[30];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[69]);
}
{
PFrElement aux_dest = &lvar[31];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[71]);
}
{
PFrElement aux_dest = &lvar[32];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[73]);
}
{
PFrElement aux_dest = &lvar[33];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[74]);
}
{
PFrElement aux_dest = &lvar[34];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[76]);
}
{
PFrElement aux_dest = &lvar[35];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[77]);
}
{
PFrElement aux_dest = &lvar[36];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[79]);
}
{
PFrElement aux_dest = &lvar[37];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[81]);
}
{
PFrElement aux_dest = &lvar[38];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[83]);
}
{
PFrElement aux_dest = &lvar[39];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[85]);
}
{
PFrElement aux_dest = &lvar[40];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[87]);
}
{
PFrElement aux_dest = &lvar[41];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[89]);
}
{
PFrElement aux_dest = &lvar[42];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[91]);
}
{
PFrElement aux_dest = &lvar[43];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[93]);
}
{
PFrElement aux_dest = &lvar[44];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[95]);
}
{
PFrElement aux_dest = &lvar[45];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[97]);
}
{
PFrElement aux_dest = &lvar[46];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[99]);
}
{
PFrElement aux_dest = &lvar[47];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[101]);
}
{
PFrElement aux_dest = &lvar[48];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[103]);
}
{
PFrElement aux_dest = &lvar[49];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[105]);
}
{
PFrElement aux_dest = &lvar[50];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[107]);
}
{
PFrElement aux_dest = &lvar[51];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[109]);
}
{
PFrElement aux_dest = &lvar[52];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[111]);
}
{
PFrElement aux_dest = &lvar[53];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[113]);
}
{
PFrElement aux_dest = &lvar[54];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[115]);
}
{
PFrElement aux_dest = &lvar[55];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[117]);
}
{
PFrElement aux_dest = &lvar[56];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[119]);
}
{
PFrElement aux_dest = &lvar[57];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[121]);
}
{
PFrElement aux_dest = &lvar[58];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[123]);
}
{
PFrElement aux_dest = &lvar[59];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[125]);
}
{
PFrElement aux_dest = &lvar[60];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[127]);
}
{
PFrElement aux_dest = &lvar[61];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[129]);
}
{
PFrElement aux_dest = &lvar[62];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[131]);
}
{
PFrElement aux_dest = &lvar[63];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[133]);
}
{
PFrElement aux_dest = &lvar[64];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[135]);
}
{
PFrElement aux_dest = &lvar[65];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[65],&circuitConstants[16]); // line circom 50
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[65])) + 0)];
// load src
Fr_shr(&expaux[1],&circuitConstants[85],&lvar[65]); // line circom 51
Fr_band(&expaux[0],&expaux[1],&circuitConstants[2]); // line circom 51
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[65];
// load src
Fr_add(&expaux[0],&lvar[65],&circuitConstants[2]); // line circom 50
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[65],&circuitConstants[16]); // line circom 50
}
}

void K_58_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 58;
ctx->componentMemory[coffset].templateName = "K";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 0;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[0];
K_58_run(coffset,ctx);
}

void K_58_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
bool* mySubcomponentsParallel = ctx->componentMemory[ctx_index].subcomponentsParallel;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[4];
FrElement lvar[66];
uint sub_component_aux;
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[86]);
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[22]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[23]);
}
{
PFrElement aux_dest = &lvar[3];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[24]);
}
{
PFrElement aux_dest = &lvar[4];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[25]);
}
{
PFrElement aux_dest = &lvar[5];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[26]);
}
{
PFrElement aux_dest = &lvar[6];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[27]);
}
{
PFrElement aux_dest = &lvar[7];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[28]);
}
{
PFrElement aux_dest = &lvar[8];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[29]);
}
{
PFrElement aux_dest = &lvar[9];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[31]);
}
{
PFrElement aux_dest = &lvar[10];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[33]);
}
{
PFrElement aux_dest = &lvar[11];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[34]);
}
{
PFrElement aux_dest = &lvar[12];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[36]);
}
{
PFrElement aux_dest = &lvar[13];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[38]);
}
{
PFrElement aux_dest = &lvar[14];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[40]);
}
{
PFrElement aux_dest = &lvar[15];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[42]);
}
{
PFrElement aux_dest = &lvar[16];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[44]);
}
{
PFrElement aux_dest = &lvar[17];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[46]);
}
{
PFrElement aux_dest = &lvar[18];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[47]);
}
{
PFrElement aux_dest = &lvar[19];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[48]);
}
{
PFrElement aux_dest = &lvar[20];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[49]);
}
{
PFrElement aux_dest = &lvar[21];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[51]);
}
{
PFrElement aux_dest = &lvar[22];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[53]);
}
{
PFrElement aux_dest = &lvar[23];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[55]);
}
{
PFrElement aux_dest = &lvar[24];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[57]);
}
{
PFrElement aux_dest = &lvar[25];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[59]);
}
{
PFrElement aux_dest = &lvar[26];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[61]);
}
{
PFrElement aux_dest = &lvar[27];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[63]);
}
{
PFrElement aux_dest = &lvar[28];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[65]);
}
{
PFrElement aux_dest = &lvar[29];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[67]);
}
{
PFrElement aux_dest = &lvar[30];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[69]);
}
{
PFrElement aux_dest = &lvar[31];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[71]);
}
{
PFrElement aux_dest = &lvar[32];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[73]);
}
{
PFrElement aux_dest = &lvar[33];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[74]);
}
{
PFrElement aux_dest = &lvar[34];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[76]);
}
{
PFrElement aux_dest = &lvar[35];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[77]);
}
{
PFrElement aux_dest = &lvar[36];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[79]);
}
{
PFrElement aux_dest = &lvar[37];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[81]);
}
{
PFrElement aux_dest = &lvar[38];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[83]);
}
{
PFrElement aux_dest = &lvar[39];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[85]);
}
{
PFrElement aux_dest = &lvar[40];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[87]);
}
{
PFrElement aux_dest = &lvar[41];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[89]);
}
{
PFrElement aux_dest = &lvar[42];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[91]);
}
{
PFrElement aux_dest = &lvar[43];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[93]);
}
{
PFrElement aux_dest = &lvar[44];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[95]);
}
{
PFrElement aux_dest = &lvar[45];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[97]);
}
{
PFrElement aux_dest = &lvar[46];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[99]);
}
{
PFrElement aux_dest = &lvar[47];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[101]);
}
{
PFrElement aux_dest = &lvar[48];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[103]);
}
{
PFrElement aux_dest = &lvar[49];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[105]);
}
{
PFrElement aux_dest = &lvar[50];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[107]);
}
{
PFrElement aux_dest = &lvar[51];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[109]);
}
{
PFrElement aux_dest = &lvar[52];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[111]);
}
{
PFrElement aux_dest = &lvar[53];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[113]);
}
{
PFrElement aux_dest = &lvar[54];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[115]);
}
{
PFrElement aux_dest = &lvar[55];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[117]);
}
{
PFrElement aux_dest = &lvar[56];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[119]);
}
{
PFrElement aux_dest = &lvar[57];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[121]);
}
{
PFrElement aux_dest = &lvar[58];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[123]);
}
{
PFrElement aux_dest = &lvar[59];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[125]);
}
{
PFrElement aux_dest = &lvar[60];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[127]);
}
{
PFrElement aux_dest = &lvar[61];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[129]);
}
{
PFrElement aux_dest = &lvar[62];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[131]);
}
{
PFrElement aux_dest = &lvar[63];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[133]);
}
{
PFrElement aux_dest = &lvar[64];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[135]);
}
{
PFrElement aux_dest = &lvar[65];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[65],&circuitConstants[16]); // line circom 50
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[65])) + 0)];
// load src
Fr_shr(&expaux[1],&circuitConstants[87],&lvar[65]); // line circom 51
Fr_band(&expaux[0],&expaux[1],&circuitConstants[2]); // line circom 51
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[65];
// load src
Fr_add(&expaux[0],&lvar[65],&circuitConstants[2]); // line circom 50
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[65],&circuitConstants[16]); // line circom 50
}
}

void K_59_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 59;
ctx->componentMemory[coffset].templateName = "K";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 0;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[0];
K_59_run(coffset,ctx);
}

void K_59_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
bool* mySubcomponentsParallel = ctx->componentMemory[ctx_index].subcomponentsParallel;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[4];
FrElement lvar[66];
uint sub_component_aux;
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[88]);
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[22]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[23]);
}
{
PFrElement aux_dest = &lvar[3];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[24]);
}
{
PFrElement aux_dest = &lvar[4];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[25]);
}
{
PFrElement aux_dest = &lvar[5];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[26]);
}
{
PFrElement aux_dest = &lvar[6];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[27]);
}
{
PFrElement aux_dest = &lvar[7];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[28]);
}
{
PFrElement aux_dest = &lvar[8];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[29]);
}
{
PFrElement aux_dest = &lvar[9];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[31]);
}
{
PFrElement aux_dest = &lvar[10];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[33]);
}
{
PFrElement aux_dest = &lvar[11];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[34]);
}
{
PFrElement aux_dest = &lvar[12];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[36]);
}
{
PFrElement aux_dest = &lvar[13];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[38]);
}
{
PFrElement aux_dest = &lvar[14];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[40]);
}
{
PFrElement aux_dest = &lvar[15];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[42]);
}
{
PFrElement aux_dest = &lvar[16];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[44]);
}
{
PFrElement aux_dest = &lvar[17];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[46]);
}
{
PFrElement aux_dest = &lvar[18];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[47]);
}
{
PFrElement aux_dest = &lvar[19];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[48]);
}
{
PFrElement aux_dest = &lvar[20];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[49]);
}
{
PFrElement aux_dest = &lvar[21];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[51]);
}
{
PFrElement aux_dest = &lvar[22];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[53]);
}
{
PFrElement aux_dest = &lvar[23];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[55]);
}
{
PFrElement aux_dest = &lvar[24];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[57]);
}
{
PFrElement aux_dest = &lvar[25];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[59]);
}
{
PFrElement aux_dest = &lvar[26];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[61]);
}
{
PFrElement aux_dest = &lvar[27];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[63]);
}
{
PFrElement aux_dest = &lvar[28];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[65]);
}
{
PFrElement aux_dest = &lvar[29];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[67]);
}
{
PFrElement aux_dest = &lvar[30];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[69]);
}
{
PFrElement aux_dest = &lvar[31];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[71]);
}
{
PFrElement aux_dest = &lvar[32];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[73]);
}
{
PFrElement aux_dest = &lvar[33];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[74]);
}
{
PFrElement aux_dest = &lvar[34];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[76]);
}
{
PFrElement aux_dest = &lvar[35];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[77]);
}
{
PFrElement aux_dest = &lvar[36];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[79]);
}
{
PFrElement aux_dest = &lvar[37];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[81]);
}
{
PFrElement aux_dest = &lvar[38];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[83]);
}
{
PFrElement aux_dest = &lvar[39];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[85]);
}
{
PFrElement aux_dest = &lvar[40];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[87]);
}
{
PFrElement aux_dest = &lvar[41];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[89]);
}
{
PFrElement aux_dest = &lvar[42];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[91]);
}
{
PFrElement aux_dest = &lvar[43];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[93]);
}
{
PFrElement aux_dest = &lvar[44];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[95]);
}
{
PFrElement aux_dest = &lvar[45];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[97]);
}
{
PFrElement aux_dest = &lvar[46];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[99]);
}
{
PFrElement aux_dest = &lvar[47];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[101]);
}
{
PFrElement aux_dest = &lvar[48];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[103]);
}
{
PFrElement aux_dest = &lvar[49];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[105]);
}
{
PFrElement aux_dest = &lvar[50];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[107]);
}
{
PFrElement aux_dest = &lvar[51];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[109]);
}
{
PFrElement aux_dest = &lvar[52];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[111]);
}
{
PFrElement aux_dest = &lvar[53];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[113]);
}
{
PFrElement aux_dest = &lvar[54];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[115]);
}
{
PFrElement aux_dest = &lvar[55];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[117]);
}
{
PFrElement aux_dest = &lvar[56];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[119]);
}
{
PFrElement aux_dest = &lvar[57];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[121]);
}
{
PFrElement aux_dest = &lvar[58];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[123]);
}
{
PFrElement aux_dest = &lvar[59];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[125]);
}
{
PFrElement aux_dest = &lvar[60];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[127]);
}
{
PFrElement aux_dest = &lvar[61];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[129]);
}
{
PFrElement aux_dest = &lvar[62];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[131]);
}
{
PFrElement aux_dest = &lvar[63];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[133]);
}
{
PFrElement aux_dest = &lvar[64];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[135]);
}
{
PFrElement aux_dest = &lvar[65];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[65],&circuitConstants[16]); // line circom 50
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[65])) + 0)];
// load src
Fr_shr(&expaux[1],&circuitConstants[89],&lvar[65]); // line circom 51
Fr_band(&expaux[0],&expaux[1],&circuitConstants[2]); // line circom 51
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[65];
// load src
Fr_add(&expaux[0],&lvar[65],&circuitConstants[2]); // line circom 50
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[65],&circuitConstants[16]); // line circom 50
}
}

void K_60_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 60;
ctx->componentMemory[coffset].templateName = "K";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 0;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[0];
K_60_run(coffset,ctx);
}

void K_60_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
bool* mySubcomponentsParallel = ctx->componentMemory[ctx_index].subcomponentsParallel;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[4];
FrElement lvar[66];
uint sub_component_aux;
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[90]);
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[22]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[23]);
}
{
PFrElement aux_dest = &lvar[3];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[24]);
}
{
PFrElement aux_dest = &lvar[4];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[25]);
}
{
PFrElement aux_dest = &lvar[5];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[26]);
}
{
PFrElement aux_dest = &lvar[6];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[27]);
}
{
PFrElement aux_dest = &lvar[7];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[28]);
}
{
PFrElement aux_dest = &lvar[8];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[29]);
}
{
PFrElement aux_dest = &lvar[9];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[31]);
}
{
PFrElement aux_dest = &lvar[10];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[33]);
}
{
PFrElement aux_dest = &lvar[11];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[34]);
}
{
PFrElement aux_dest = &lvar[12];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[36]);
}
{
PFrElement aux_dest = &lvar[13];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[38]);
}
{
PFrElement aux_dest = &lvar[14];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[40]);
}
{
PFrElement aux_dest = &lvar[15];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[42]);
}
{
PFrElement aux_dest = &lvar[16];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[44]);
}
{
PFrElement aux_dest = &lvar[17];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[46]);
}
{
PFrElement aux_dest = &lvar[18];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[47]);
}
{
PFrElement aux_dest = &lvar[19];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[48]);
}
{
PFrElement aux_dest = &lvar[20];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[49]);
}
{
PFrElement aux_dest = &lvar[21];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[51]);
}
{
PFrElement aux_dest = &lvar[22];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[53]);
}
{
PFrElement aux_dest = &lvar[23];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[55]);
}
{
PFrElement aux_dest = &lvar[24];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[57]);
}
{
PFrElement aux_dest = &lvar[25];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[59]);
}
{
PFrElement aux_dest = &lvar[26];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[61]);
}
{
PFrElement aux_dest = &lvar[27];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[63]);
}
{
PFrElement aux_dest = &lvar[28];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[65]);
}
{
PFrElement aux_dest = &lvar[29];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[67]);
}
{
PFrElement aux_dest = &lvar[30];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[69]);
}
{
PFrElement aux_dest = &lvar[31];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[71]);
}
{
PFrElement aux_dest = &lvar[32];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[73]);
}
{
PFrElement aux_dest = &lvar[33];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[74]);
}
{
PFrElement aux_dest = &lvar[34];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[76]);
}
{
PFrElement aux_dest = &lvar[35];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[77]);
}
{
PFrElement aux_dest = &lvar[36];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[79]);
}
{
PFrElement aux_dest = &lvar[37];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[81]);
}
{
PFrElement aux_dest = &lvar[38];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[83]);
}
{
PFrElement aux_dest = &lvar[39];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[85]);
}
{
PFrElement aux_dest = &lvar[40];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[87]);
}
{
PFrElement aux_dest = &lvar[41];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[89]);
}
{
PFrElement aux_dest = &lvar[42];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[91]);
}
{
PFrElement aux_dest = &lvar[43];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[93]);
}
{
PFrElement aux_dest = &lvar[44];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[95]);
}
{
PFrElement aux_dest = &lvar[45];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[97]);
}
{
PFrElement aux_dest = &lvar[46];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[99]);
}
{
PFrElement aux_dest = &lvar[47];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[101]);
}
{
PFrElement aux_dest = &lvar[48];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[103]);
}
{
PFrElement aux_dest = &lvar[49];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[105]);
}
{
PFrElement aux_dest = &lvar[50];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[107]);
}
{
PFrElement aux_dest = &lvar[51];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[109]);
}
{
PFrElement aux_dest = &lvar[52];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[111]);
}
{
PFrElement aux_dest = &lvar[53];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[113]);
}
{
PFrElement aux_dest = &lvar[54];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[115]);
}
{
PFrElement aux_dest = &lvar[55];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[117]);
}
{
PFrElement aux_dest = &lvar[56];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[119]);
}
{
PFrElement aux_dest = &lvar[57];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[121]);
}
{
PFrElement aux_dest = &lvar[58];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[123]);
}
{
PFrElement aux_dest = &lvar[59];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[125]);
}
{
PFrElement aux_dest = &lvar[60];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[127]);
}
{
PFrElement aux_dest = &lvar[61];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[129]);
}
{
PFrElement aux_dest = &lvar[62];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[131]);
}
{
PFrElement aux_dest = &lvar[63];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[133]);
}
{
PFrElement aux_dest = &lvar[64];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[135]);
}
{
PFrElement aux_dest = &lvar[65];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[65],&circuitConstants[16]); // line circom 50
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[65])) + 0)];
// load src
Fr_shr(&expaux[1],&circuitConstants[91],&lvar[65]); // line circom 51
Fr_band(&expaux[0],&expaux[1],&circuitConstants[2]); // line circom 51
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[65];
// load src
Fr_add(&expaux[0],&lvar[65],&circuitConstants[2]); // line circom 50
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[65],&circuitConstants[16]); // line circom 50
}
}

void K_61_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 61;
ctx->componentMemory[coffset].templateName = "K";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 0;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[0];
K_61_run(coffset,ctx);
}

void K_61_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
bool* mySubcomponentsParallel = ctx->componentMemory[ctx_index].subcomponentsParallel;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[4];
FrElement lvar[66];
uint sub_component_aux;
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[92]);
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[22]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[23]);
}
{
PFrElement aux_dest = &lvar[3];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[24]);
}
{
PFrElement aux_dest = &lvar[4];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[25]);
}
{
PFrElement aux_dest = &lvar[5];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[26]);
}
{
PFrElement aux_dest = &lvar[6];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[27]);
}
{
PFrElement aux_dest = &lvar[7];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[28]);
}
{
PFrElement aux_dest = &lvar[8];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[29]);
}
{
PFrElement aux_dest = &lvar[9];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[31]);
}
{
PFrElement aux_dest = &lvar[10];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[33]);
}
{
PFrElement aux_dest = &lvar[11];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[34]);
}
{
PFrElement aux_dest = &lvar[12];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[36]);
}
{
PFrElement aux_dest = &lvar[13];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[38]);
}
{
PFrElement aux_dest = &lvar[14];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[40]);
}
{
PFrElement aux_dest = &lvar[15];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[42]);
}
{
PFrElement aux_dest = &lvar[16];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[44]);
}
{
PFrElement aux_dest = &lvar[17];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[46]);
}
{
PFrElement aux_dest = &lvar[18];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[47]);
}
{
PFrElement aux_dest = &lvar[19];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[48]);
}
{
PFrElement aux_dest = &lvar[20];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[49]);
}
{
PFrElement aux_dest = &lvar[21];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[51]);
}
{
PFrElement aux_dest = &lvar[22];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[53]);
}
{
PFrElement aux_dest = &lvar[23];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[55]);
}
{
PFrElement aux_dest = &lvar[24];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[57]);
}
{
PFrElement aux_dest = &lvar[25];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[59]);
}
{
PFrElement aux_dest = &lvar[26];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[61]);
}
{
PFrElement aux_dest = &lvar[27];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[63]);
}
{
PFrElement aux_dest = &lvar[28];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[65]);
}
{
PFrElement aux_dest = &lvar[29];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[67]);
}
{
PFrElement aux_dest = &lvar[30];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[69]);
}
{
PFrElement aux_dest = &lvar[31];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[71]);
}
{
PFrElement aux_dest = &lvar[32];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[73]);
}
{
PFrElement aux_dest = &lvar[33];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[74]);
}
{
PFrElement aux_dest = &lvar[34];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[76]);
}
{
PFrElement aux_dest = &lvar[35];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[77]);
}
{
PFrElement aux_dest = &lvar[36];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[79]);
}
{
PFrElement aux_dest = &lvar[37];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[81]);
}
{
PFrElement aux_dest = &lvar[38];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[83]);
}
{
PFrElement aux_dest = &lvar[39];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[85]);
}
{
PFrElement aux_dest = &lvar[40];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[87]);
}
{
PFrElement aux_dest = &lvar[41];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[89]);
}
{
PFrElement aux_dest = &lvar[42];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[91]);
}
{
PFrElement aux_dest = &lvar[43];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[93]);
}
{
PFrElement aux_dest = &lvar[44];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[95]);
}
{
PFrElement aux_dest = &lvar[45];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[97]);
}
{
PFrElement aux_dest = &lvar[46];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[99]);
}
{
PFrElement aux_dest = &lvar[47];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[101]);
}
{
PFrElement aux_dest = &lvar[48];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[103]);
}
{
PFrElement aux_dest = &lvar[49];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[105]);
}
{
PFrElement aux_dest = &lvar[50];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[107]);
}
{
PFrElement aux_dest = &lvar[51];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[109]);
}
{
PFrElement aux_dest = &lvar[52];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[111]);
}
{
PFrElement aux_dest = &lvar[53];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[113]);
}
{
PFrElement aux_dest = &lvar[54];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[115]);
}
{
PFrElement aux_dest = &lvar[55];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[117]);
}
{
PFrElement aux_dest = &lvar[56];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[119]);
}
{
PFrElement aux_dest = &lvar[57];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[121]);
}
{
PFrElement aux_dest = &lvar[58];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[123]);
}
{
PFrElement aux_dest = &lvar[59];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[125]);
}
{
PFrElement aux_dest = &lvar[60];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[127]);
}
{
PFrElement aux_dest = &lvar[61];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[129]);
}
{
PFrElement aux_dest = &lvar[62];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[131]);
}
{
PFrElement aux_dest = &lvar[63];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[133]);
}
{
PFrElement aux_dest = &lvar[64];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[135]);
}
{
PFrElement aux_dest = &lvar[65];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[65],&circuitConstants[16]); // line circom 50
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[65])) + 0)];
// load src
Fr_shr(&expaux[1],&circuitConstants[93],&lvar[65]); // line circom 51
Fr_band(&expaux[0],&expaux[1],&circuitConstants[2]); // line circom 51
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[65];
// load src
Fr_add(&expaux[0],&lvar[65],&circuitConstants[2]); // line circom 50
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[65],&circuitConstants[16]); // line circom 50
}
}

void K_62_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 62;
ctx->componentMemory[coffset].templateName = "K";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 0;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[0];
K_62_run(coffset,ctx);
}

void K_62_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
bool* mySubcomponentsParallel = ctx->componentMemory[ctx_index].subcomponentsParallel;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[4];
FrElement lvar[66];
uint sub_component_aux;
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[94]);
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[22]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[23]);
}
{
PFrElement aux_dest = &lvar[3];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[24]);
}
{
PFrElement aux_dest = &lvar[4];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[25]);
}
{
PFrElement aux_dest = &lvar[5];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[26]);
}
{
PFrElement aux_dest = &lvar[6];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[27]);
}
{
PFrElement aux_dest = &lvar[7];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[28]);
}
{
PFrElement aux_dest = &lvar[8];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[29]);
}
{
PFrElement aux_dest = &lvar[9];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[31]);
}
{
PFrElement aux_dest = &lvar[10];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[33]);
}
{
PFrElement aux_dest = &lvar[11];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[34]);
}
{
PFrElement aux_dest = &lvar[12];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[36]);
}
{
PFrElement aux_dest = &lvar[13];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[38]);
}
{
PFrElement aux_dest = &lvar[14];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[40]);
}
{
PFrElement aux_dest = &lvar[15];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[42]);
}
{
PFrElement aux_dest = &lvar[16];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[44]);
}
{
PFrElement aux_dest = &lvar[17];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[46]);
}
{
PFrElement aux_dest = &lvar[18];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[47]);
}
{
PFrElement aux_dest = &lvar[19];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[48]);
}
{
PFrElement aux_dest = &lvar[20];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[49]);
}
{
PFrElement aux_dest = &lvar[21];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[51]);
}
{
PFrElement aux_dest = &lvar[22];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[53]);
}
{
PFrElement aux_dest = &lvar[23];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[55]);
}
{
PFrElement aux_dest = &lvar[24];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[57]);
}
{
PFrElement aux_dest = &lvar[25];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[59]);
}
{
PFrElement aux_dest = &lvar[26];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[61]);
}
{
PFrElement aux_dest = &lvar[27];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[63]);
}
{
PFrElement aux_dest = &lvar[28];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[65]);
}
{
PFrElement aux_dest = &lvar[29];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[67]);
}
{
PFrElement aux_dest = &lvar[30];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[69]);
}
{
PFrElement aux_dest = &lvar[31];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[71]);
}
{
PFrElement aux_dest = &lvar[32];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[73]);
}
{
PFrElement aux_dest = &lvar[33];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[74]);
}
{
PFrElement aux_dest = &lvar[34];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[76]);
}
{
PFrElement aux_dest = &lvar[35];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[77]);
}
{
PFrElement aux_dest = &lvar[36];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[79]);
}
{
PFrElement aux_dest = &lvar[37];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[81]);
}
{
PFrElement aux_dest = &lvar[38];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[83]);
}
{
PFrElement aux_dest = &lvar[39];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[85]);
}
{
PFrElement aux_dest = &lvar[40];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[87]);
}
{
PFrElement aux_dest = &lvar[41];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[89]);
}
{
PFrElement aux_dest = &lvar[42];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[91]);
}
{
PFrElement aux_dest = &lvar[43];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[93]);
}
{
PFrElement aux_dest = &lvar[44];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[95]);
}
{
PFrElement aux_dest = &lvar[45];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[97]);
}
{
PFrElement aux_dest = &lvar[46];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[99]);
}
{
PFrElement aux_dest = &lvar[47];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[101]);
}
{
PFrElement aux_dest = &lvar[48];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[103]);
}
{
PFrElement aux_dest = &lvar[49];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[105]);
}
{
PFrElement aux_dest = &lvar[50];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[107]);
}
{
PFrElement aux_dest = &lvar[51];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[109]);
}
{
PFrElement aux_dest = &lvar[52];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[111]);
}
{
PFrElement aux_dest = &lvar[53];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[113]);
}
{
PFrElement aux_dest = &lvar[54];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[115]);
}
{
PFrElement aux_dest = &lvar[55];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[117]);
}
{
PFrElement aux_dest = &lvar[56];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[119]);
}
{
PFrElement aux_dest = &lvar[57];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[121]);
}
{
PFrElement aux_dest = &lvar[58];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[123]);
}
{
PFrElement aux_dest = &lvar[59];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[125]);
}
{
PFrElement aux_dest = &lvar[60];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[127]);
}
{
PFrElement aux_dest = &lvar[61];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[129]);
}
{
PFrElement aux_dest = &lvar[62];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[131]);
}
{
PFrElement aux_dest = &lvar[63];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[133]);
}
{
PFrElement aux_dest = &lvar[64];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[135]);
}
{
PFrElement aux_dest = &lvar[65];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[65],&circuitConstants[16]); // line circom 50
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[65])) + 0)];
// load src
Fr_shr(&expaux[1],&circuitConstants[95],&lvar[65]); // line circom 51
Fr_band(&expaux[0],&expaux[1],&circuitConstants[2]); // line circom 51
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[65];
// load src
Fr_add(&expaux[0],&lvar[65],&circuitConstants[2]); // line circom 50
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[65],&circuitConstants[16]); // line circom 50
}
}

void K_63_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 63;
ctx->componentMemory[coffset].templateName = "K";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 0;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[0];
K_63_run(coffset,ctx);
}

void K_63_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
bool* mySubcomponentsParallel = ctx->componentMemory[ctx_index].subcomponentsParallel;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[4];
FrElement lvar[66];
uint sub_component_aux;
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[96]);
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[22]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[23]);
}
{
PFrElement aux_dest = &lvar[3];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[24]);
}
{
PFrElement aux_dest = &lvar[4];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[25]);
}
{
PFrElement aux_dest = &lvar[5];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[26]);
}
{
PFrElement aux_dest = &lvar[6];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[27]);
}
{
PFrElement aux_dest = &lvar[7];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[28]);
}
{
PFrElement aux_dest = &lvar[8];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[29]);
}
{
PFrElement aux_dest = &lvar[9];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[31]);
}
{
PFrElement aux_dest = &lvar[10];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[33]);
}
{
PFrElement aux_dest = &lvar[11];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[34]);
}
{
PFrElement aux_dest = &lvar[12];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[36]);
}
{
PFrElement aux_dest = &lvar[13];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[38]);
}
{
PFrElement aux_dest = &lvar[14];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[40]);
}
{
PFrElement aux_dest = &lvar[15];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[42]);
}
{
PFrElement aux_dest = &lvar[16];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[44]);
}
{
PFrElement aux_dest = &lvar[17];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[46]);
}
{
PFrElement aux_dest = &lvar[18];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[47]);
}
{
PFrElement aux_dest = &lvar[19];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[48]);
}
{
PFrElement aux_dest = &lvar[20];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[49]);
}
{
PFrElement aux_dest = &lvar[21];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[51]);
}
{
PFrElement aux_dest = &lvar[22];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[53]);
}
{
PFrElement aux_dest = &lvar[23];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[55]);
}
{
PFrElement aux_dest = &lvar[24];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[57]);
}
{
PFrElement aux_dest = &lvar[25];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[59]);
}
{
PFrElement aux_dest = &lvar[26];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[61]);
}
{
PFrElement aux_dest = &lvar[27];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[63]);
}
{
PFrElement aux_dest = &lvar[28];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[65]);
}
{
PFrElement aux_dest = &lvar[29];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[67]);
}
{
PFrElement aux_dest = &lvar[30];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[69]);
}
{
PFrElement aux_dest = &lvar[31];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[71]);
}
{
PFrElement aux_dest = &lvar[32];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[73]);
}
{
PFrElement aux_dest = &lvar[33];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[74]);
}
{
PFrElement aux_dest = &lvar[34];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[76]);
}
{
PFrElement aux_dest = &lvar[35];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[77]);
}
{
PFrElement aux_dest = &lvar[36];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[79]);
}
{
PFrElement aux_dest = &lvar[37];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[81]);
}
{
PFrElement aux_dest = &lvar[38];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[83]);
}
{
PFrElement aux_dest = &lvar[39];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[85]);
}
{
PFrElement aux_dest = &lvar[40];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[87]);
}
{
PFrElement aux_dest = &lvar[41];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[89]);
}
{
PFrElement aux_dest = &lvar[42];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[91]);
}
{
PFrElement aux_dest = &lvar[43];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[93]);
}
{
PFrElement aux_dest = &lvar[44];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[95]);
}
{
PFrElement aux_dest = &lvar[45];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[97]);
}
{
PFrElement aux_dest = &lvar[46];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[99]);
}
{
PFrElement aux_dest = &lvar[47];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[101]);
}
{
PFrElement aux_dest = &lvar[48];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[103]);
}
{
PFrElement aux_dest = &lvar[49];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[105]);
}
{
PFrElement aux_dest = &lvar[50];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[107]);
}
{
PFrElement aux_dest = &lvar[51];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[109]);
}
{
PFrElement aux_dest = &lvar[52];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[111]);
}
{
PFrElement aux_dest = &lvar[53];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[113]);
}
{
PFrElement aux_dest = &lvar[54];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[115]);
}
{
PFrElement aux_dest = &lvar[55];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[117]);
}
{
PFrElement aux_dest = &lvar[56];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[119]);
}
{
PFrElement aux_dest = &lvar[57];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[121]);
}
{
PFrElement aux_dest = &lvar[58];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[123]);
}
{
PFrElement aux_dest = &lvar[59];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[125]);
}
{
PFrElement aux_dest = &lvar[60];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[127]);
}
{
PFrElement aux_dest = &lvar[61];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[129]);
}
{
PFrElement aux_dest = &lvar[62];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[131]);
}
{
PFrElement aux_dest = &lvar[63];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[133]);
}
{
PFrElement aux_dest = &lvar[64];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[135]);
}
{
PFrElement aux_dest = &lvar[65];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[65],&circuitConstants[16]); // line circom 50
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[65])) + 0)];
// load src
Fr_shr(&expaux[1],&circuitConstants[97],&lvar[65]); // line circom 51
Fr_band(&expaux[0],&expaux[1],&circuitConstants[2]); // line circom 51
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[65];
// load src
Fr_add(&expaux[0],&lvar[65],&circuitConstants[2]); // line circom 50
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[65],&circuitConstants[16]); // line circom 50
}
}

void K_64_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 64;
ctx->componentMemory[coffset].templateName = "K";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 0;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[0];
K_64_run(coffset,ctx);
}

void K_64_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
bool* mySubcomponentsParallel = ctx->componentMemory[ctx_index].subcomponentsParallel;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[4];
FrElement lvar[66];
uint sub_component_aux;
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[98]);
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[22]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[23]);
}
{
PFrElement aux_dest = &lvar[3];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[24]);
}
{
PFrElement aux_dest = &lvar[4];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[25]);
}
{
PFrElement aux_dest = &lvar[5];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[26]);
}
{
PFrElement aux_dest = &lvar[6];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[27]);
}
{
PFrElement aux_dest = &lvar[7];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[28]);
}
{
PFrElement aux_dest = &lvar[8];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[29]);
}
{
PFrElement aux_dest = &lvar[9];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[31]);
}
{
PFrElement aux_dest = &lvar[10];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[33]);
}
{
PFrElement aux_dest = &lvar[11];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[34]);
}
{
PFrElement aux_dest = &lvar[12];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[36]);
}
{
PFrElement aux_dest = &lvar[13];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[38]);
}
{
PFrElement aux_dest = &lvar[14];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[40]);
}
{
PFrElement aux_dest = &lvar[15];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[42]);
}
{
PFrElement aux_dest = &lvar[16];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[44]);
}
{
PFrElement aux_dest = &lvar[17];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[46]);
}
{
PFrElement aux_dest = &lvar[18];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[47]);
}
{
PFrElement aux_dest = &lvar[19];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[48]);
}
{
PFrElement aux_dest = &lvar[20];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[49]);
}
{
PFrElement aux_dest = &lvar[21];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[51]);
}
{
PFrElement aux_dest = &lvar[22];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[53]);
}
{
PFrElement aux_dest = &lvar[23];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[55]);
}
{
PFrElement aux_dest = &lvar[24];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[57]);
}
{
PFrElement aux_dest = &lvar[25];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[59]);
}
{
PFrElement aux_dest = &lvar[26];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[61]);
}
{
PFrElement aux_dest = &lvar[27];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[63]);
}
{
PFrElement aux_dest = &lvar[28];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[65]);
}
{
PFrElement aux_dest = &lvar[29];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[67]);
}
{
PFrElement aux_dest = &lvar[30];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[69]);
}
{
PFrElement aux_dest = &lvar[31];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[71]);
}
{
PFrElement aux_dest = &lvar[32];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[73]);
}
{
PFrElement aux_dest = &lvar[33];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[74]);
}
{
PFrElement aux_dest = &lvar[34];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[76]);
}
{
PFrElement aux_dest = &lvar[35];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[77]);
}
{
PFrElement aux_dest = &lvar[36];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[79]);
}
{
PFrElement aux_dest = &lvar[37];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[81]);
}
{
PFrElement aux_dest = &lvar[38];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[83]);
}
{
PFrElement aux_dest = &lvar[39];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[85]);
}
{
PFrElement aux_dest = &lvar[40];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[87]);
}
{
PFrElement aux_dest = &lvar[41];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[89]);
}
{
PFrElement aux_dest = &lvar[42];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[91]);
}
{
PFrElement aux_dest = &lvar[43];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[93]);
}
{
PFrElement aux_dest = &lvar[44];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[95]);
}
{
PFrElement aux_dest = &lvar[45];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[97]);
}
{
PFrElement aux_dest = &lvar[46];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[99]);
}
{
PFrElement aux_dest = &lvar[47];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[101]);
}
{
PFrElement aux_dest = &lvar[48];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[103]);
}
{
PFrElement aux_dest = &lvar[49];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[105]);
}
{
PFrElement aux_dest = &lvar[50];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[107]);
}
{
PFrElement aux_dest = &lvar[51];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[109]);
}
{
PFrElement aux_dest = &lvar[52];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[111]);
}
{
PFrElement aux_dest = &lvar[53];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[113]);
}
{
PFrElement aux_dest = &lvar[54];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[115]);
}
{
PFrElement aux_dest = &lvar[55];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[117]);
}
{
PFrElement aux_dest = &lvar[56];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[119]);
}
{
PFrElement aux_dest = &lvar[57];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[121]);
}
{
PFrElement aux_dest = &lvar[58];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[123]);
}
{
PFrElement aux_dest = &lvar[59];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[125]);
}
{
PFrElement aux_dest = &lvar[60];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[127]);
}
{
PFrElement aux_dest = &lvar[61];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[129]);
}
{
PFrElement aux_dest = &lvar[62];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[131]);
}
{
PFrElement aux_dest = &lvar[63];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[133]);
}
{
PFrElement aux_dest = &lvar[64];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[135]);
}
{
PFrElement aux_dest = &lvar[65];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[65],&circuitConstants[16]); // line circom 50
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[65])) + 0)];
// load src
Fr_shr(&expaux[1],&circuitConstants[99],&lvar[65]); // line circom 51
Fr_band(&expaux[0],&expaux[1],&circuitConstants[2]); // line circom 51
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[65];
// load src
Fr_add(&expaux[0],&lvar[65],&circuitConstants[2]); // line circom 50
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[65],&circuitConstants[16]); // line circom 50
}
}

void K_65_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 65;
ctx->componentMemory[coffset].templateName = "K";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 0;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[0];
K_65_run(coffset,ctx);
}

void K_65_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
bool* mySubcomponentsParallel = ctx->componentMemory[ctx_index].subcomponentsParallel;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[4];
FrElement lvar[66];
uint sub_component_aux;
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[100]);
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[22]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[23]);
}
{
PFrElement aux_dest = &lvar[3];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[24]);
}
{
PFrElement aux_dest = &lvar[4];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[25]);
}
{
PFrElement aux_dest = &lvar[5];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[26]);
}
{
PFrElement aux_dest = &lvar[6];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[27]);
}
{
PFrElement aux_dest = &lvar[7];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[28]);
}
{
PFrElement aux_dest = &lvar[8];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[29]);
}
{
PFrElement aux_dest = &lvar[9];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[31]);
}
{
PFrElement aux_dest = &lvar[10];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[33]);
}
{
PFrElement aux_dest = &lvar[11];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[34]);
}
{
PFrElement aux_dest = &lvar[12];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[36]);
}
{
PFrElement aux_dest = &lvar[13];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[38]);
}
{
PFrElement aux_dest = &lvar[14];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[40]);
}
{
PFrElement aux_dest = &lvar[15];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[42]);
}
{
PFrElement aux_dest = &lvar[16];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[44]);
}
{
PFrElement aux_dest = &lvar[17];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[46]);
}
{
PFrElement aux_dest = &lvar[18];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[47]);
}
{
PFrElement aux_dest = &lvar[19];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[48]);
}
{
PFrElement aux_dest = &lvar[20];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[49]);
}
{
PFrElement aux_dest = &lvar[21];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[51]);
}
{
PFrElement aux_dest = &lvar[22];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[53]);
}
{
PFrElement aux_dest = &lvar[23];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[55]);
}
{
PFrElement aux_dest = &lvar[24];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[57]);
}
{
PFrElement aux_dest = &lvar[25];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[59]);
}
{
PFrElement aux_dest = &lvar[26];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[61]);
}
{
PFrElement aux_dest = &lvar[27];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[63]);
}
{
PFrElement aux_dest = &lvar[28];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[65]);
}
{
PFrElement aux_dest = &lvar[29];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[67]);
}
{
PFrElement aux_dest = &lvar[30];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[69]);
}
{
PFrElement aux_dest = &lvar[31];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[71]);
}
{
PFrElement aux_dest = &lvar[32];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[73]);
}
{
PFrElement aux_dest = &lvar[33];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[74]);
}
{
PFrElement aux_dest = &lvar[34];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[76]);
}
{
PFrElement aux_dest = &lvar[35];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[77]);
}
{
PFrElement aux_dest = &lvar[36];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[79]);
}
{
PFrElement aux_dest = &lvar[37];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[81]);
}
{
PFrElement aux_dest = &lvar[38];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[83]);
}
{
PFrElement aux_dest = &lvar[39];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[85]);
}
{
PFrElement aux_dest = &lvar[40];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[87]);
}
{
PFrElement aux_dest = &lvar[41];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[89]);
}
{
PFrElement aux_dest = &lvar[42];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[91]);
}
{
PFrElement aux_dest = &lvar[43];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[93]);
}
{
PFrElement aux_dest = &lvar[44];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[95]);
}
{
PFrElement aux_dest = &lvar[45];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[97]);
}
{
PFrElement aux_dest = &lvar[46];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[99]);
}
{
PFrElement aux_dest = &lvar[47];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[101]);
}
{
PFrElement aux_dest = &lvar[48];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[103]);
}
{
PFrElement aux_dest = &lvar[49];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[105]);
}
{
PFrElement aux_dest = &lvar[50];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[107]);
}
{
PFrElement aux_dest = &lvar[51];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[109]);
}
{
PFrElement aux_dest = &lvar[52];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[111]);
}
{
PFrElement aux_dest = &lvar[53];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[113]);
}
{
PFrElement aux_dest = &lvar[54];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[115]);
}
{
PFrElement aux_dest = &lvar[55];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[117]);
}
{
PFrElement aux_dest = &lvar[56];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[119]);
}
{
PFrElement aux_dest = &lvar[57];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[121]);
}
{
PFrElement aux_dest = &lvar[58];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[123]);
}
{
PFrElement aux_dest = &lvar[59];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[125]);
}
{
PFrElement aux_dest = &lvar[60];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[127]);
}
{
PFrElement aux_dest = &lvar[61];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[129]);
}
{
PFrElement aux_dest = &lvar[62];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[131]);
}
{
PFrElement aux_dest = &lvar[63];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[133]);
}
{
PFrElement aux_dest = &lvar[64];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[135]);
}
{
PFrElement aux_dest = &lvar[65];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[65],&circuitConstants[16]); // line circom 50
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[65])) + 0)];
// load src
Fr_shr(&expaux[1],&circuitConstants[101],&lvar[65]); // line circom 51
Fr_band(&expaux[0],&expaux[1],&circuitConstants[2]); // line circom 51
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[65];
// load src
Fr_add(&expaux[0],&lvar[65],&circuitConstants[2]); // line circom 50
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[65],&circuitConstants[16]); // line circom 50
}
}

void K_66_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 66;
ctx->componentMemory[coffset].templateName = "K";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 0;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[0];
K_66_run(coffset,ctx);
}

void K_66_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
bool* mySubcomponentsParallel = ctx->componentMemory[ctx_index].subcomponentsParallel;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[4];
FrElement lvar[66];
uint sub_component_aux;
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[102]);
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[22]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[23]);
}
{
PFrElement aux_dest = &lvar[3];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[24]);
}
{
PFrElement aux_dest = &lvar[4];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[25]);
}
{
PFrElement aux_dest = &lvar[5];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[26]);
}
{
PFrElement aux_dest = &lvar[6];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[27]);
}
{
PFrElement aux_dest = &lvar[7];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[28]);
}
{
PFrElement aux_dest = &lvar[8];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[29]);
}
{
PFrElement aux_dest = &lvar[9];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[31]);
}
{
PFrElement aux_dest = &lvar[10];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[33]);
}
{
PFrElement aux_dest = &lvar[11];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[34]);
}
{
PFrElement aux_dest = &lvar[12];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[36]);
}
{
PFrElement aux_dest = &lvar[13];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[38]);
}
{
PFrElement aux_dest = &lvar[14];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[40]);
}
{
PFrElement aux_dest = &lvar[15];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[42]);
}
{
PFrElement aux_dest = &lvar[16];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[44]);
}
{
PFrElement aux_dest = &lvar[17];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[46]);
}
{
PFrElement aux_dest = &lvar[18];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[47]);
}
{
PFrElement aux_dest = &lvar[19];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[48]);
}
{
PFrElement aux_dest = &lvar[20];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[49]);
}
{
PFrElement aux_dest = &lvar[21];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[51]);
}
{
PFrElement aux_dest = &lvar[22];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[53]);
}
{
PFrElement aux_dest = &lvar[23];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[55]);
}
{
PFrElement aux_dest = &lvar[24];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[57]);
}
{
PFrElement aux_dest = &lvar[25];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[59]);
}
{
PFrElement aux_dest = &lvar[26];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[61]);
}
{
PFrElement aux_dest = &lvar[27];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[63]);
}
{
PFrElement aux_dest = &lvar[28];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[65]);
}
{
PFrElement aux_dest = &lvar[29];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[67]);
}
{
PFrElement aux_dest = &lvar[30];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[69]);
}
{
PFrElement aux_dest = &lvar[31];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[71]);
}
{
PFrElement aux_dest = &lvar[32];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[73]);
}
{
PFrElement aux_dest = &lvar[33];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[74]);
}
{
PFrElement aux_dest = &lvar[34];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[76]);
}
{
PFrElement aux_dest = &lvar[35];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[77]);
}
{
PFrElement aux_dest = &lvar[36];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[79]);
}
{
PFrElement aux_dest = &lvar[37];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[81]);
}
{
PFrElement aux_dest = &lvar[38];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[83]);
}
{
PFrElement aux_dest = &lvar[39];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[85]);
}
{
PFrElement aux_dest = &lvar[40];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[87]);
}
{
PFrElement aux_dest = &lvar[41];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[89]);
}
{
PFrElement aux_dest = &lvar[42];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[91]);
}
{
PFrElement aux_dest = &lvar[43];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[93]);
}
{
PFrElement aux_dest = &lvar[44];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[95]);
}
{
PFrElement aux_dest = &lvar[45];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[97]);
}
{
PFrElement aux_dest = &lvar[46];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[99]);
}
{
PFrElement aux_dest = &lvar[47];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[101]);
}
{
PFrElement aux_dest = &lvar[48];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[103]);
}
{
PFrElement aux_dest = &lvar[49];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[105]);
}
{
PFrElement aux_dest = &lvar[50];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[107]);
}
{
PFrElement aux_dest = &lvar[51];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[109]);
}
{
PFrElement aux_dest = &lvar[52];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[111]);
}
{
PFrElement aux_dest = &lvar[53];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[113]);
}
{
PFrElement aux_dest = &lvar[54];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[115]);
}
{
PFrElement aux_dest = &lvar[55];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[117]);
}
{
PFrElement aux_dest = &lvar[56];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[119]);
}
{
PFrElement aux_dest = &lvar[57];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[121]);
}
{
PFrElement aux_dest = &lvar[58];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[123]);
}
{
PFrElement aux_dest = &lvar[59];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[125]);
}
{
PFrElement aux_dest = &lvar[60];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[127]);
}
{
PFrElement aux_dest = &lvar[61];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[129]);
}
{
PFrElement aux_dest = &lvar[62];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[131]);
}
{
PFrElement aux_dest = &lvar[63];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[133]);
}
{
PFrElement aux_dest = &lvar[64];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[135]);
}
{
PFrElement aux_dest = &lvar[65];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[65],&circuitConstants[16]); // line circom 50
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[65])) + 0)];
// load src
Fr_shr(&expaux[1],&circuitConstants[103],&lvar[65]); // line circom 51
Fr_band(&expaux[0],&expaux[1],&circuitConstants[2]); // line circom 51
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[65];
// load src
Fr_add(&expaux[0],&lvar[65],&circuitConstants[2]); // line circom 50
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[65],&circuitConstants[16]); // line circom 50
}
}

void K_67_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 67;
ctx->componentMemory[coffset].templateName = "K";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 0;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[0];
K_67_run(coffset,ctx);
}

void K_67_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
bool* mySubcomponentsParallel = ctx->componentMemory[ctx_index].subcomponentsParallel;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[4];
FrElement lvar[66];
uint sub_component_aux;
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[104]);
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[22]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[23]);
}
{
PFrElement aux_dest = &lvar[3];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[24]);
}
{
PFrElement aux_dest = &lvar[4];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[25]);
}
{
PFrElement aux_dest = &lvar[5];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[26]);
}
{
PFrElement aux_dest = &lvar[6];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[27]);
}
{
PFrElement aux_dest = &lvar[7];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[28]);
}
{
PFrElement aux_dest = &lvar[8];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[29]);
}
{
PFrElement aux_dest = &lvar[9];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[31]);
}
{
PFrElement aux_dest = &lvar[10];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[33]);
}
{
PFrElement aux_dest = &lvar[11];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[34]);
}
{
PFrElement aux_dest = &lvar[12];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[36]);
}
{
PFrElement aux_dest = &lvar[13];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[38]);
}
{
PFrElement aux_dest = &lvar[14];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[40]);
}
{
PFrElement aux_dest = &lvar[15];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[42]);
}
{
PFrElement aux_dest = &lvar[16];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[44]);
}
{
PFrElement aux_dest = &lvar[17];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[46]);
}
{
PFrElement aux_dest = &lvar[18];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[47]);
}
{
PFrElement aux_dest = &lvar[19];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[48]);
}
{
PFrElement aux_dest = &lvar[20];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[49]);
}
{
PFrElement aux_dest = &lvar[21];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[51]);
}
{
PFrElement aux_dest = &lvar[22];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[53]);
}
{
PFrElement aux_dest = &lvar[23];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[55]);
}
{
PFrElement aux_dest = &lvar[24];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[57]);
}
{
PFrElement aux_dest = &lvar[25];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[59]);
}
{
PFrElement aux_dest = &lvar[26];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[61]);
}
{
PFrElement aux_dest = &lvar[27];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[63]);
}
{
PFrElement aux_dest = &lvar[28];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[65]);
}
{
PFrElement aux_dest = &lvar[29];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[67]);
}
{
PFrElement aux_dest = &lvar[30];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[69]);
}
{
PFrElement aux_dest = &lvar[31];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[71]);
}
{
PFrElement aux_dest = &lvar[32];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[73]);
}
{
PFrElement aux_dest = &lvar[33];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[74]);
}
{
PFrElement aux_dest = &lvar[34];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[76]);
}
{
PFrElement aux_dest = &lvar[35];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[77]);
}
{
PFrElement aux_dest = &lvar[36];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[79]);
}
{
PFrElement aux_dest = &lvar[37];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[81]);
}
{
PFrElement aux_dest = &lvar[38];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[83]);
}
{
PFrElement aux_dest = &lvar[39];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[85]);
}
{
PFrElement aux_dest = &lvar[40];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[87]);
}
{
PFrElement aux_dest = &lvar[41];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[89]);
}
{
PFrElement aux_dest = &lvar[42];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[91]);
}
{
PFrElement aux_dest = &lvar[43];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[93]);
}
{
PFrElement aux_dest = &lvar[44];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[95]);
}
{
PFrElement aux_dest = &lvar[45];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[97]);
}
{
PFrElement aux_dest = &lvar[46];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[99]);
}
{
PFrElement aux_dest = &lvar[47];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[101]);
}
{
PFrElement aux_dest = &lvar[48];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[103]);
}
{
PFrElement aux_dest = &lvar[49];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[105]);
}
{
PFrElement aux_dest = &lvar[50];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[107]);
}
{
PFrElement aux_dest = &lvar[51];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[109]);
}
{
PFrElement aux_dest = &lvar[52];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[111]);
}
{
PFrElement aux_dest = &lvar[53];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[113]);
}
{
PFrElement aux_dest = &lvar[54];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[115]);
}
{
PFrElement aux_dest = &lvar[55];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[117]);
}
{
PFrElement aux_dest = &lvar[56];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[119]);
}
{
PFrElement aux_dest = &lvar[57];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[121]);
}
{
PFrElement aux_dest = &lvar[58];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[123]);
}
{
PFrElement aux_dest = &lvar[59];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[125]);
}
{
PFrElement aux_dest = &lvar[60];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[127]);
}
{
PFrElement aux_dest = &lvar[61];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[129]);
}
{
PFrElement aux_dest = &lvar[62];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[131]);
}
{
PFrElement aux_dest = &lvar[63];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[133]);
}
{
PFrElement aux_dest = &lvar[64];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[135]);
}
{
PFrElement aux_dest = &lvar[65];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[65],&circuitConstants[16]); // line circom 50
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[65])) + 0)];
// load src
Fr_shr(&expaux[1],&circuitConstants[105],&lvar[65]); // line circom 51
Fr_band(&expaux[0],&expaux[1],&circuitConstants[2]); // line circom 51
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[65];
// load src
Fr_add(&expaux[0],&lvar[65],&circuitConstants[2]); // line circom 50
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[65],&circuitConstants[16]); // line circom 50
}
}

void K_68_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 68;
ctx->componentMemory[coffset].templateName = "K";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 0;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[0];
K_68_run(coffset,ctx);
}

void K_68_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
bool* mySubcomponentsParallel = ctx->componentMemory[ctx_index].subcomponentsParallel;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[4];
FrElement lvar[66];
uint sub_component_aux;
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[106]);
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[22]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[23]);
}
{
PFrElement aux_dest = &lvar[3];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[24]);
}
{
PFrElement aux_dest = &lvar[4];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[25]);
}
{
PFrElement aux_dest = &lvar[5];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[26]);
}
{
PFrElement aux_dest = &lvar[6];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[27]);
}
{
PFrElement aux_dest = &lvar[7];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[28]);
}
{
PFrElement aux_dest = &lvar[8];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[29]);
}
{
PFrElement aux_dest = &lvar[9];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[31]);
}
{
PFrElement aux_dest = &lvar[10];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[33]);
}
{
PFrElement aux_dest = &lvar[11];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[34]);
}
{
PFrElement aux_dest = &lvar[12];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[36]);
}
{
PFrElement aux_dest = &lvar[13];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[38]);
}
{
PFrElement aux_dest = &lvar[14];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[40]);
}
{
PFrElement aux_dest = &lvar[15];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[42]);
}
{
PFrElement aux_dest = &lvar[16];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[44]);
}
{
PFrElement aux_dest = &lvar[17];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[46]);
}
{
PFrElement aux_dest = &lvar[18];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[47]);
}
{
PFrElement aux_dest = &lvar[19];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[48]);
}
{
PFrElement aux_dest = &lvar[20];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[49]);
}
{
PFrElement aux_dest = &lvar[21];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[51]);
}
{
PFrElement aux_dest = &lvar[22];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[53]);
}
{
PFrElement aux_dest = &lvar[23];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[55]);
}
{
PFrElement aux_dest = &lvar[24];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[57]);
}
{
PFrElement aux_dest = &lvar[25];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[59]);
}
{
PFrElement aux_dest = &lvar[26];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[61]);
}
{
PFrElement aux_dest = &lvar[27];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[63]);
}
{
PFrElement aux_dest = &lvar[28];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[65]);
}
{
PFrElement aux_dest = &lvar[29];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[67]);
}
{
PFrElement aux_dest = &lvar[30];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[69]);
}
{
PFrElement aux_dest = &lvar[31];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[71]);
}
{
PFrElement aux_dest = &lvar[32];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[73]);
}
{
PFrElement aux_dest = &lvar[33];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[74]);
}
{
PFrElement aux_dest = &lvar[34];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[76]);
}
{
PFrElement aux_dest = &lvar[35];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[77]);
}
{
PFrElement aux_dest = &lvar[36];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[79]);
}
{
PFrElement aux_dest = &lvar[37];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[81]);
}
{
PFrElement aux_dest = &lvar[38];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[83]);
}
{
PFrElement aux_dest = &lvar[39];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[85]);
}
{
PFrElement aux_dest = &lvar[40];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[87]);
}
{
PFrElement aux_dest = &lvar[41];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[89]);
}
{
PFrElement aux_dest = &lvar[42];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[91]);
}
{
PFrElement aux_dest = &lvar[43];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[93]);
}
{
PFrElement aux_dest = &lvar[44];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[95]);
}
{
PFrElement aux_dest = &lvar[45];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[97]);
}
{
PFrElement aux_dest = &lvar[46];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[99]);
}
{
PFrElement aux_dest = &lvar[47];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[101]);
}
{
PFrElement aux_dest = &lvar[48];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[103]);
}
{
PFrElement aux_dest = &lvar[49];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[105]);
}
{
PFrElement aux_dest = &lvar[50];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[107]);
}
{
PFrElement aux_dest = &lvar[51];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[109]);
}
{
PFrElement aux_dest = &lvar[52];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[111]);
}
{
PFrElement aux_dest = &lvar[53];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[113]);
}
{
PFrElement aux_dest = &lvar[54];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[115]);
}
{
PFrElement aux_dest = &lvar[55];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[117]);
}
{
PFrElement aux_dest = &lvar[56];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[119]);
}
{
PFrElement aux_dest = &lvar[57];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[121]);
}
{
PFrElement aux_dest = &lvar[58];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[123]);
}
{
PFrElement aux_dest = &lvar[59];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[125]);
}
{
PFrElement aux_dest = &lvar[60];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[127]);
}
{
PFrElement aux_dest = &lvar[61];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[129]);
}
{
PFrElement aux_dest = &lvar[62];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[131]);
}
{
PFrElement aux_dest = &lvar[63];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[133]);
}
{
PFrElement aux_dest = &lvar[64];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[135]);
}
{
PFrElement aux_dest = &lvar[65];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[65],&circuitConstants[16]); // line circom 50
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[65])) + 0)];
// load src
Fr_shr(&expaux[1],&circuitConstants[107],&lvar[65]); // line circom 51
Fr_band(&expaux[0],&expaux[1],&circuitConstants[2]); // line circom 51
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[65];
// load src
Fr_add(&expaux[0],&lvar[65],&circuitConstants[2]); // line circom 50
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[65],&circuitConstants[16]); // line circom 50
}
}

void K_69_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 69;
ctx->componentMemory[coffset].templateName = "K";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 0;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[0];
K_69_run(coffset,ctx);
}

void K_69_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
bool* mySubcomponentsParallel = ctx->componentMemory[ctx_index].subcomponentsParallel;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[4];
FrElement lvar[66];
uint sub_component_aux;
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[108]);
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[22]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[23]);
}
{
PFrElement aux_dest = &lvar[3];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[24]);
}
{
PFrElement aux_dest = &lvar[4];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[25]);
}
{
PFrElement aux_dest = &lvar[5];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[26]);
}
{
PFrElement aux_dest = &lvar[6];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[27]);
}
{
PFrElement aux_dest = &lvar[7];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[28]);
}
{
PFrElement aux_dest = &lvar[8];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[29]);
}
{
PFrElement aux_dest = &lvar[9];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[31]);
}
{
PFrElement aux_dest = &lvar[10];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[33]);
}
{
PFrElement aux_dest = &lvar[11];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[34]);
}
{
PFrElement aux_dest = &lvar[12];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[36]);
}
{
PFrElement aux_dest = &lvar[13];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[38]);
}
{
PFrElement aux_dest = &lvar[14];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[40]);
}
{
PFrElement aux_dest = &lvar[15];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[42]);
}
{
PFrElement aux_dest = &lvar[16];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[44]);
}
{
PFrElement aux_dest = &lvar[17];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[46]);
}
{
PFrElement aux_dest = &lvar[18];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[47]);
}
{
PFrElement aux_dest = &lvar[19];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[48]);
}
{
PFrElement aux_dest = &lvar[20];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[49]);
}
{
PFrElement aux_dest = &lvar[21];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[51]);
}
{
PFrElement aux_dest = &lvar[22];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[53]);
}
{
PFrElement aux_dest = &lvar[23];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[55]);
}
{
PFrElement aux_dest = &lvar[24];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[57]);
}
{
PFrElement aux_dest = &lvar[25];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[59]);
}
{
PFrElement aux_dest = &lvar[26];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[61]);
}
{
PFrElement aux_dest = &lvar[27];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[63]);
}
{
PFrElement aux_dest = &lvar[28];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[65]);
}
{
PFrElement aux_dest = &lvar[29];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[67]);
}
{
PFrElement aux_dest = &lvar[30];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[69]);
}
{
PFrElement aux_dest = &lvar[31];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[71]);
}
{
PFrElement aux_dest = &lvar[32];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[73]);
}
{
PFrElement aux_dest = &lvar[33];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[74]);
}
{
PFrElement aux_dest = &lvar[34];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[76]);
}
{
PFrElement aux_dest = &lvar[35];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[77]);
}
{
PFrElement aux_dest = &lvar[36];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[79]);
}
{
PFrElement aux_dest = &lvar[37];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[81]);
}
{
PFrElement aux_dest = &lvar[38];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[83]);
}
{
PFrElement aux_dest = &lvar[39];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[85]);
}
{
PFrElement aux_dest = &lvar[40];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[87]);
}
{
PFrElement aux_dest = &lvar[41];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[89]);
}
{
PFrElement aux_dest = &lvar[42];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[91]);
}
{
PFrElement aux_dest = &lvar[43];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[93]);
}
{
PFrElement aux_dest = &lvar[44];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[95]);
}
{
PFrElement aux_dest = &lvar[45];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[97]);
}
{
PFrElement aux_dest = &lvar[46];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[99]);
}
{
PFrElement aux_dest = &lvar[47];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[101]);
}
{
PFrElement aux_dest = &lvar[48];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[103]);
}
{
PFrElement aux_dest = &lvar[49];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[105]);
}
{
PFrElement aux_dest = &lvar[50];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[107]);
}
{
PFrElement aux_dest = &lvar[51];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[109]);
}
{
PFrElement aux_dest = &lvar[52];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[111]);
}
{
PFrElement aux_dest = &lvar[53];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[113]);
}
{
PFrElement aux_dest = &lvar[54];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[115]);
}
{
PFrElement aux_dest = &lvar[55];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[117]);
}
{
PFrElement aux_dest = &lvar[56];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[119]);
}
{
PFrElement aux_dest = &lvar[57];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[121]);
}
{
PFrElement aux_dest = &lvar[58];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[123]);
}
{
PFrElement aux_dest = &lvar[59];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[125]);
}
{
PFrElement aux_dest = &lvar[60];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[127]);
}
{
PFrElement aux_dest = &lvar[61];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[129]);
}
{
PFrElement aux_dest = &lvar[62];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[131]);
}
{
PFrElement aux_dest = &lvar[63];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[133]);
}
{
PFrElement aux_dest = &lvar[64];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[135]);
}
{
PFrElement aux_dest = &lvar[65];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[65],&circuitConstants[16]); // line circom 50
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[65])) + 0)];
// load src
Fr_shr(&expaux[1],&circuitConstants[109],&lvar[65]); // line circom 51
Fr_band(&expaux[0],&expaux[1],&circuitConstants[2]); // line circom 51
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[65];
// load src
Fr_add(&expaux[0],&lvar[65],&circuitConstants[2]); // line circom 50
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[65],&circuitConstants[16]); // line circom 50
}
}

void K_70_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 70;
ctx->componentMemory[coffset].templateName = "K";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 0;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[0];
K_70_run(coffset,ctx);
}

void K_70_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
bool* mySubcomponentsParallel = ctx->componentMemory[ctx_index].subcomponentsParallel;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[4];
FrElement lvar[66];
uint sub_component_aux;
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[110]);
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[22]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[23]);
}
{
PFrElement aux_dest = &lvar[3];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[24]);
}
{
PFrElement aux_dest = &lvar[4];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[25]);
}
{
PFrElement aux_dest = &lvar[5];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[26]);
}
{
PFrElement aux_dest = &lvar[6];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[27]);
}
{
PFrElement aux_dest = &lvar[7];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[28]);
}
{
PFrElement aux_dest = &lvar[8];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[29]);
}
{
PFrElement aux_dest = &lvar[9];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[31]);
}
{
PFrElement aux_dest = &lvar[10];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[33]);
}
{
PFrElement aux_dest = &lvar[11];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[34]);
}
{
PFrElement aux_dest = &lvar[12];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[36]);
}
{
PFrElement aux_dest = &lvar[13];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[38]);
}
{
PFrElement aux_dest = &lvar[14];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[40]);
}
{
PFrElement aux_dest = &lvar[15];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[42]);
}
{
PFrElement aux_dest = &lvar[16];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[44]);
}
{
PFrElement aux_dest = &lvar[17];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[46]);
}
{
PFrElement aux_dest = &lvar[18];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[47]);
}
{
PFrElement aux_dest = &lvar[19];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[48]);
}
{
PFrElement aux_dest = &lvar[20];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[49]);
}
{
PFrElement aux_dest = &lvar[21];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[51]);
}
{
PFrElement aux_dest = &lvar[22];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[53]);
}
{
PFrElement aux_dest = &lvar[23];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[55]);
}
{
PFrElement aux_dest = &lvar[24];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[57]);
}
{
PFrElement aux_dest = &lvar[25];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[59]);
}
{
PFrElement aux_dest = &lvar[26];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[61]);
}
{
PFrElement aux_dest = &lvar[27];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[63]);
}
{
PFrElement aux_dest = &lvar[28];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[65]);
}
{
PFrElement aux_dest = &lvar[29];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[67]);
}
{
PFrElement aux_dest = &lvar[30];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[69]);
}
{
PFrElement aux_dest = &lvar[31];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[71]);
}
{
PFrElement aux_dest = &lvar[32];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[73]);
}
{
PFrElement aux_dest = &lvar[33];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[74]);
}
{
PFrElement aux_dest = &lvar[34];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[76]);
}
{
PFrElement aux_dest = &lvar[35];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[77]);
}
{
PFrElement aux_dest = &lvar[36];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[79]);
}
{
PFrElement aux_dest = &lvar[37];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[81]);
}
{
PFrElement aux_dest = &lvar[38];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[83]);
}
{
PFrElement aux_dest = &lvar[39];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[85]);
}
{
PFrElement aux_dest = &lvar[40];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[87]);
}
{
PFrElement aux_dest = &lvar[41];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[89]);
}
{
PFrElement aux_dest = &lvar[42];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[91]);
}
{
PFrElement aux_dest = &lvar[43];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[93]);
}
{
PFrElement aux_dest = &lvar[44];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[95]);
}
{
PFrElement aux_dest = &lvar[45];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[97]);
}
{
PFrElement aux_dest = &lvar[46];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[99]);
}
{
PFrElement aux_dest = &lvar[47];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[101]);
}
{
PFrElement aux_dest = &lvar[48];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[103]);
}
{
PFrElement aux_dest = &lvar[49];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[105]);
}
{
PFrElement aux_dest = &lvar[50];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[107]);
}
{
PFrElement aux_dest = &lvar[51];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[109]);
}
{
PFrElement aux_dest = &lvar[52];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[111]);
}
{
PFrElement aux_dest = &lvar[53];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[113]);
}
{
PFrElement aux_dest = &lvar[54];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[115]);
}
{
PFrElement aux_dest = &lvar[55];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[117]);
}
{
PFrElement aux_dest = &lvar[56];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[119]);
}
{
PFrElement aux_dest = &lvar[57];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[121]);
}
{
PFrElement aux_dest = &lvar[58];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[123]);
}
{
PFrElement aux_dest = &lvar[59];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[125]);
}
{
PFrElement aux_dest = &lvar[60];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[127]);
}
{
PFrElement aux_dest = &lvar[61];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[129]);
}
{
PFrElement aux_dest = &lvar[62];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[131]);
}
{
PFrElement aux_dest = &lvar[63];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[133]);
}
{
PFrElement aux_dest = &lvar[64];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[135]);
}
{
PFrElement aux_dest = &lvar[65];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[65],&circuitConstants[16]); // line circom 50
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[65])) + 0)];
// load src
Fr_shr(&expaux[1],&circuitConstants[111],&lvar[65]); // line circom 51
Fr_band(&expaux[0],&expaux[1],&circuitConstants[2]); // line circom 51
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[65];
// load src
Fr_add(&expaux[0],&lvar[65],&circuitConstants[2]); // line circom 50
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[65],&circuitConstants[16]); // line circom 50
}
}

void K_71_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 71;
ctx->componentMemory[coffset].templateName = "K";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 0;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[0];
K_71_run(coffset,ctx);
}

void K_71_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
bool* mySubcomponentsParallel = ctx->componentMemory[ctx_index].subcomponentsParallel;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[4];
FrElement lvar[66];
uint sub_component_aux;
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[112]);
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[22]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[23]);
}
{
PFrElement aux_dest = &lvar[3];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[24]);
}
{
PFrElement aux_dest = &lvar[4];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[25]);
}
{
PFrElement aux_dest = &lvar[5];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[26]);
}
{
PFrElement aux_dest = &lvar[6];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[27]);
}
{
PFrElement aux_dest = &lvar[7];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[28]);
}
{
PFrElement aux_dest = &lvar[8];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[29]);
}
{
PFrElement aux_dest = &lvar[9];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[31]);
}
{
PFrElement aux_dest = &lvar[10];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[33]);
}
{
PFrElement aux_dest = &lvar[11];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[34]);
}
{
PFrElement aux_dest = &lvar[12];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[36]);
}
{
PFrElement aux_dest = &lvar[13];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[38]);
}
{
PFrElement aux_dest = &lvar[14];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[40]);
}
{
PFrElement aux_dest = &lvar[15];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[42]);
}
{
PFrElement aux_dest = &lvar[16];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[44]);
}
{
PFrElement aux_dest = &lvar[17];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[46]);
}
{
PFrElement aux_dest = &lvar[18];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[47]);
}
{
PFrElement aux_dest = &lvar[19];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[48]);
}
{
PFrElement aux_dest = &lvar[20];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[49]);
}
{
PFrElement aux_dest = &lvar[21];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[51]);
}
{
PFrElement aux_dest = &lvar[22];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[53]);
}
{
PFrElement aux_dest = &lvar[23];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[55]);
}
{
PFrElement aux_dest = &lvar[24];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[57]);
}
{
PFrElement aux_dest = &lvar[25];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[59]);
}
{
PFrElement aux_dest = &lvar[26];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[61]);
}
{
PFrElement aux_dest = &lvar[27];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[63]);
}
{
PFrElement aux_dest = &lvar[28];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[65]);
}
{
PFrElement aux_dest = &lvar[29];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[67]);
}
{
PFrElement aux_dest = &lvar[30];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[69]);
}
{
PFrElement aux_dest = &lvar[31];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[71]);
}
{
PFrElement aux_dest = &lvar[32];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[73]);
}
{
PFrElement aux_dest = &lvar[33];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[74]);
}
{
PFrElement aux_dest = &lvar[34];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[76]);
}
{
PFrElement aux_dest = &lvar[35];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[77]);
}
{
PFrElement aux_dest = &lvar[36];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[79]);
}
{
PFrElement aux_dest = &lvar[37];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[81]);
}
{
PFrElement aux_dest = &lvar[38];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[83]);
}
{
PFrElement aux_dest = &lvar[39];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[85]);
}
{
PFrElement aux_dest = &lvar[40];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[87]);
}
{
PFrElement aux_dest = &lvar[41];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[89]);
}
{
PFrElement aux_dest = &lvar[42];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[91]);
}
{
PFrElement aux_dest = &lvar[43];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[93]);
}
{
PFrElement aux_dest = &lvar[44];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[95]);
}
{
PFrElement aux_dest = &lvar[45];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[97]);
}
{
PFrElement aux_dest = &lvar[46];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[99]);
}
{
PFrElement aux_dest = &lvar[47];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[101]);
}
{
PFrElement aux_dest = &lvar[48];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[103]);
}
{
PFrElement aux_dest = &lvar[49];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[105]);
}
{
PFrElement aux_dest = &lvar[50];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[107]);
}
{
PFrElement aux_dest = &lvar[51];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[109]);
}
{
PFrElement aux_dest = &lvar[52];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[111]);
}
{
PFrElement aux_dest = &lvar[53];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[113]);
}
{
PFrElement aux_dest = &lvar[54];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[115]);
}
{
PFrElement aux_dest = &lvar[55];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[117]);
}
{
PFrElement aux_dest = &lvar[56];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[119]);
}
{
PFrElement aux_dest = &lvar[57];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[121]);
}
{
PFrElement aux_dest = &lvar[58];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[123]);
}
{
PFrElement aux_dest = &lvar[59];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[125]);
}
{
PFrElement aux_dest = &lvar[60];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[127]);
}
{
PFrElement aux_dest = &lvar[61];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[129]);
}
{
PFrElement aux_dest = &lvar[62];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[131]);
}
{
PFrElement aux_dest = &lvar[63];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[133]);
}
{
PFrElement aux_dest = &lvar[64];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[135]);
}
{
PFrElement aux_dest = &lvar[65];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[65],&circuitConstants[16]); // line circom 50
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[65])) + 0)];
// load src
Fr_shr(&expaux[1],&circuitConstants[113],&lvar[65]); // line circom 51
Fr_band(&expaux[0],&expaux[1],&circuitConstants[2]); // line circom 51
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[65];
// load src
Fr_add(&expaux[0],&lvar[65],&circuitConstants[2]); // line circom 50
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[65],&circuitConstants[16]); // line circom 50
}
}

void K_72_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 72;
ctx->componentMemory[coffset].templateName = "K";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 0;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[0];
K_72_run(coffset,ctx);
}

void K_72_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
bool* mySubcomponentsParallel = ctx->componentMemory[ctx_index].subcomponentsParallel;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[4];
FrElement lvar[66];
uint sub_component_aux;
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[114]);
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[22]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[23]);
}
{
PFrElement aux_dest = &lvar[3];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[24]);
}
{
PFrElement aux_dest = &lvar[4];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[25]);
}
{
PFrElement aux_dest = &lvar[5];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[26]);
}
{
PFrElement aux_dest = &lvar[6];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[27]);
}
{
PFrElement aux_dest = &lvar[7];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[28]);
}
{
PFrElement aux_dest = &lvar[8];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[29]);
}
{
PFrElement aux_dest = &lvar[9];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[31]);
}
{
PFrElement aux_dest = &lvar[10];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[33]);
}
{
PFrElement aux_dest = &lvar[11];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[34]);
}
{
PFrElement aux_dest = &lvar[12];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[36]);
}
{
PFrElement aux_dest = &lvar[13];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[38]);
}
{
PFrElement aux_dest = &lvar[14];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[40]);
}
{
PFrElement aux_dest = &lvar[15];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[42]);
}
{
PFrElement aux_dest = &lvar[16];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[44]);
}
{
PFrElement aux_dest = &lvar[17];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[46]);
}
{
PFrElement aux_dest = &lvar[18];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[47]);
}
{
PFrElement aux_dest = &lvar[19];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[48]);
}
{
PFrElement aux_dest = &lvar[20];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[49]);
}
{
PFrElement aux_dest = &lvar[21];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[51]);
}
{
PFrElement aux_dest = &lvar[22];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[53]);
}
{
PFrElement aux_dest = &lvar[23];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[55]);
}
{
PFrElement aux_dest = &lvar[24];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[57]);
}
{
PFrElement aux_dest = &lvar[25];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[59]);
}
{
PFrElement aux_dest = &lvar[26];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[61]);
}
{
PFrElement aux_dest = &lvar[27];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[63]);
}
{
PFrElement aux_dest = &lvar[28];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[65]);
}
{
PFrElement aux_dest = &lvar[29];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[67]);
}
{
PFrElement aux_dest = &lvar[30];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[69]);
}
{
PFrElement aux_dest = &lvar[31];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[71]);
}
{
PFrElement aux_dest = &lvar[32];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[73]);
}
{
PFrElement aux_dest = &lvar[33];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[74]);
}
{
PFrElement aux_dest = &lvar[34];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[76]);
}
{
PFrElement aux_dest = &lvar[35];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[77]);
}
{
PFrElement aux_dest = &lvar[36];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[79]);
}
{
PFrElement aux_dest = &lvar[37];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[81]);
}
{
PFrElement aux_dest = &lvar[38];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[83]);
}
{
PFrElement aux_dest = &lvar[39];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[85]);
}
{
PFrElement aux_dest = &lvar[40];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[87]);
}
{
PFrElement aux_dest = &lvar[41];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[89]);
}
{
PFrElement aux_dest = &lvar[42];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[91]);
}
{
PFrElement aux_dest = &lvar[43];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[93]);
}
{
PFrElement aux_dest = &lvar[44];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[95]);
}
{
PFrElement aux_dest = &lvar[45];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[97]);
}
{
PFrElement aux_dest = &lvar[46];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[99]);
}
{
PFrElement aux_dest = &lvar[47];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[101]);
}
{
PFrElement aux_dest = &lvar[48];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[103]);
}
{
PFrElement aux_dest = &lvar[49];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[105]);
}
{
PFrElement aux_dest = &lvar[50];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[107]);
}
{
PFrElement aux_dest = &lvar[51];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[109]);
}
{
PFrElement aux_dest = &lvar[52];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[111]);
}
{
PFrElement aux_dest = &lvar[53];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[113]);
}
{
PFrElement aux_dest = &lvar[54];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[115]);
}
{
PFrElement aux_dest = &lvar[55];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[117]);
}
{
PFrElement aux_dest = &lvar[56];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[119]);
}
{
PFrElement aux_dest = &lvar[57];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[121]);
}
{
PFrElement aux_dest = &lvar[58];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[123]);
}
{
PFrElement aux_dest = &lvar[59];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[125]);
}
{
PFrElement aux_dest = &lvar[60];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[127]);
}
{
PFrElement aux_dest = &lvar[61];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[129]);
}
{
PFrElement aux_dest = &lvar[62];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[131]);
}
{
PFrElement aux_dest = &lvar[63];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[133]);
}
{
PFrElement aux_dest = &lvar[64];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[135]);
}
{
PFrElement aux_dest = &lvar[65];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[65],&circuitConstants[16]); // line circom 50
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[65])) + 0)];
// load src
Fr_shr(&expaux[1],&circuitConstants[115],&lvar[65]); // line circom 51
Fr_band(&expaux[0],&expaux[1],&circuitConstants[2]); // line circom 51
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[65];
// load src
Fr_add(&expaux[0],&lvar[65],&circuitConstants[2]); // line circom 50
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[65],&circuitConstants[16]); // line circom 50
}
}

void K_73_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 73;
ctx->componentMemory[coffset].templateName = "K";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 0;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[0];
K_73_run(coffset,ctx);
}

void K_73_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
bool* mySubcomponentsParallel = ctx->componentMemory[ctx_index].subcomponentsParallel;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[4];
FrElement lvar[66];
uint sub_component_aux;
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[116]);
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[22]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[23]);
}
{
PFrElement aux_dest = &lvar[3];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[24]);
}
{
PFrElement aux_dest = &lvar[4];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[25]);
}
{
PFrElement aux_dest = &lvar[5];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[26]);
}
{
PFrElement aux_dest = &lvar[6];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[27]);
}
{
PFrElement aux_dest = &lvar[7];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[28]);
}
{
PFrElement aux_dest = &lvar[8];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[29]);
}
{
PFrElement aux_dest = &lvar[9];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[31]);
}
{
PFrElement aux_dest = &lvar[10];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[33]);
}
{
PFrElement aux_dest = &lvar[11];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[34]);
}
{
PFrElement aux_dest = &lvar[12];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[36]);
}
{
PFrElement aux_dest = &lvar[13];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[38]);
}
{
PFrElement aux_dest = &lvar[14];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[40]);
}
{
PFrElement aux_dest = &lvar[15];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[42]);
}
{
PFrElement aux_dest = &lvar[16];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[44]);
}
{
PFrElement aux_dest = &lvar[17];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[46]);
}
{
PFrElement aux_dest = &lvar[18];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[47]);
}
{
PFrElement aux_dest = &lvar[19];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[48]);
}
{
PFrElement aux_dest = &lvar[20];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[49]);
}
{
PFrElement aux_dest = &lvar[21];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[51]);
}
{
PFrElement aux_dest = &lvar[22];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[53]);
}
{
PFrElement aux_dest = &lvar[23];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[55]);
}
{
PFrElement aux_dest = &lvar[24];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[57]);
}
{
PFrElement aux_dest = &lvar[25];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[59]);
}
{
PFrElement aux_dest = &lvar[26];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[61]);
}
{
PFrElement aux_dest = &lvar[27];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[63]);
}
{
PFrElement aux_dest = &lvar[28];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[65]);
}
{
PFrElement aux_dest = &lvar[29];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[67]);
}
{
PFrElement aux_dest = &lvar[30];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[69]);
}
{
PFrElement aux_dest = &lvar[31];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[71]);
}
{
PFrElement aux_dest = &lvar[32];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[73]);
}
{
PFrElement aux_dest = &lvar[33];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[74]);
}
{
PFrElement aux_dest = &lvar[34];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[76]);
}
{
PFrElement aux_dest = &lvar[35];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[77]);
}
{
PFrElement aux_dest = &lvar[36];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[79]);
}
{
PFrElement aux_dest = &lvar[37];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[81]);
}
{
PFrElement aux_dest = &lvar[38];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[83]);
}
{
PFrElement aux_dest = &lvar[39];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[85]);
}
{
PFrElement aux_dest = &lvar[40];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[87]);
}
{
PFrElement aux_dest = &lvar[41];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[89]);
}
{
PFrElement aux_dest = &lvar[42];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[91]);
}
{
PFrElement aux_dest = &lvar[43];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[93]);
}
{
PFrElement aux_dest = &lvar[44];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[95]);
}
{
PFrElement aux_dest = &lvar[45];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[97]);
}
{
PFrElement aux_dest = &lvar[46];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[99]);
}
{
PFrElement aux_dest = &lvar[47];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[101]);
}
{
PFrElement aux_dest = &lvar[48];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[103]);
}
{
PFrElement aux_dest = &lvar[49];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[105]);
}
{
PFrElement aux_dest = &lvar[50];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[107]);
}
{
PFrElement aux_dest = &lvar[51];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[109]);
}
{
PFrElement aux_dest = &lvar[52];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[111]);
}
{
PFrElement aux_dest = &lvar[53];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[113]);
}
{
PFrElement aux_dest = &lvar[54];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[115]);
}
{
PFrElement aux_dest = &lvar[55];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[117]);
}
{
PFrElement aux_dest = &lvar[56];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[119]);
}
{
PFrElement aux_dest = &lvar[57];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[121]);
}
{
PFrElement aux_dest = &lvar[58];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[123]);
}
{
PFrElement aux_dest = &lvar[59];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[125]);
}
{
PFrElement aux_dest = &lvar[60];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[127]);
}
{
PFrElement aux_dest = &lvar[61];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[129]);
}
{
PFrElement aux_dest = &lvar[62];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[131]);
}
{
PFrElement aux_dest = &lvar[63];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[133]);
}
{
PFrElement aux_dest = &lvar[64];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[135]);
}
{
PFrElement aux_dest = &lvar[65];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[65],&circuitConstants[16]); // line circom 50
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[65])) + 0)];
// load src
Fr_shr(&expaux[1],&circuitConstants[117],&lvar[65]); // line circom 51
Fr_band(&expaux[0],&expaux[1],&circuitConstants[2]); // line circom 51
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[65];
// load src
Fr_add(&expaux[0],&lvar[65],&circuitConstants[2]); // line circom 50
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[65],&circuitConstants[16]); // line circom 50
}
}

void K_74_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 74;
ctx->componentMemory[coffset].templateName = "K";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 0;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[0];
K_74_run(coffset,ctx);
}

void K_74_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
bool* mySubcomponentsParallel = ctx->componentMemory[ctx_index].subcomponentsParallel;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[4];
FrElement lvar[66];
uint sub_component_aux;
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[118]);
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[22]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[23]);
}
{
PFrElement aux_dest = &lvar[3];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[24]);
}
{
PFrElement aux_dest = &lvar[4];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[25]);
}
{
PFrElement aux_dest = &lvar[5];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[26]);
}
{
PFrElement aux_dest = &lvar[6];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[27]);
}
{
PFrElement aux_dest = &lvar[7];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[28]);
}
{
PFrElement aux_dest = &lvar[8];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[29]);
}
{
PFrElement aux_dest = &lvar[9];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[31]);
}
{
PFrElement aux_dest = &lvar[10];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[33]);
}
{
PFrElement aux_dest = &lvar[11];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[34]);
}
{
PFrElement aux_dest = &lvar[12];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[36]);
}
{
PFrElement aux_dest = &lvar[13];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[38]);
}
{
PFrElement aux_dest = &lvar[14];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[40]);
}
{
PFrElement aux_dest = &lvar[15];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[42]);
}
{
PFrElement aux_dest = &lvar[16];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[44]);
}
{
PFrElement aux_dest = &lvar[17];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[46]);
}
{
PFrElement aux_dest = &lvar[18];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[47]);
}
{
PFrElement aux_dest = &lvar[19];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[48]);
}
{
PFrElement aux_dest = &lvar[20];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[49]);
}
{
PFrElement aux_dest = &lvar[21];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[51]);
}
{
PFrElement aux_dest = &lvar[22];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[53]);
}
{
PFrElement aux_dest = &lvar[23];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[55]);
}
{
PFrElement aux_dest = &lvar[24];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[57]);
}
{
PFrElement aux_dest = &lvar[25];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[59]);
}
{
PFrElement aux_dest = &lvar[26];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[61]);
}
{
PFrElement aux_dest = &lvar[27];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[63]);
}
{
PFrElement aux_dest = &lvar[28];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[65]);
}
{
PFrElement aux_dest = &lvar[29];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[67]);
}
{
PFrElement aux_dest = &lvar[30];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[69]);
}
{
PFrElement aux_dest = &lvar[31];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[71]);
}
{
PFrElement aux_dest = &lvar[32];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[73]);
}
{
PFrElement aux_dest = &lvar[33];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[74]);
}
{
PFrElement aux_dest = &lvar[34];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[76]);
}
{
PFrElement aux_dest = &lvar[35];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[77]);
}
{
PFrElement aux_dest = &lvar[36];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[79]);
}
{
PFrElement aux_dest = &lvar[37];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[81]);
}
{
PFrElement aux_dest = &lvar[38];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[83]);
}
{
PFrElement aux_dest = &lvar[39];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[85]);
}
{
PFrElement aux_dest = &lvar[40];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[87]);
}
{
PFrElement aux_dest = &lvar[41];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[89]);
}
{
PFrElement aux_dest = &lvar[42];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[91]);
}
{
PFrElement aux_dest = &lvar[43];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[93]);
}
{
PFrElement aux_dest = &lvar[44];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[95]);
}
{
PFrElement aux_dest = &lvar[45];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[97]);
}
{
PFrElement aux_dest = &lvar[46];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[99]);
}
{
PFrElement aux_dest = &lvar[47];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[101]);
}
{
PFrElement aux_dest = &lvar[48];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[103]);
}
{
PFrElement aux_dest = &lvar[49];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[105]);
}
{
PFrElement aux_dest = &lvar[50];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[107]);
}
{
PFrElement aux_dest = &lvar[51];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[109]);
}
{
PFrElement aux_dest = &lvar[52];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[111]);
}
{
PFrElement aux_dest = &lvar[53];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[113]);
}
{
PFrElement aux_dest = &lvar[54];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[115]);
}
{
PFrElement aux_dest = &lvar[55];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[117]);
}
{
PFrElement aux_dest = &lvar[56];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[119]);
}
{
PFrElement aux_dest = &lvar[57];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[121]);
}
{
PFrElement aux_dest = &lvar[58];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[123]);
}
{
PFrElement aux_dest = &lvar[59];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[125]);
}
{
PFrElement aux_dest = &lvar[60];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[127]);
}
{
PFrElement aux_dest = &lvar[61];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[129]);
}
{
PFrElement aux_dest = &lvar[62];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[131]);
}
{
PFrElement aux_dest = &lvar[63];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[133]);
}
{
PFrElement aux_dest = &lvar[64];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[135]);
}
{
PFrElement aux_dest = &lvar[65];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[65],&circuitConstants[16]); // line circom 50
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[65])) + 0)];
// load src
Fr_shr(&expaux[1],&circuitConstants[119],&lvar[65]); // line circom 51
Fr_band(&expaux[0],&expaux[1],&circuitConstants[2]); // line circom 51
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[65];
// load src
Fr_add(&expaux[0],&lvar[65],&circuitConstants[2]); // line circom 50
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[65],&circuitConstants[16]); // line circom 50
}
}

void K_75_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 75;
ctx->componentMemory[coffset].templateName = "K";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 0;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[0];
K_75_run(coffset,ctx);
}

void K_75_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
bool* mySubcomponentsParallel = ctx->componentMemory[ctx_index].subcomponentsParallel;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[4];
FrElement lvar[66];
uint sub_component_aux;
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[120]);
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[22]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[23]);
}
{
PFrElement aux_dest = &lvar[3];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[24]);
}
{
PFrElement aux_dest = &lvar[4];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[25]);
}
{
PFrElement aux_dest = &lvar[5];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[26]);
}
{
PFrElement aux_dest = &lvar[6];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[27]);
}
{
PFrElement aux_dest = &lvar[7];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[28]);
}
{
PFrElement aux_dest = &lvar[8];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[29]);
}
{
PFrElement aux_dest = &lvar[9];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[31]);
}
{
PFrElement aux_dest = &lvar[10];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[33]);
}
{
PFrElement aux_dest = &lvar[11];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[34]);
}
{
PFrElement aux_dest = &lvar[12];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[36]);
}
{
PFrElement aux_dest = &lvar[13];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[38]);
}
{
PFrElement aux_dest = &lvar[14];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[40]);
}
{
PFrElement aux_dest = &lvar[15];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[42]);
}
{
PFrElement aux_dest = &lvar[16];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[44]);
}
{
PFrElement aux_dest = &lvar[17];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[46]);
}
{
PFrElement aux_dest = &lvar[18];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[47]);
}
{
PFrElement aux_dest = &lvar[19];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[48]);
}
{
PFrElement aux_dest = &lvar[20];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[49]);
}
{
PFrElement aux_dest = &lvar[21];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[51]);
}
{
PFrElement aux_dest = &lvar[22];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[53]);
}
{
PFrElement aux_dest = &lvar[23];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[55]);
}
{
PFrElement aux_dest = &lvar[24];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[57]);
}
{
PFrElement aux_dest = &lvar[25];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[59]);
}
{
PFrElement aux_dest = &lvar[26];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[61]);
}
{
PFrElement aux_dest = &lvar[27];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[63]);
}
{
PFrElement aux_dest = &lvar[28];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[65]);
}
{
PFrElement aux_dest = &lvar[29];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[67]);
}
{
PFrElement aux_dest = &lvar[30];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[69]);
}
{
PFrElement aux_dest = &lvar[31];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[71]);
}
{
PFrElement aux_dest = &lvar[32];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[73]);
}
{
PFrElement aux_dest = &lvar[33];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[74]);
}
{
PFrElement aux_dest = &lvar[34];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[76]);
}
{
PFrElement aux_dest = &lvar[35];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[77]);
}
{
PFrElement aux_dest = &lvar[36];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[79]);
}
{
PFrElement aux_dest = &lvar[37];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[81]);
}
{
PFrElement aux_dest = &lvar[38];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[83]);
}
{
PFrElement aux_dest = &lvar[39];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[85]);
}
{
PFrElement aux_dest = &lvar[40];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[87]);
}
{
PFrElement aux_dest = &lvar[41];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[89]);
}
{
PFrElement aux_dest = &lvar[42];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[91]);
}
{
PFrElement aux_dest = &lvar[43];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[93]);
}
{
PFrElement aux_dest = &lvar[44];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[95]);
}
{
PFrElement aux_dest = &lvar[45];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[97]);
}
{
PFrElement aux_dest = &lvar[46];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[99]);
}
{
PFrElement aux_dest = &lvar[47];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[101]);
}
{
PFrElement aux_dest = &lvar[48];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[103]);
}
{
PFrElement aux_dest = &lvar[49];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[105]);
}
{
PFrElement aux_dest = &lvar[50];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[107]);
}
{
PFrElement aux_dest = &lvar[51];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[109]);
}
{
PFrElement aux_dest = &lvar[52];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[111]);
}
{
PFrElement aux_dest = &lvar[53];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[113]);
}
{
PFrElement aux_dest = &lvar[54];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[115]);
}
{
PFrElement aux_dest = &lvar[55];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[117]);
}
{
PFrElement aux_dest = &lvar[56];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[119]);
}
{
PFrElement aux_dest = &lvar[57];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[121]);
}
{
PFrElement aux_dest = &lvar[58];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[123]);
}
{
PFrElement aux_dest = &lvar[59];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[125]);
}
{
PFrElement aux_dest = &lvar[60];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[127]);
}
{
PFrElement aux_dest = &lvar[61];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[129]);
}
{
PFrElement aux_dest = &lvar[62];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[131]);
}
{
PFrElement aux_dest = &lvar[63];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[133]);
}
{
PFrElement aux_dest = &lvar[64];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[135]);
}
{
PFrElement aux_dest = &lvar[65];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[65],&circuitConstants[16]); // line circom 50
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[65])) + 0)];
// load src
Fr_shr(&expaux[1],&circuitConstants[121],&lvar[65]); // line circom 51
Fr_band(&expaux[0],&expaux[1],&circuitConstants[2]); // line circom 51
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[65];
// load src
Fr_add(&expaux[0],&lvar[65],&circuitConstants[2]); // line circom 50
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[65],&circuitConstants[16]); // line circom 50
}
}

void K_76_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 76;
ctx->componentMemory[coffset].templateName = "K";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 0;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[0];
K_76_run(coffset,ctx);
}

void K_76_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
bool* mySubcomponentsParallel = ctx->componentMemory[ctx_index].subcomponentsParallel;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[4];
FrElement lvar[66];
uint sub_component_aux;
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[122]);
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[22]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[23]);
}
{
PFrElement aux_dest = &lvar[3];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[24]);
}
{
PFrElement aux_dest = &lvar[4];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[25]);
}
{
PFrElement aux_dest = &lvar[5];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[26]);
}
{
PFrElement aux_dest = &lvar[6];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[27]);
}
{
PFrElement aux_dest = &lvar[7];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[28]);
}
{
PFrElement aux_dest = &lvar[8];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[29]);
}
{
PFrElement aux_dest = &lvar[9];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[31]);
}
{
PFrElement aux_dest = &lvar[10];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[33]);
}
{
PFrElement aux_dest = &lvar[11];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[34]);
}
{
PFrElement aux_dest = &lvar[12];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[36]);
}
{
PFrElement aux_dest = &lvar[13];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[38]);
}
{
PFrElement aux_dest = &lvar[14];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[40]);
}
{
PFrElement aux_dest = &lvar[15];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[42]);
}
{
PFrElement aux_dest = &lvar[16];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[44]);
}
{
PFrElement aux_dest = &lvar[17];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[46]);
}
{
PFrElement aux_dest = &lvar[18];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[47]);
}
{
PFrElement aux_dest = &lvar[19];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[48]);
}
{
PFrElement aux_dest = &lvar[20];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[49]);
}
{
PFrElement aux_dest = &lvar[21];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[51]);
}
{
PFrElement aux_dest = &lvar[22];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[53]);
}
{
PFrElement aux_dest = &lvar[23];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[55]);
}
{
PFrElement aux_dest = &lvar[24];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[57]);
}
{
PFrElement aux_dest = &lvar[25];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[59]);
}
{
PFrElement aux_dest = &lvar[26];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[61]);
}
{
PFrElement aux_dest = &lvar[27];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[63]);
}
{
PFrElement aux_dest = &lvar[28];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[65]);
}
{
PFrElement aux_dest = &lvar[29];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[67]);
}
{
PFrElement aux_dest = &lvar[30];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[69]);
}
{
PFrElement aux_dest = &lvar[31];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[71]);
}
{
PFrElement aux_dest = &lvar[32];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[73]);
}
{
PFrElement aux_dest = &lvar[33];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[74]);
}
{
PFrElement aux_dest = &lvar[34];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[76]);
}
{
PFrElement aux_dest = &lvar[35];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[77]);
}
{
PFrElement aux_dest = &lvar[36];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[79]);
}
{
PFrElement aux_dest = &lvar[37];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[81]);
}
{
PFrElement aux_dest = &lvar[38];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[83]);
}
{
PFrElement aux_dest = &lvar[39];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[85]);
}
{
PFrElement aux_dest = &lvar[40];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[87]);
}
{
PFrElement aux_dest = &lvar[41];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[89]);
}
{
PFrElement aux_dest = &lvar[42];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[91]);
}
{
PFrElement aux_dest = &lvar[43];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[93]);
}
{
PFrElement aux_dest = &lvar[44];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[95]);
}
{
PFrElement aux_dest = &lvar[45];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[97]);
}
{
PFrElement aux_dest = &lvar[46];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[99]);
}
{
PFrElement aux_dest = &lvar[47];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[101]);
}
{
PFrElement aux_dest = &lvar[48];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[103]);
}
{
PFrElement aux_dest = &lvar[49];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[105]);
}
{
PFrElement aux_dest = &lvar[50];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[107]);
}
{
PFrElement aux_dest = &lvar[51];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[109]);
}
{
PFrElement aux_dest = &lvar[52];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[111]);
}
{
PFrElement aux_dest = &lvar[53];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[113]);
}
{
PFrElement aux_dest = &lvar[54];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[115]);
}
{
PFrElement aux_dest = &lvar[55];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[117]);
}
{
PFrElement aux_dest = &lvar[56];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[119]);
}
{
PFrElement aux_dest = &lvar[57];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[121]);
}
{
PFrElement aux_dest = &lvar[58];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[123]);
}
{
PFrElement aux_dest = &lvar[59];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[125]);
}
{
PFrElement aux_dest = &lvar[60];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[127]);
}
{
PFrElement aux_dest = &lvar[61];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[129]);
}
{
PFrElement aux_dest = &lvar[62];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[131]);
}
{
PFrElement aux_dest = &lvar[63];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[133]);
}
{
PFrElement aux_dest = &lvar[64];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[135]);
}
{
PFrElement aux_dest = &lvar[65];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[65],&circuitConstants[16]); // line circom 50
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[65])) + 0)];
// load src
Fr_shr(&expaux[1],&circuitConstants[123],&lvar[65]); // line circom 51
Fr_band(&expaux[0],&expaux[1],&circuitConstants[2]); // line circom 51
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[65];
// load src
Fr_add(&expaux[0],&lvar[65],&circuitConstants[2]); // line circom 50
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[65],&circuitConstants[16]); // line circom 50
}
}

void K_77_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 77;
ctx->componentMemory[coffset].templateName = "K";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 0;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[0];
K_77_run(coffset,ctx);
}

void K_77_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
bool* mySubcomponentsParallel = ctx->componentMemory[ctx_index].subcomponentsParallel;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[4];
FrElement lvar[66];
uint sub_component_aux;
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[124]);
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[22]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[23]);
}
{
PFrElement aux_dest = &lvar[3];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[24]);
}
{
PFrElement aux_dest = &lvar[4];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[25]);
}
{
PFrElement aux_dest = &lvar[5];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[26]);
}
{
PFrElement aux_dest = &lvar[6];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[27]);
}
{
PFrElement aux_dest = &lvar[7];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[28]);
}
{
PFrElement aux_dest = &lvar[8];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[29]);
}
{
PFrElement aux_dest = &lvar[9];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[31]);
}
{
PFrElement aux_dest = &lvar[10];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[33]);
}
{
PFrElement aux_dest = &lvar[11];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[34]);
}
{
PFrElement aux_dest = &lvar[12];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[36]);
}
{
PFrElement aux_dest = &lvar[13];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[38]);
}
{
PFrElement aux_dest = &lvar[14];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[40]);
}
{
PFrElement aux_dest = &lvar[15];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[42]);
}
{
PFrElement aux_dest = &lvar[16];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[44]);
}
{
PFrElement aux_dest = &lvar[17];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[46]);
}
{
PFrElement aux_dest = &lvar[18];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[47]);
}
{
PFrElement aux_dest = &lvar[19];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[48]);
}
{
PFrElement aux_dest = &lvar[20];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[49]);
}
{
PFrElement aux_dest = &lvar[21];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[51]);
}
{
PFrElement aux_dest = &lvar[22];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[53]);
}
{
PFrElement aux_dest = &lvar[23];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[55]);
}
{
PFrElement aux_dest = &lvar[24];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[57]);
}
{
PFrElement aux_dest = &lvar[25];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[59]);
}
{
PFrElement aux_dest = &lvar[26];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[61]);
}
{
PFrElement aux_dest = &lvar[27];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[63]);
}
{
PFrElement aux_dest = &lvar[28];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[65]);
}
{
PFrElement aux_dest = &lvar[29];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[67]);
}
{
PFrElement aux_dest = &lvar[30];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[69]);
}
{
PFrElement aux_dest = &lvar[31];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[71]);
}
{
PFrElement aux_dest = &lvar[32];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[73]);
}
{
PFrElement aux_dest = &lvar[33];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[74]);
}
{
PFrElement aux_dest = &lvar[34];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[76]);
}
{
PFrElement aux_dest = &lvar[35];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[77]);
}
{
PFrElement aux_dest = &lvar[36];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[79]);
}
{
PFrElement aux_dest = &lvar[37];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[81]);
}
{
PFrElement aux_dest = &lvar[38];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[83]);
}
{
PFrElement aux_dest = &lvar[39];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[85]);
}
{
PFrElement aux_dest = &lvar[40];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[87]);
}
{
PFrElement aux_dest = &lvar[41];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[89]);
}
{
PFrElement aux_dest = &lvar[42];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[91]);
}
{
PFrElement aux_dest = &lvar[43];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[93]);
}
{
PFrElement aux_dest = &lvar[44];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[95]);
}
{
PFrElement aux_dest = &lvar[45];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[97]);
}
{
PFrElement aux_dest = &lvar[46];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[99]);
}
{
PFrElement aux_dest = &lvar[47];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[101]);
}
{
PFrElement aux_dest = &lvar[48];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[103]);
}
{
PFrElement aux_dest = &lvar[49];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[105]);
}
{
PFrElement aux_dest = &lvar[50];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[107]);
}
{
PFrElement aux_dest = &lvar[51];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[109]);
}
{
PFrElement aux_dest = &lvar[52];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[111]);
}
{
PFrElement aux_dest = &lvar[53];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[113]);
}
{
PFrElement aux_dest = &lvar[54];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[115]);
}
{
PFrElement aux_dest = &lvar[55];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[117]);
}
{
PFrElement aux_dest = &lvar[56];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[119]);
}
{
PFrElement aux_dest = &lvar[57];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[121]);
}
{
PFrElement aux_dest = &lvar[58];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[123]);
}
{
PFrElement aux_dest = &lvar[59];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[125]);
}
{
PFrElement aux_dest = &lvar[60];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[127]);
}
{
PFrElement aux_dest = &lvar[61];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[129]);
}
{
PFrElement aux_dest = &lvar[62];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[131]);
}
{
PFrElement aux_dest = &lvar[63];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[133]);
}
{
PFrElement aux_dest = &lvar[64];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[135]);
}
{
PFrElement aux_dest = &lvar[65];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[65],&circuitConstants[16]); // line circom 50
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[65])) + 0)];
// load src
Fr_shr(&expaux[1],&circuitConstants[125],&lvar[65]); // line circom 51
Fr_band(&expaux[0],&expaux[1],&circuitConstants[2]); // line circom 51
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[65];
// load src
Fr_add(&expaux[0],&lvar[65],&circuitConstants[2]); // line circom 50
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[65],&circuitConstants[16]); // line circom 50
}
}

void K_78_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 78;
ctx->componentMemory[coffset].templateName = "K";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 0;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[0];
K_78_run(coffset,ctx);
}

void K_78_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
bool* mySubcomponentsParallel = ctx->componentMemory[ctx_index].subcomponentsParallel;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[4];
FrElement lvar[66];
uint sub_component_aux;
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[126]);
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[22]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[23]);
}
{
PFrElement aux_dest = &lvar[3];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[24]);
}
{
PFrElement aux_dest = &lvar[4];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[25]);
}
{
PFrElement aux_dest = &lvar[5];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[26]);
}
{
PFrElement aux_dest = &lvar[6];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[27]);
}
{
PFrElement aux_dest = &lvar[7];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[28]);
}
{
PFrElement aux_dest = &lvar[8];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[29]);
}
{
PFrElement aux_dest = &lvar[9];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[31]);
}
{
PFrElement aux_dest = &lvar[10];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[33]);
}
{
PFrElement aux_dest = &lvar[11];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[34]);
}
{
PFrElement aux_dest = &lvar[12];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[36]);
}
{
PFrElement aux_dest = &lvar[13];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[38]);
}
{
PFrElement aux_dest = &lvar[14];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[40]);
}
{
PFrElement aux_dest = &lvar[15];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[42]);
}
{
PFrElement aux_dest = &lvar[16];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[44]);
}
{
PFrElement aux_dest = &lvar[17];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[46]);
}
{
PFrElement aux_dest = &lvar[18];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[47]);
}
{
PFrElement aux_dest = &lvar[19];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[48]);
}
{
PFrElement aux_dest = &lvar[20];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[49]);
}
{
PFrElement aux_dest = &lvar[21];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[51]);
}
{
PFrElement aux_dest = &lvar[22];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[53]);
}
{
PFrElement aux_dest = &lvar[23];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[55]);
}
{
PFrElement aux_dest = &lvar[24];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[57]);
}
{
PFrElement aux_dest = &lvar[25];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[59]);
}
{
PFrElement aux_dest = &lvar[26];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[61]);
}
{
PFrElement aux_dest = &lvar[27];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[63]);
}
{
PFrElement aux_dest = &lvar[28];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[65]);
}
{
PFrElement aux_dest = &lvar[29];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[67]);
}
{
PFrElement aux_dest = &lvar[30];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[69]);
}
{
PFrElement aux_dest = &lvar[31];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[71]);
}
{
PFrElement aux_dest = &lvar[32];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[73]);
}
{
PFrElement aux_dest = &lvar[33];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[74]);
}
{
PFrElement aux_dest = &lvar[34];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[76]);
}
{
PFrElement aux_dest = &lvar[35];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[77]);
}
{
PFrElement aux_dest = &lvar[36];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[79]);
}
{
PFrElement aux_dest = &lvar[37];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[81]);
}
{
PFrElement aux_dest = &lvar[38];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[83]);
}
{
PFrElement aux_dest = &lvar[39];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[85]);
}
{
PFrElement aux_dest = &lvar[40];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[87]);
}
{
PFrElement aux_dest = &lvar[41];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[89]);
}
{
PFrElement aux_dest = &lvar[42];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[91]);
}
{
PFrElement aux_dest = &lvar[43];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[93]);
}
{
PFrElement aux_dest = &lvar[44];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[95]);
}
{
PFrElement aux_dest = &lvar[45];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[97]);
}
{
PFrElement aux_dest = &lvar[46];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[99]);
}
{
PFrElement aux_dest = &lvar[47];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[101]);
}
{
PFrElement aux_dest = &lvar[48];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[103]);
}
{
PFrElement aux_dest = &lvar[49];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[105]);
}
{
PFrElement aux_dest = &lvar[50];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[107]);
}
{
PFrElement aux_dest = &lvar[51];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[109]);
}
{
PFrElement aux_dest = &lvar[52];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[111]);
}
{
PFrElement aux_dest = &lvar[53];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[113]);
}
{
PFrElement aux_dest = &lvar[54];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[115]);
}
{
PFrElement aux_dest = &lvar[55];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[117]);
}
{
PFrElement aux_dest = &lvar[56];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[119]);
}
{
PFrElement aux_dest = &lvar[57];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[121]);
}
{
PFrElement aux_dest = &lvar[58];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[123]);
}
{
PFrElement aux_dest = &lvar[59];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[125]);
}
{
PFrElement aux_dest = &lvar[60];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[127]);
}
{
PFrElement aux_dest = &lvar[61];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[129]);
}
{
PFrElement aux_dest = &lvar[62];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[131]);
}
{
PFrElement aux_dest = &lvar[63];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[133]);
}
{
PFrElement aux_dest = &lvar[64];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[135]);
}
{
PFrElement aux_dest = &lvar[65];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[65],&circuitConstants[16]); // line circom 50
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[65])) + 0)];
// load src
Fr_shr(&expaux[1],&circuitConstants[127],&lvar[65]); // line circom 51
Fr_band(&expaux[0],&expaux[1],&circuitConstants[2]); // line circom 51
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[65];
// load src
Fr_add(&expaux[0],&lvar[65],&circuitConstants[2]); // line circom 50
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[65],&circuitConstants[16]); // line circom 50
}
}

void K_79_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 79;
ctx->componentMemory[coffset].templateName = "K";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 0;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[0];
K_79_run(coffset,ctx);
}

void K_79_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
bool* mySubcomponentsParallel = ctx->componentMemory[ctx_index].subcomponentsParallel;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[4];
FrElement lvar[66];
uint sub_component_aux;
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[128]);
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[22]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[23]);
}
{
PFrElement aux_dest = &lvar[3];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[24]);
}
{
PFrElement aux_dest = &lvar[4];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[25]);
}
{
PFrElement aux_dest = &lvar[5];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[26]);
}
{
PFrElement aux_dest = &lvar[6];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[27]);
}
{
PFrElement aux_dest = &lvar[7];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[28]);
}
{
PFrElement aux_dest = &lvar[8];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[29]);
}
{
PFrElement aux_dest = &lvar[9];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[31]);
}
{
PFrElement aux_dest = &lvar[10];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[33]);
}
{
PFrElement aux_dest = &lvar[11];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[34]);
}
{
PFrElement aux_dest = &lvar[12];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[36]);
}
{
PFrElement aux_dest = &lvar[13];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[38]);
}
{
PFrElement aux_dest = &lvar[14];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[40]);
}
{
PFrElement aux_dest = &lvar[15];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[42]);
}
{
PFrElement aux_dest = &lvar[16];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[44]);
}
{
PFrElement aux_dest = &lvar[17];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[46]);
}
{
PFrElement aux_dest = &lvar[18];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[47]);
}
{
PFrElement aux_dest = &lvar[19];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[48]);
}
{
PFrElement aux_dest = &lvar[20];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[49]);
}
{
PFrElement aux_dest = &lvar[21];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[51]);
}
{
PFrElement aux_dest = &lvar[22];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[53]);
}
{
PFrElement aux_dest = &lvar[23];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[55]);
}
{
PFrElement aux_dest = &lvar[24];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[57]);
}
{
PFrElement aux_dest = &lvar[25];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[59]);
}
{
PFrElement aux_dest = &lvar[26];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[61]);
}
{
PFrElement aux_dest = &lvar[27];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[63]);
}
{
PFrElement aux_dest = &lvar[28];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[65]);
}
{
PFrElement aux_dest = &lvar[29];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[67]);
}
{
PFrElement aux_dest = &lvar[30];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[69]);
}
{
PFrElement aux_dest = &lvar[31];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[71]);
}
{
PFrElement aux_dest = &lvar[32];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[73]);
}
{
PFrElement aux_dest = &lvar[33];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[74]);
}
{
PFrElement aux_dest = &lvar[34];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[76]);
}
{
PFrElement aux_dest = &lvar[35];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[77]);
}
{
PFrElement aux_dest = &lvar[36];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[79]);
}
{
PFrElement aux_dest = &lvar[37];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[81]);
}
{
PFrElement aux_dest = &lvar[38];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[83]);
}
{
PFrElement aux_dest = &lvar[39];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[85]);
}
{
PFrElement aux_dest = &lvar[40];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[87]);
}
{
PFrElement aux_dest = &lvar[41];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[89]);
}
{
PFrElement aux_dest = &lvar[42];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[91]);
}
{
PFrElement aux_dest = &lvar[43];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[93]);
}
{
PFrElement aux_dest = &lvar[44];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[95]);
}
{
PFrElement aux_dest = &lvar[45];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[97]);
}
{
PFrElement aux_dest = &lvar[46];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[99]);
}
{
PFrElement aux_dest = &lvar[47];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[101]);
}
{
PFrElement aux_dest = &lvar[48];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[103]);
}
{
PFrElement aux_dest = &lvar[49];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[105]);
}
{
PFrElement aux_dest = &lvar[50];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[107]);
}
{
PFrElement aux_dest = &lvar[51];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[109]);
}
{
PFrElement aux_dest = &lvar[52];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[111]);
}
{
PFrElement aux_dest = &lvar[53];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[113]);
}
{
PFrElement aux_dest = &lvar[54];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[115]);
}
{
PFrElement aux_dest = &lvar[55];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[117]);
}
{
PFrElement aux_dest = &lvar[56];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[119]);
}
{
PFrElement aux_dest = &lvar[57];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[121]);
}
{
PFrElement aux_dest = &lvar[58];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[123]);
}
{
PFrElement aux_dest = &lvar[59];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[125]);
}
{
PFrElement aux_dest = &lvar[60];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[127]);
}
{
PFrElement aux_dest = &lvar[61];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[129]);
}
{
PFrElement aux_dest = &lvar[62];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[131]);
}
{
PFrElement aux_dest = &lvar[63];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[133]);
}
{
PFrElement aux_dest = &lvar[64];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[135]);
}
{
PFrElement aux_dest = &lvar[65];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[65],&circuitConstants[16]); // line circom 50
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[65])) + 0)];
// load src
Fr_shr(&expaux[1],&circuitConstants[129],&lvar[65]); // line circom 51
Fr_band(&expaux[0],&expaux[1],&circuitConstants[2]); // line circom 51
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[65];
// load src
Fr_add(&expaux[0],&lvar[65],&circuitConstants[2]); // line circom 50
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[65],&circuitConstants[16]); // line circom 50
}
}

void K_80_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 80;
ctx->componentMemory[coffset].templateName = "K";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 0;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[0];
K_80_run(coffset,ctx);
}

void K_80_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
bool* mySubcomponentsParallel = ctx->componentMemory[ctx_index].subcomponentsParallel;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[4];
FrElement lvar[66];
uint sub_component_aux;
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[130]);
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[22]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[23]);
}
{
PFrElement aux_dest = &lvar[3];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[24]);
}
{
PFrElement aux_dest = &lvar[4];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[25]);
}
{
PFrElement aux_dest = &lvar[5];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[26]);
}
{
PFrElement aux_dest = &lvar[6];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[27]);
}
{
PFrElement aux_dest = &lvar[7];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[28]);
}
{
PFrElement aux_dest = &lvar[8];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[29]);
}
{
PFrElement aux_dest = &lvar[9];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[31]);
}
{
PFrElement aux_dest = &lvar[10];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[33]);
}
{
PFrElement aux_dest = &lvar[11];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[34]);
}
{
PFrElement aux_dest = &lvar[12];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[36]);
}
{
PFrElement aux_dest = &lvar[13];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[38]);
}
{
PFrElement aux_dest = &lvar[14];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[40]);
}
{
PFrElement aux_dest = &lvar[15];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[42]);
}
{
PFrElement aux_dest = &lvar[16];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[44]);
}
{
PFrElement aux_dest = &lvar[17];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[46]);
}
{
PFrElement aux_dest = &lvar[18];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[47]);
}
{
PFrElement aux_dest = &lvar[19];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[48]);
}
{
PFrElement aux_dest = &lvar[20];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[49]);
}
{
PFrElement aux_dest = &lvar[21];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[51]);
}
{
PFrElement aux_dest = &lvar[22];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[53]);
}
{
PFrElement aux_dest = &lvar[23];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[55]);
}
{
PFrElement aux_dest = &lvar[24];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[57]);
}
{
PFrElement aux_dest = &lvar[25];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[59]);
}
{
PFrElement aux_dest = &lvar[26];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[61]);
}
{
PFrElement aux_dest = &lvar[27];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[63]);
}
{
PFrElement aux_dest = &lvar[28];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[65]);
}
{
PFrElement aux_dest = &lvar[29];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[67]);
}
{
PFrElement aux_dest = &lvar[30];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[69]);
}
{
PFrElement aux_dest = &lvar[31];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[71]);
}
{
PFrElement aux_dest = &lvar[32];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[73]);
}
{
PFrElement aux_dest = &lvar[33];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[74]);
}
{
PFrElement aux_dest = &lvar[34];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[76]);
}
{
PFrElement aux_dest = &lvar[35];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[77]);
}
{
PFrElement aux_dest = &lvar[36];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[79]);
}
{
PFrElement aux_dest = &lvar[37];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[81]);
}
{
PFrElement aux_dest = &lvar[38];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[83]);
}
{
PFrElement aux_dest = &lvar[39];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[85]);
}
{
PFrElement aux_dest = &lvar[40];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[87]);
}
{
PFrElement aux_dest = &lvar[41];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[89]);
}
{
PFrElement aux_dest = &lvar[42];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[91]);
}
{
PFrElement aux_dest = &lvar[43];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[93]);
}
{
PFrElement aux_dest = &lvar[44];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[95]);
}
{
PFrElement aux_dest = &lvar[45];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[97]);
}
{
PFrElement aux_dest = &lvar[46];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[99]);
}
{
PFrElement aux_dest = &lvar[47];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[101]);
}
{
PFrElement aux_dest = &lvar[48];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[103]);
}
{
PFrElement aux_dest = &lvar[49];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[105]);
}
{
PFrElement aux_dest = &lvar[50];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[107]);
}
{
PFrElement aux_dest = &lvar[51];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[109]);
}
{
PFrElement aux_dest = &lvar[52];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[111]);
}
{
PFrElement aux_dest = &lvar[53];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[113]);
}
{
PFrElement aux_dest = &lvar[54];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[115]);
}
{
PFrElement aux_dest = &lvar[55];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[117]);
}
{
PFrElement aux_dest = &lvar[56];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[119]);
}
{
PFrElement aux_dest = &lvar[57];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[121]);
}
{
PFrElement aux_dest = &lvar[58];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[123]);
}
{
PFrElement aux_dest = &lvar[59];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[125]);
}
{
PFrElement aux_dest = &lvar[60];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[127]);
}
{
PFrElement aux_dest = &lvar[61];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[129]);
}
{
PFrElement aux_dest = &lvar[62];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[131]);
}
{
PFrElement aux_dest = &lvar[63];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[133]);
}
{
PFrElement aux_dest = &lvar[64];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[135]);
}
{
PFrElement aux_dest = &lvar[65];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[65],&circuitConstants[16]); // line circom 50
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[65])) + 0)];
// load src
Fr_shr(&expaux[1],&circuitConstants[131],&lvar[65]); // line circom 51
Fr_band(&expaux[0],&expaux[1],&circuitConstants[2]); // line circom 51
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[65];
// load src
Fr_add(&expaux[0],&lvar[65],&circuitConstants[2]); // line circom 50
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[65],&circuitConstants[16]); // line circom 50
}
}

void K_81_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 81;
ctx->componentMemory[coffset].templateName = "K";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 0;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[0];
K_81_run(coffset,ctx);
}

void K_81_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
bool* mySubcomponentsParallel = ctx->componentMemory[ctx_index].subcomponentsParallel;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[4];
FrElement lvar[66];
uint sub_component_aux;
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[132]);
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[22]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[23]);
}
{
PFrElement aux_dest = &lvar[3];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[24]);
}
{
PFrElement aux_dest = &lvar[4];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[25]);
}
{
PFrElement aux_dest = &lvar[5];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[26]);
}
{
PFrElement aux_dest = &lvar[6];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[27]);
}
{
PFrElement aux_dest = &lvar[7];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[28]);
}
{
PFrElement aux_dest = &lvar[8];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[29]);
}
{
PFrElement aux_dest = &lvar[9];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[31]);
}
{
PFrElement aux_dest = &lvar[10];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[33]);
}
{
PFrElement aux_dest = &lvar[11];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[34]);
}
{
PFrElement aux_dest = &lvar[12];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[36]);
}
{
PFrElement aux_dest = &lvar[13];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[38]);
}
{
PFrElement aux_dest = &lvar[14];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[40]);
}
{
PFrElement aux_dest = &lvar[15];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[42]);
}
{
PFrElement aux_dest = &lvar[16];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[44]);
}
{
PFrElement aux_dest = &lvar[17];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[46]);
}
{
PFrElement aux_dest = &lvar[18];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[47]);
}
{
PFrElement aux_dest = &lvar[19];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[48]);
}
{
PFrElement aux_dest = &lvar[20];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[49]);
}
{
PFrElement aux_dest = &lvar[21];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[51]);
}
{
PFrElement aux_dest = &lvar[22];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[53]);
}
{
PFrElement aux_dest = &lvar[23];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[55]);
}
{
PFrElement aux_dest = &lvar[24];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[57]);
}
{
PFrElement aux_dest = &lvar[25];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[59]);
}
{
PFrElement aux_dest = &lvar[26];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[61]);
}
{
PFrElement aux_dest = &lvar[27];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[63]);
}
{
PFrElement aux_dest = &lvar[28];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[65]);
}
{
PFrElement aux_dest = &lvar[29];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[67]);
}
{
PFrElement aux_dest = &lvar[30];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[69]);
}
{
PFrElement aux_dest = &lvar[31];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[71]);
}
{
PFrElement aux_dest = &lvar[32];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[73]);
}
{
PFrElement aux_dest = &lvar[33];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[74]);
}
{
PFrElement aux_dest = &lvar[34];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[76]);
}
{
PFrElement aux_dest = &lvar[35];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[77]);
}
{
PFrElement aux_dest = &lvar[36];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[79]);
}
{
PFrElement aux_dest = &lvar[37];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[81]);
}
{
PFrElement aux_dest = &lvar[38];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[83]);
}
{
PFrElement aux_dest = &lvar[39];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[85]);
}
{
PFrElement aux_dest = &lvar[40];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[87]);
}
{
PFrElement aux_dest = &lvar[41];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[89]);
}
{
PFrElement aux_dest = &lvar[42];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[91]);
}
{
PFrElement aux_dest = &lvar[43];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[93]);
}
{
PFrElement aux_dest = &lvar[44];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[95]);
}
{
PFrElement aux_dest = &lvar[45];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[97]);
}
{
PFrElement aux_dest = &lvar[46];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[99]);
}
{
PFrElement aux_dest = &lvar[47];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[101]);
}
{
PFrElement aux_dest = &lvar[48];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[103]);
}
{
PFrElement aux_dest = &lvar[49];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[105]);
}
{
PFrElement aux_dest = &lvar[50];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[107]);
}
{
PFrElement aux_dest = &lvar[51];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[109]);
}
{
PFrElement aux_dest = &lvar[52];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[111]);
}
{
PFrElement aux_dest = &lvar[53];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[113]);
}
{
PFrElement aux_dest = &lvar[54];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[115]);
}
{
PFrElement aux_dest = &lvar[55];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[117]);
}
{
PFrElement aux_dest = &lvar[56];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[119]);
}
{
PFrElement aux_dest = &lvar[57];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[121]);
}
{
PFrElement aux_dest = &lvar[58];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[123]);
}
{
PFrElement aux_dest = &lvar[59];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[125]);
}
{
PFrElement aux_dest = &lvar[60];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[127]);
}
{
PFrElement aux_dest = &lvar[61];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[129]);
}
{
PFrElement aux_dest = &lvar[62];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[131]);
}
{
PFrElement aux_dest = &lvar[63];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[133]);
}
{
PFrElement aux_dest = &lvar[64];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[135]);
}
{
PFrElement aux_dest = &lvar[65];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[65],&circuitConstants[16]); // line circom 50
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[65])) + 0)];
// load src
Fr_shr(&expaux[1],&circuitConstants[133],&lvar[65]); // line circom 51
Fr_band(&expaux[0],&expaux[1],&circuitConstants[2]); // line circom 51
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[65];
// load src
Fr_add(&expaux[0],&lvar[65],&circuitConstants[2]); // line circom 50
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[65],&circuitConstants[16]); // line circom 50
}
}

void K_82_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 82;
ctx->componentMemory[coffset].templateName = "K";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 0;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[0];
K_82_run(coffset,ctx);
}

void K_82_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
bool* mySubcomponentsParallel = ctx->componentMemory[ctx_index].subcomponentsParallel;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[4];
FrElement lvar[66];
uint sub_component_aux;
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[134]);
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[22]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[23]);
}
{
PFrElement aux_dest = &lvar[3];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[24]);
}
{
PFrElement aux_dest = &lvar[4];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[25]);
}
{
PFrElement aux_dest = &lvar[5];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[26]);
}
{
PFrElement aux_dest = &lvar[6];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[27]);
}
{
PFrElement aux_dest = &lvar[7];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[28]);
}
{
PFrElement aux_dest = &lvar[8];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[29]);
}
{
PFrElement aux_dest = &lvar[9];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[31]);
}
{
PFrElement aux_dest = &lvar[10];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[33]);
}
{
PFrElement aux_dest = &lvar[11];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[34]);
}
{
PFrElement aux_dest = &lvar[12];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[36]);
}
{
PFrElement aux_dest = &lvar[13];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[38]);
}
{
PFrElement aux_dest = &lvar[14];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[40]);
}
{
PFrElement aux_dest = &lvar[15];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[42]);
}
{
PFrElement aux_dest = &lvar[16];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[44]);
}
{
PFrElement aux_dest = &lvar[17];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[46]);
}
{
PFrElement aux_dest = &lvar[18];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[47]);
}
{
PFrElement aux_dest = &lvar[19];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[48]);
}
{
PFrElement aux_dest = &lvar[20];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[49]);
}
{
PFrElement aux_dest = &lvar[21];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[51]);
}
{
PFrElement aux_dest = &lvar[22];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[53]);
}
{
PFrElement aux_dest = &lvar[23];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[55]);
}
{
PFrElement aux_dest = &lvar[24];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[57]);
}
{
PFrElement aux_dest = &lvar[25];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[59]);
}
{
PFrElement aux_dest = &lvar[26];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[61]);
}
{
PFrElement aux_dest = &lvar[27];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[63]);
}
{
PFrElement aux_dest = &lvar[28];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[65]);
}
{
PFrElement aux_dest = &lvar[29];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[67]);
}
{
PFrElement aux_dest = &lvar[30];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[69]);
}
{
PFrElement aux_dest = &lvar[31];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[71]);
}
{
PFrElement aux_dest = &lvar[32];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[73]);
}
{
PFrElement aux_dest = &lvar[33];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[74]);
}
{
PFrElement aux_dest = &lvar[34];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[76]);
}
{
PFrElement aux_dest = &lvar[35];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[77]);
}
{
PFrElement aux_dest = &lvar[36];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[79]);
}
{
PFrElement aux_dest = &lvar[37];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[81]);
}
{
PFrElement aux_dest = &lvar[38];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[83]);
}
{
PFrElement aux_dest = &lvar[39];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[85]);
}
{
PFrElement aux_dest = &lvar[40];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[87]);
}
{
PFrElement aux_dest = &lvar[41];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[89]);
}
{
PFrElement aux_dest = &lvar[42];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[91]);
}
{
PFrElement aux_dest = &lvar[43];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[93]);
}
{
PFrElement aux_dest = &lvar[44];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[95]);
}
{
PFrElement aux_dest = &lvar[45];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[97]);
}
{
PFrElement aux_dest = &lvar[46];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[99]);
}
{
PFrElement aux_dest = &lvar[47];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[101]);
}
{
PFrElement aux_dest = &lvar[48];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[103]);
}
{
PFrElement aux_dest = &lvar[49];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[105]);
}
{
PFrElement aux_dest = &lvar[50];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[107]);
}
{
PFrElement aux_dest = &lvar[51];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[109]);
}
{
PFrElement aux_dest = &lvar[52];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[111]);
}
{
PFrElement aux_dest = &lvar[53];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[113]);
}
{
PFrElement aux_dest = &lvar[54];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[115]);
}
{
PFrElement aux_dest = &lvar[55];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[117]);
}
{
PFrElement aux_dest = &lvar[56];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[119]);
}
{
PFrElement aux_dest = &lvar[57];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[121]);
}
{
PFrElement aux_dest = &lvar[58];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[123]);
}
{
PFrElement aux_dest = &lvar[59];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[125]);
}
{
PFrElement aux_dest = &lvar[60];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[127]);
}
{
PFrElement aux_dest = &lvar[61];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[129]);
}
{
PFrElement aux_dest = &lvar[62];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[131]);
}
{
PFrElement aux_dest = &lvar[63];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[133]);
}
{
PFrElement aux_dest = &lvar[64];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[135]);
}
{
PFrElement aux_dest = &lvar[65];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[65],&circuitConstants[16]); // line circom 50
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[65])) + 0)];
// load src
Fr_shr(&expaux[1],&circuitConstants[135],&lvar[65]); // line circom 51
Fr_band(&expaux[0],&expaux[1],&circuitConstants[2]); // line circom 51
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[65];
// load src
Fr_add(&expaux[0],&lvar[65],&circuitConstants[2]); // line circom 50
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[65],&circuitConstants[16]); // line circom 50
}
}

void Ch_t_83_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 83;
ctx->componentMemory[coffset].templateName = "Ch_t";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 96;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[0];
}

void Ch_t_83_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
bool* mySubcomponentsParallel = ctx->componentMemory[ctx_index].subcomponentsParallel;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[6];
FrElement lvar[2];
uint sub_component_aux;
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[16]);
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[1],&circuitConstants[16]); // line circom 44
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[1])) + 0)];
// load src
Fr_sub(&expaux[3],&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[1])) + 64)],&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[1])) + 96)]); // line circom 45
Fr_mul(&expaux[1],&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[1])) + 32)],&expaux[3]); // line circom 45
Fr_add(&expaux[0],&expaux[1],&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[1])) + 96)]); // line circom 45
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[1];
// load src
Fr_add(&expaux[0],&lvar[1],&circuitConstants[2]); // line circom 44
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[1],&circuitConstants[16]); // line circom 44
}
}

void RotR_84_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 84;
ctx->componentMemory[coffset].templateName = "RotR";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 32;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[0];
}

void RotR_84_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
bool* mySubcomponentsParallel = ctx->componentMemory[ctx_index].subcomponentsParallel;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[4];
FrElement lvar[3];
uint sub_component_aux;
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[16]);
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[12]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[2],&circuitConstants[16]); // line circom 25
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[2])) + 0)];
// load src
Fr_add(&expaux[1],&lvar[2],&circuitConstants[12]); // line circom 26
Fr_mod(&expaux[0],&expaux[1],&circuitConstants[16]); // line circom 26
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + ((1 * Fr_toInt(&expaux[0])) + 32)]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
Fr_add(&expaux[0],&lvar[2],&circuitConstants[2]); // line circom 25
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[2],&circuitConstants[16]); // line circom 25
}
}

void RotR_85_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 85;
ctx->componentMemory[coffset].templateName = "RotR";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 32;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[0];
}

void RotR_85_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
bool* mySubcomponentsParallel = ctx->componentMemory[ctx_index].subcomponentsParallel;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[4];
FrElement lvar[3];
uint sub_component_aux;
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[16]);
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[35]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[2],&circuitConstants[16]); // line circom 25
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[2])) + 0)];
// load src
Fr_add(&expaux[1],&lvar[2],&circuitConstants[35]); // line circom 26
Fr_mod(&expaux[0],&expaux[1],&circuitConstants[16]); // line circom 26
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + ((1 * Fr_toInt(&expaux[0])) + 32)]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
Fr_add(&expaux[0],&lvar[2],&circuitConstants[2]); // line circom 25
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[2],&circuitConstants[16]); // line circom 25
}
}

void RotR_86_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 86;
ctx->componentMemory[coffset].templateName = "RotR";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 32;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[0];
}

void RotR_86_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
bool* mySubcomponentsParallel = ctx->componentMemory[ctx_index].subcomponentsParallel;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[4];
FrElement lvar[3];
uint sub_component_aux;
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[16]);
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[60]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[2],&circuitConstants[16]); // line circom 25
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[2])) + 0)];
// load src
Fr_add(&expaux[1],&lvar[2],&circuitConstants[60]); // line circom 26
Fr_mod(&expaux[0],&expaux[1],&circuitConstants[16]); // line circom 26
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + ((1 * Fr_toInt(&expaux[0])) + 32)]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
Fr_add(&expaux[0],&lvar[2],&circuitConstants[2]); // line circom 25
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[2],&circuitConstants[16]); // line circom 25
}
}

void BigSigma_87_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 87;
ctx->componentMemory[coffset].templateName = "BigSigma";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 32;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[4];
}

void BigSigma_87_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
bool* mySubcomponentsParallel = ctx->componentMemory[ctx_index].subcomponentsParallel;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[3];
FrElement lvar[4];
uint sub_component_aux;
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[12]);
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[35]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[60]);
}
{
uint aux_create = 0;
int aux_cmp_num = 0+ctx_index+1;
uint csoffset = mySignalStart+64;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "rota";
RotR_84_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 64 ;
aux_cmp_num += 1;
}
}
{
uint aux_create = 1;
int aux_cmp_num = 1+ctx_index+1;
uint csoffset = mySignalStart+128;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "rotb";
RotR_85_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 64 ;
aux_cmp_num += 1;
}
}
{
uint aux_create = 2;
int aux_cmp_num = 2+ctx_index+1;
uint csoffset = mySignalStart+192;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "rotc";
RotR_86_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 64 ;
aux_cmp_num += 1;
}
}
{
uint aux_create = 3;
int aux_cmp_num = 3+ctx_index+1;
uint csoffset = mySignalStart+256;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "xor3";
Xor3_11_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 160 ;
aux_cmp_num += 1;
}
}
{
PFrElement aux_dest = &lvar[3];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[3];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[3],&circuitConstants[16]); // line circom 60
while(Fr_isTrue(&expaux[0])){
{
uint cmp_index_ref = 0;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ((1 * Fr_toInt(&lvar[3])) + 32)];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[3])) + 32)]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
RotR_84_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = 1;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ((1 * Fr_toInt(&lvar[3])) + 32)];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[3])) + 32)]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
RotR_85_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = 2;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ((1 * Fr_toInt(&lvar[3])) + 32)];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[3])) + 32)]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
RotR_86_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
PFrElement aux_dest = &lvar[3];
// load src
Fr_add(&expaux[0],&lvar[3],&circuitConstants[2]); // line circom 60
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[3],&circuitConstants[16]); // line circom 60
}
{
PFrElement aux_dest = &lvar[3];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[3],&circuitConstants[16]); // line circom 68
while(Fr_isTrue(&expaux[0])){
{
uint cmp_index_ref = 3;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ((1 * Fr_toInt(&lvar[3])) + 32)];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[0]].signalStart + ((1 * Fr_toInt(&lvar[3])) + 0)]);
}
// no need to run sub component
assert(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter);
}
{
uint cmp_index_ref = 3;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ((1 * Fr_toInt(&lvar[3])) + 64)];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[1]].signalStart + ((1 * Fr_toInt(&lvar[3])) + 0)]);
}
// no need to run sub component
assert(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter);
}
{
uint cmp_index_ref = 3;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ((1 * Fr_toInt(&lvar[3])) + 96)];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[2]].signalStart + ((1 * Fr_toInt(&lvar[3])) + 0)]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
Xor3_11_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
PFrElement aux_dest = &lvar[3];
// load src
Fr_add(&expaux[0],&lvar[3],&circuitConstants[2]); // line circom 68
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[3],&circuitConstants[16]); // line circom 68
}
{
PFrElement aux_dest = &lvar[3];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[3],&circuitConstants[16]); // line circom 74
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[3])) + 0)];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[3]].signalStart + ((1 * Fr_toInt(&lvar[3])) + 0)]);
}
{
PFrElement aux_dest = &lvar[3];
// load src
Fr_add(&expaux[0],&lvar[3],&circuitConstants[2]); // line circom 74
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[3],&circuitConstants[16]); // line circom 74
}
}

void BinSum_88_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 88;
ctx->componentMemory[coffset].templateName = "BinSum";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 160;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[0];
}

void BinSum_88_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
bool* mySubcomponentsParallel = ctx->componentMemory[ctx_index].subcomponentsParallel;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[6];
FrElement lvar[8];
uint sub_component_aux;
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[16]);
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[10]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[78]);
}
{
PFrElement aux_dest = &lvar[3];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[4];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[5];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[6];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[7];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[7];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[2]);
}
{
PFrElement aux_dest = &lvar[5];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[5],&circuitConstants[16]); // line circom 79
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &lvar[6];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[6],&circuitConstants[10]); // line circom 80
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &lvar[3];
// load src
Fr_mul(&expaux[2],&signalValues[mySignalStart + (((32 * Fr_toInt(&lvar[6])) + (1 * Fr_toInt(&lvar[5]))) + 35)],&lvar[7]); // line circom 81
Fr_add(&expaux[0],&lvar[3],&expaux[2]); // line circom 81
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[6];
// load src
Fr_add(&expaux[0],&lvar[6],&circuitConstants[2]); // line circom 80
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[6],&circuitConstants[10]); // line circom 80
}
{
PFrElement aux_dest = &lvar[7];
// load src
Fr_add(&expaux[0],&lvar[7],&lvar[7]); // line circom 83
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[5];
// load src
Fr_add(&expaux[0],&lvar[5],&circuitConstants[2]); // line circom 79
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[5],&circuitConstants[16]); // line circom 79
}
{
PFrElement aux_dest = &lvar[7];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[2]);
}
{
PFrElement aux_dest = &lvar[5];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[5],&circuitConstants[78]); // line circom 87
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[5])) + 0)];
// load src
Fr_shr(&expaux[1],&lvar[3],&lvar[5]); // line circom 88
Fr_band(&expaux[0],&expaux[1],&circuitConstants[2]); // line circom 88
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_sub(&expaux[3],&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[5])) + 0)],&circuitConstants[2]); // line circom 91
Fr_mul(&expaux[1],&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[5])) + 0)],&expaux[3]); // line circom 91
Fr_eq(&expaux[0],&expaux[1],&circuitConstants[0]); // line circom 91
if (!Fr_isTrue(&expaux[0])) std::cout << "Failed assert in template/function " << myTemplateName << " line 91. " <<  "Followed trace of components: " << ctx->getTrace(myId) << std::endl;
assert(Fr_isTrue(&expaux[0]));
{
PFrElement aux_dest = &lvar[4];
// load src
Fr_mul(&expaux[2],&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[5])) + 0)],&lvar[7]); // line circom 93
Fr_add(&expaux[0],&lvar[4],&expaux[2]); // line circom 93
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[7];
// load src
Fr_add(&expaux[0],&lvar[7],&lvar[7]); // line circom 95
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[5];
// load src
Fr_add(&expaux[0],&lvar[5],&circuitConstants[2]); // line circom 87
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[5],&circuitConstants[78]); // line circom 87
}
Fr_eq(&expaux[0],&lvar[3],&lvar[4]); // line circom 100
if (!Fr_isTrue(&expaux[0])) std::cout << "Failed assert in template/function " << myTemplateName << " line 100. " <<  "Followed trace of components: " << ctx->getTrace(myId) << std::endl;
assert(Fr_isTrue(&expaux[0]));
}

void T1_89_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 89;
ctx->componentMemory[coffset].templateName = "T1";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 192;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[3];
}

void T1_89_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
bool* mySubcomponentsParallel = ctx->componentMemory[ctx_index].subcomponentsParallel;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[3];
FrElement lvar[1];
uint sub_component_aux;
{
uint aux_create = 0;
int aux_cmp_num = 5+ctx_index+1;
uint csoffset = mySignalStart+640;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "ch";
Ch_t_83_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 128 ;
aux_cmp_num += 1;
}
}
{
uint aux_create = 1;
int aux_cmp_num = 0+ctx_index+1;
uint csoffset = mySignalStart+224;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "bigsigma1";
BigSigma_87_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 416 ;
aux_cmp_num += 5;
}
}
{
uint aux_create = 2;
int aux_cmp_num = 6+ctx_index+1;
uint csoffset = mySignalStart+768;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "sum";
BinSum_88_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 195 ;
aux_cmp_num += 1;
}
}
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[0],&circuitConstants[16]); // line circom 39
while(Fr_isTrue(&expaux[0])){
{
uint cmp_index_ref = 1;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ((1 * Fr_toInt(&lvar[0])) + 32)];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[0])) + 64)]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
BigSigma_87_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = 0;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ((1 * Fr_toInt(&lvar[0])) + 32)];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[0])) + 64)]);
}
// no need to run sub component
assert(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter);
}
{
uint cmp_index_ref = 0;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ((1 * Fr_toInt(&lvar[0])) + 64)];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[0])) + 96)]);
}
// no need to run sub component
assert(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter);
}
{
uint cmp_index_ref = 0;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ((1 * Fr_toInt(&lvar[0])) + 96)];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[0])) + 128)]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
Ch_t_83_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
PFrElement aux_dest = &lvar[0];
// load src
Fr_add(&expaux[0],&lvar[0],&circuitConstants[2]); // line circom 39
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[0],&circuitConstants[16]); // line circom 39
}
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[0],&circuitConstants[16]); // line circom 47
while(Fr_isTrue(&expaux[0])){
{
uint cmp_index_ref = 2;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ((0 + (1 * Fr_toInt(&lvar[0]))) + 35)];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[0])) + 32)]);
}
// no need to run sub component
assert(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter);
}
{
uint cmp_index_ref = 2;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ((32 + (1 * Fr_toInt(&lvar[0]))) + 35)];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[1]].signalStart + ((1 * Fr_toInt(&lvar[0])) + 0)]);
}
// no need to run sub component
assert(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter);
}
{
uint cmp_index_ref = 2;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ((64 + (1 * Fr_toInt(&lvar[0]))) + 35)];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[0]].signalStart + ((1 * Fr_toInt(&lvar[0])) + 0)]);
}
// no need to run sub component
assert(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter);
}
{
uint cmp_index_ref = 2;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ((96 + (1 * Fr_toInt(&lvar[0]))) + 35)];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[0])) + 160)]);
}
// no need to run sub component
assert(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter);
}
{
uint cmp_index_ref = 2;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ((128 + (1 * Fr_toInt(&lvar[0]))) + 35)];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[0])) + 192)]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
BinSum_88_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
PFrElement aux_dest = &lvar[0];
// load src
Fr_add(&expaux[0],&lvar[0],&circuitConstants[2]); // line circom 47
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[0],&circuitConstants[16]); // line circom 47
}
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[0],&circuitConstants[16]); // line circom 55
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[0])) + 0)];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[2]].signalStart + ((1 * Fr_toInt(&lvar[0])) + 0)]);
}
{
PFrElement aux_dest = &lvar[0];
// load src
Fr_add(&expaux[0],&lvar[0],&circuitConstants[2]); // line circom 55
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[0],&circuitConstants[16]); // line circom 55
}
}

void RotR_90_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 90;
ctx->componentMemory[coffset].templateName = "RotR";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 32;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[0];
}

void RotR_90_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
bool* mySubcomponentsParallel = ctx->componentMemory[ctx_index].subcomponentsParallel;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[4];
FrElement lvar[3];
uint sub_component_aux;
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[16]);
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[4]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[2],&circuitConstants[16]); // line circom 25
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[2])) + 0)];
// load src
Fr_add(&expaux[1],&lvar[2],&circuitConstants[4]); // line circom 26
Fr_mod(&expaux[0],&expaux[1],&circuitConstants[16]); // line circom 26
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + ((1 * Fr_toInt(&expaux[0])) + 32)]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
Fr_add(&expaux[0],&lvar[2],&circuitConstants[2]); // line circom 25
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[2],&circuitConstants[16]); // line circom 25
}
}

void RotR_91_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 91;
ctx->componentMemory[coffset].templateName = "RotR";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 32;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[0];
}

void RotR_91_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
bool* mySubcomponentsParallel = ctx->componentMemory[ctx_index].subcomponentsParallel;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[4];
FrElement lvar[3];
uint sub_component_aux;
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[16]);
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[39]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[2],&circuitConstants[16]); // line circom 25
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[2])) + 0)];
// load src
Fr_add(&expaux[1],&lvar[2],&circuitConstants[39]); // line circom 26
Fr_mod(&expaux[0],&expaux[1],&circuitConstants[16]); // line circom 26
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + ((1 * Fr_toInt(&expaux[0])) + 32)]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
Fr_add(&expaux[0],&lvar[2],&circuitConstants[2]); // line circom 25
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[2],&circuitConstants[16]); // line circom 25
}
}

void RotR_92_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 92;
ctx->componentMemory[coffset].templateName = "RotR";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 32;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[0];
}

void RotR_92_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
bool* mySubcomponentsParallel = ctx->componentMemory[ctx_index].subcomponentsParallel;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[4];
FrElement lvar[3];
uint sub_component_aux;
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[16]);
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[54]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[2],&circuitConstants[16]); // line circom 25
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[2])) + 0)];
// load src
Fr_add(&expaux[1],&lvar[2],&circuitConstants[54]); // line circom 26
Fr_mod(&expaux[0],&expaux[1],&circuitConstants[16]); // line circom 26
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + ((1 * Fr_toInt(&expaux[0])) + 32)]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
Fr_add(&expaux[0],&lvar[2],&circuitConstants[2]); // line circom 25
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[2],&circuitConstants[16]); // line circom 25
}
}

void BigSigma_93_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 93;
ctx->componentMemory[coffset].templateName = "BigSigma";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 32;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[4];
}

void BigSigma_93_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
bool* mySubcomponentsParallel = ctx->componentMemory[ctx_index].subcomponentsParallel;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[3];
FrElement lvar[4];
uint sub_component_aux;
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[4]);
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[39]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[54]);
}
{
uint aux_create = 0;
int aux_cmp_num = 0+ctx_index+1;
uint csoffset = mySignalStart+64;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "rota";
RotR_90_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 64 ;
aux_cmp_num += 1;
}
}
{
uint aux_create = 1;
int aux_cmp_num = 1+ctx_index+1;
uint csoffset = mySignalStart+128;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "rotb";
RotR_91_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 64 ;
aux_cmp_num += 1;
}
}
{
uint aux_create = 2;
int aux_cmp_num = 2+ctx_index+1;
uint csoffset = mySignalStart+192;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "rotc";
RotR_92_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 64 ;
aux_cmp_num += 1;
}
}
{
uint aux_create = 3;
int aux_cmp_num = 3+ctx_index+1;
uint csoffset = mySignalStart+256;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "xor3";
Xor3_11_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 160 ;
aux_cmp_num += 1;
}
}
{
PFrElement aux_dest = &lvar[3];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[3];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[3],&circuitConstants[16]); // line circom 60
while(Fr_isTrue(&expaux[0])){
{
uint cmp_index_ref = 0;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ((1 * Fr_toInt(&lvar[3])) + 32)];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[3])) + 32)]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
RotR_90_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = 1;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ((1 * Fr_toInt(&lvar[3])) + 32)];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[3])) + 32)]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
RotR_91_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = 2;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ((1 * Fr_toInt(&lvar[3])) + 32)];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[3])) + 32)]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
RotR_92_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
PFrElement aux_dest = &lvar[3];
// load src
Fr_add(&expaux[0],&lvar[3],&circuitConstants[2]); // line circom 60
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[3],&circuitConstants[16]); // line circom 60
}
{
PFrElement aux_dest = &lvar[3];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[3],&circuitConstants[16]); // line circom 68
while(Fr_isTrue(&expaux[0])){
{
uint cmp_index_ref = 3;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ((1 * Fr_toInt(&lvar[3])) + 32)];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[0]].signalStart + ((1 * Fr_toInt(&lvar[3])) + 0)]);
}
// no need to run sub component
assert(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter);
}
{
uint cmp_index_ref = 3;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ((1 * Fr_toInt(&lvar[3])) + 64)];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[1]].signalStart + ((1 * Fr_toInt(&lvar[3])) + 0)]);
}
// no need to run sub component
assert(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter);
}
{
uint cmp_index_ref = 3;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ((1 * Fr_toInt(&lvar[3])) + 96)];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[2]].signalStart + ((1 * Fr_toInt(&lvar[3])) + 0)]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
Xor3_11_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
PFrElement aux_dest = &lvar[3];
// load src
Fr_add(&expaux[0],&lvar[3],&circuitConstants[2]); // line circom 68
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[3],&circuitConstants[16]); // line circom 68
}
{
PFrElement aux_dest = &lvar[3];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[3],&circuitConstants[16]); // line circom 74
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[3])) + 0)];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[3]].signalStart + ((1 * Fr_toInt(&lvar[3])) + 0)]);
}
{
PFrElement aux_dest = &lvar[3];
// load src
Fr_add(&expaux[0],&lvar[3],&circuitConstants[2]); // line circom 74
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[3],&circuitConstants[16]); // line circom 74
}
}

void Maj_t_94_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 94;
ctx->componentMemory[coffset].templateName = "Maj_t";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 96;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[0];
}

void Maj_t_94_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
bool* mySubcomponentsParallel = ctx->componentMemory[ctx_index].subcomponentsParallel;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[8];
FrElement lvar[2];
uint sub_component_aux;
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[16]);
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[1],&circuitConstants[16]); // line circom 41
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[1])) + 128)];
// load src
Fr_mul(&expaux[0],&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[1])) + 64)],&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[1])) + 96)]); // line circom 42
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[1])) + 0)];
// load src
Fr_add(&expaux[4],&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[1])) + 64)],&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[1])) + 96)]); // line circom 43
Fr_mul(&expaux[5],&circuitConstants[4],&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[1])) + 128)]); // line circom 43
Fr_sub(&expaux[3],&expaux[4],&expaux[5]); // line circom 43
Fr_mul(&expaux[1],&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[1])) + 32)],&expaux[3]); // line circom 43
Fr_add(&expaux[0],&expaux[1],&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[1])) + 128)]); // line circom 43
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[1];
// load src
Fr_add(&expaux[0],&lvar[1],&circuitConstants[2]); // line circom 41
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[1],&circuitConstants[16]); // line circom 41
}
}

void BinSum_95_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 95;
ctx->componentMemory[coffset].templateName = "BinSum";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 64;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[0];
}

void BinSum_95_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
bool* mySubcomponentsParallel = ctx->componentMemory[ctx_index].subcomponentsParallel;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[6];
FrElement lvar[8];
uint sub_component_aux;
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[16]);
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[4]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[75]);
}
{
PFrElement aux_dest = &lvar[3];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[4];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[5];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[6];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[7];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[7];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[2]);
}
{
PFrElement aux_dest = &lvar[5];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[5],&circuitConstants[16]); // line circom 79
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &lvar[6];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[6],&circuitConstants[4]); // line circom 80
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &lvar[3];
// load src
Fr_mul(&expaux[2],&signalValues[mySignalStart + (((32 * Fr_toInt(&lvar[6])) + (1 * Fr_toInt(&lvar[5]))) + 33)],&lvar[7]); // line circom 81
Fr_add(&expaux[0],&lvar[3],&expaux[2]); // line circom 81
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[6];
// load src
Fr_add(&expaux[0],&lvar[6],&circuitConstants[2]); // line circom 80
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[6],&circuitConstants[4]); // line circom 80
}
{
PFrElement aux_dest = &lvar[7];
// load src
Fr_add(&expaux[0],&lvar[7],&lvar[7]); // line circom 83
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[5];
// load src
Fr_add(&expaux[0],&lvar[5],&circuitConstants[2]); // line circom 79
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[5],&circuitConstants[16]); // line circom 79
}
{
PFrElement aux_dest = &lvar[7];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[2]);
}
{
PFrElement aux_dest = &lvar[5];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[5],&circuitConstants[75]); // line circom 87
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[5])) + 0)];
// load src
Fr_shr(&expaux[1],&lvar[3],&lvar[5]); // line circom 88
Fr_band(&expaux[0],&expaux[1],&circuitConstants[2]); // line circom 88
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_sub(&expaux[3],&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[5])) + 0)],&circuitConstants[2]); // line circom 91
Fr_mul(&expaux[1],&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[5])) + 0)],&expaux[3]); // line circom 91
Fr_eq(&expaux[0],&expaux[1],&circuitConstants[0]); // line circom 91
if (!Fr_isTrue(&expaux[0])) std::cout << "Failed assert in template/function " << myTemplateName << " line 91. " <<  "Followed trace of components: " << ctx->getTrace(myId) << std::endl;
assert(Fr_isTrue(&expaux[0]));
{
PFrElement aux_dest = &lvar[4];
// load src
Fr_mul(&expaux[2],&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[5])) + 0)],&lvar[7]); // line circom 93
Fr_add(&expaux[0],&lvar[4],&expaux[2]); // line circom 93
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[7];
// load src
Fr_add(&expaux[0],&lvar[7],&lvar[7]); // line circom 95
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[5];
// load src
Fr_add(&expaux[0],&lvar[5],&circuitConstants[2]); // line circom 87
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[5],&circuitConstants[75]); // line circom 87
}
Fr_eq(&expaux[0],&lvar[3],&lvar[4]); // line circom 100
if (!Fr_isTrue(&expaux[0])) std::cout << "Failed assert in template/function " << myTemplateName << " line 100. " <<  "Followed trace of components: " << ctx->getTrace(myId) << std::endl;
assert(Fr_isTrue(&expaux[0]));
}

void T2_96_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 96;
ctx->componentMemory[coffset].templateName = "T2";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 96;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[3];
}

void T2_96_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
bool* mySubcomponentsParallel = ctx->componentMemory[ctx_index].subcomponentsParallel;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[3];
FrElement lvar[1];
uint sub_component_aux;
{
uint aux_create = 0;
int aux_cmp_num = 0+ctx_index+1;
uint csoffset = mySignalStart+128;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "bigsigma0";
BigSigma_93_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 416 ;
aux_cmp_num += 5;
}
}
{
uint aux_create = 1;
int aux_cmp_num = 5+ctx_index+1;
uint csoffset = mySignalStart+544;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "maj";
Maj_t_94_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 160 ;
aux_cmp_num += 1;
}
}
{
uint aux_create = 2;
int aux_cmp_num = 6+ctx_index+1;
uint csoffset = mySignalStart+704;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "sum";
BinSum_95_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 97 ;
aux_cmp_num += 1;
}
}
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[0],&circuitConstants[16]); // line circom 34
while(Fr_isTrue(&expaux[0])){
{
uint cmp_index_ref = 0;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ((1 * Fr_toInt(&lvar[0])) + 32)];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[0])) + 32)]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
BigSigma_93_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = 1;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ((1 * Fr_toInt(&lvar[0])) + 32)];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[0])) + 32)]);
}
// no need to run sub component
assert(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter);
}
{
uint cmp_index_ref = 1;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ((1 * Fr_toInt(&lvar[0])) + 64)];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[0])) + 64)]);
}
// no need to run sub component
assert(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter);
}
{
uint cmp_index_ref = 1;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ((1 * Fr_toInt(&lvar[0])) + 96)];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[0])) + 96)]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
Maj_t_94_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
PFrElement aux_dest = &lvar[0];
// load src
Fr_add(&expaux[0],&lvar[0],&circuitConstants[2]); // line circom 34
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[0],&circuitConstants[16]); // line circom 34
}
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[0],&circuitConstants[16]); // line circom 43
while(Fr_isTrue(&expaux[0])){
{
uint cmp_index_ref = 2;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ((0 + (1 * Fr_toInt(&lvar[0]))) + 33)];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[0]].signalStart + ((1 * Fr_toInt(&lvar[0])) + 0)]);
}
// no need to run sub component
assert(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter);
}
{
uint cmp_index_ref = 2;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ((32 + (1 * Fr_toInt(&lvar[0]))) + 33)];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[1]].signalStart + ((1 * Fr_toInt(&lvar[0])) + 0)]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
BinSum_95_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
PFrElement aux_dest = &lvar[0];
// load src
Fr_add(&expaux[0],&lvar[0],&circuitConstants[2]); // line circom 43
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[0],&circuitConstants[16]); // line circom 43
}
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[0],&circuitConstants[16]); // line circom 48
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[0])) + 0)];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[2]].signalStart + ((1 * Fr_toInt(&lvar[0])) + 0)]);
}
{
PFrElement aux_dest = &lvar[0];
// load src
Fr_add(&expaux[0],&lvar[0],&circuitConstants[2]); // line circom 48
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[0],&circuitConstants[16]); // line circom 48
}
}

void Sha256compression_97_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 97;
ctx->componentMemory[coffset].templateName = "Sha256compression";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 768;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[376];
}

void Sha256compression_97_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
bool* mySubcomponentsParallel = ctx->componentMemory[ctx_index].subcomponentsParallel;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[5];
FrElement lvar[259];
uint sub_component_aux;
{
uint aux_create = 0;
int aux_cmp_num = 72+ctx_index+1;
uint csoffset = mySignalStart+22536;
uint aux_dimensions[1] = {48};
for (uint i = 0; i < 48; i++) {
std::string new_cmp_name = "sigmaPlus"+ctx->generate_position_array(aux_dimensions, 1, i);
SigmaPlus_18_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 1154 ;
aux_cmp_num += 12;
}
}
{
uint aux_create = 48;
int aux_cmp_num = 0+ctx_index+1;
uint csoffset = mySignalStart+19712;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "ct_k[0]";
K_19_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 0 ;
aux_cmp_num += 0;
}
}
{
uint aux_create = 49;
int aux_cmp_num = 1+ctx_index+1;
uint csoffset = mySignalStart+19744;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "ct_k[1]";
K_20_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 0 ;
aux_cmp_num += 0;
}
}
{
uint aux_create = 50;
int aux_cmp_num = 2+ctx_index+1;
uint csoffset = mySignalStart+19776;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "ct_k[2]";
K_21_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 0 ;
aux_cmp_num += 0;
}
}
{
uint aux_create = 51;
int aux_cmp_num = 3+ctx_index+1;
uint csoffset = mySignalStart+19808;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "ct_k[3]";
K_22_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 0 ;
aux_cmp_num += 0;
}
}
{
uint aux_create = 52;
int aux_cmp_num = 4+ctx_index+1;
uint csoffset = mySignalStart+19840;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "ct_k[4]";
K_23_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 0 ;
aux_cmp_num += 0;
}
}
{
uint aux_create = 53;
int aux_cmp_num = 5+ctx_index+1;
uint csoffset = mySignalStart+19872;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "ct_k[5]";
K_24_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 0 ;
aux_cmp_num += 0;
}
}
{
uint aux_create = 54;
int aux_cmp_num = 6+ctx_index+1;
uint csoffset = mySignalStart+19904;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "ct_k[6]";
K_25_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 0 ;
aux_cmp_num += 0;
}
}
{
uint aux_create = 55;
int aux_cmp_num = 7+ctx_index+1;
uint csoffset = mySignalStart+19936;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "ct_k[7]";
K_26_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 0 ;
aux_cmp_num += 0;
}
}
{
uint aux_create = 56;
int aux_cmp_num = 8+ctx_index+1;
uint csoffset = mySignalStart+19968;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "ct_k[8]";
K_27_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 0 ;
aux_cmp_num += 0;
}
}
{
uint aux_create = 57;
int aux_cmp_num = 9+ctx_index+1;
uint csoffset = mySignalStart+20000;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "ct_k[9]";
K_28_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 0 ;
aux_cmp_num += 0;
}
}
{
uint aux_create = 58;
int aux_cmp_num = 10+ctx_index+1;
uint csoffset = mySignalStart+20032;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "ct_k[10]";
K_29_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 0 ;
aux_cmp_num += 0;
}
}
{
uint aux_create = 59;
int aux_cmp_num = 11+ctx_index+1;
uint csoffset = mySignalStart+20064;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "ct_k[11]";
K_30_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 0 ;
aux_cmp_num += 0;
}
}
{
uint aux_create = 60;
int aux_cmp_num = 12+ctx_index+1;
uint csoffset = mySignalStart+20096;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "ct_k[12]";
K_31_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 0 ;
aux_cmp_num += 0;
}
}
{
uint aux_create = 61;
int aux_cmp_num = 13+ctx_index+1;
uint csoffset = mySignalStart+20128;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "ct_k[13]";
K_32_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 0 ;
aux_cmp_num += 0;
}
}
{
uint aux_create = 62;
int aux_cmp_num = 14+ctx_index+1;
uint csoffset = mySignalStart+20160;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "ct_k[14]";
K_33_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 0 ;
aux_cmp_num += 0;
}
}
{
uint aux_create = 63;
int aux_cmp_num = 15+ctx_index+1;
uint csoffset = mySignalStart+20192;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "ct_k[15]";
K_34_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 0 ;
aux_cmp_num += 0;
}
}
{
uint aux_create = 64;
int aux_cmp_num = 16+ctx_index+1;
uint csoffset = mySignalStart+20224;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "ct_k[16]";
K_35_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 0 ;
aux_cmp_num += 0;
}
}
{
uint aux_create = 65;
int aux_cmp_num = 17+ctx_index+1;
uint csoffset = mySignalStart+20256;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "ct_k[17]";
K_36_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 0 ;
aux_cmp_num += 0;
}
}
{
uint aux_create = 66;
int aux_cmp_num = 18+ctx_index+1;
uint csoffset = mySignalStart+20288;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "ct_k[18]";
K_37_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 0 ;
aux_cmp_num += 0;
}
}
{
uint aux_create = 67;
int aux_cmp_num = 19+ctx_index+1;
uint csoffset = mySignalStart+20320;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "ct_k[19]";
K_38_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 0 ;
aux_cmp_num += 0;
}
}
{
uint aux_create = 68;
int aux_cmp_num = 20+ctx_index+1;
uint csoffset = mySignalStart+20352;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "ct_k[20]";
K_39_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 0 ;
aux_cmp_num += 0;
}
}
{
uint aux_create = 69;
int aux_cmp_num = 21+ctx_index+1;
uint csoffset = mySignalStart+20384;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "ct_k[21]";
K_40_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 0 ;
aux_cmp_num += 0;
}
}
{
uint aux_create = 70;
int aux_cmp_num = 22+ctx_index+1;
uint csoffset = mySignalStart+20416;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "ct_k[22]";
K_41_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 0 ;
aux_cmp_num += 0;
}
}
{
uint aux_create = 71;
int aux_cmp_num = 23+ctx_index+1;
uint csoffset = mySignalStart+20448;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "ct_k[23]";
K_42_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 0 ;
aux_cmp_num += 0;
}
}
{
uint aux_create = 72;
int aux_cmp_num = 24+ctx_index+1;
uint csoffset = mySignalStart+20480;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "ct_k[24]";
K_43_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 0 ;
aux_cmp_num += 0;
}
}
{
uint aux_create = 73;
int aux_cmp_num = 25+ctx_index+1;
uint csoffset = mySignalStart+20512;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "ct_k[25]";
K_44_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 0 ;
aux_cmp_num += 0;
}
}
{
uint aux_create = 74;
int aux_cmp_num = 26+ctx_index+1;
uint csoffset = mySignalStart+20544;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "ct_k[26]";
K_45_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 0 ;
aux_cmp_num += 0;
}
}
{
uint aux_create = 75;
int aux_cmp_num = 27+ctx_index+1;
uint csoffset = mySignalStart+20576;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "ct_k[27]";
K_46_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 0 ;
aux_cmp_num += 0;
}
}
{
uint aux_create = 76;
int aux_cmp_num = 28+ctx_index+1;
uint csoffset = mySignalStart+20608;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "ct_k[28]";
K_47_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 0 ;
aux_cmp_num += 0;
}
}
{
uint aux_create = 77;
int aux_cmp_num = 29+ctx_index+1;
uint csoffset = mySignalStart+20640;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "ct_k[29]";
K_48_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 0 ;
aux_cmp_num += 0;
}
}
{
uint aux_create = 78;
int aux_cmp_num = 30+ctx_index+1;
uint csoffset = mySignalStart+20672;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "ct_k[30]";
K_49_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 0 ;
aux_cmp_num += 0;
}
}
{
uint aux_create = 79;
int aux_cmp_num = 31+ctx_index+1;
uint csoffset = mySignalStart+20704;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "ct_k[31]";
K_50_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 0 ;
aux_cmp_num += 0;
}
}
{
uint aux_create = 80;
int aux_cmp_num = 32+ctx_index+1;
uint csoffset = mySignalStart+20736;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "ct_k[32]";
K_51_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 0 ;
aux_cmp_num += 0;
}
}
{
uint aux_create = 81;
int aux_cmp_num = 33+ctx_index+1;
uint csoffset = mySignalStart+20768;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "ct_k[33]";
K_52_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 0 ;
aux_cmp_num += 0;
}
}
{
uint aux_create = 82;
int aux_cmp_num = 34+ctx_index+1;
uint csoffset = mySignalStart+20800;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "ct_k[34]";
K_53_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 0 ;
aux_cmp_num += 0;
}
}
{
uint aux_create = 83;
int aux_cmp_num = 35+ctx_index+1;
uint csoffset = mySignalStart+20832;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "ct_k[35]";
K_54_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 0 ;
aux_cmp_num += 0;
}
}
{
uint aux_create = 84;
int aux_cmp_num = 36+ctx_index+1;
uint csoffset = mySignalStart+20864;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "ct_k[36]";
K_55_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 0 ;
aux_cmp_num += 0;
}
}
{
uint aux_create = 85;
int aux_cmp_num = 37+ctx_index+1;
uint csoffset = mySignalStart+20896;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "ct_k[37]";
K_56_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 0 ;
aux_cmp_num += 0;
}
}
{
uint aux_create = 86;
int aux_cmp_num = 38+ctx_index+1;
uint csoffset = mySignalStart+20928;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "ct_k[38]";
K_57_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 0 ;
aux_cmp_num += 0;
}
}
{
uint aux_create = 87;
int aux_cmp_num = 39+ctx_index+1;
uint csoffset = mySignalStart+20960;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "ct_k[39]";
K_58_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 0 ;
aux_cmp_num += 0;
}
}
{
uint aux_create = 88;
int aux_cmp_num = 40+ctx_index+1;
uint csoffset = mySignalStart+20992;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "ct_k[40]";
K_59_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 0 ;
aux_cmp_num += 0;
}
}
{
uint aux_create = 89;
int aux_cmp_num = 41+ctx_index+1;
uint csoffset = mySignalStart+21024;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "ct_k[41]";
K_60_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 0 ;
aux_cmp_num += 0;
}
}
{
uint aux_create = 90;
int aux_cmp_num = 42+ctx_index+1;
uint csoffset = mySignalStart+21056;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "ct_k[42]";
K_61_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 0 ;
aux_cmp_num += 0;
}
}
{
uint aux_create = 91;
int aux_cmp_num = 43+ctx_index+1;
uint csoffset = mySignalStart+21088;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "ct_k[43]";
K_62_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 0 ;
aux_cmp_num += 0;
}
}
{
uint aux_create = 92;
int aux_cmp_num = 44+ctx_index+1;
uint csoffset = mySignalStart+21120;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "ct_k[44]";
K_63_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 0 ;
aux_cmp_num += 0;
}
}
{
uint aux_create = 93;
int aux_cmp_num = 45+ctx_index+1;
uint csoffset = mySignalStart+21152;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "ct_k[45]";
K_64_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 0 ;
aux_cmp_num += 0;
}
}
{
uint aux_create = 94;
int aux_cmp_num = 46+ctx_index+1;
uint csoffset = mySignalStart+21184;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "ct_k[46]";
K_65_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 0 ;
aux_cmp_num += 0;
}
}
{
uint aux_create = 95;
int aux_cmp_num = 47+ctx_index+1;
uint csoffset = mySignalStart+21216;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "ct_k[47]";
K_66_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 0 ;
aux_cmp_num += 0;
}
}
{
uint aux_create = 96;
int aux_cmp_num = 48+ctx_index+1;
uint csoffset = mySignalStart+21248;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "ct_k[48]";
K_67_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 0 ;
aux_cmp_num += 0;
}
}
{
uint aux_create = 97;
int aux_cmp_num = 49+ctx_index+1;
uint csoffset = mySignalStart+21280;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "ct_k[49]";
K_68_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 0 ;
aux_cmp_num += 0;
}
}
{
uint aux_create = 98;
int aux_cmp_num = 50+ctx_index+1;
uint csoffset = mySignalStart+21312;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "ct_k[50]";
K_69_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 0 ;
aux_cmp_num += 0;
}
}
{
uint aux_create = 99;
int aux_cmp_num = 51+ctx_index+1;
uint csoffset = mySignalStart+21344;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "ct_k[51]";
K_70_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 0 ;
aux_cmp_num += 0;
}
}
{
uint aux_create = 100;
int aux_cmp_num = 52+ctx_index+1;
uint csoffset = mySignalStart+21376;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "ct_k[52]";
K_71_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 0 ;
aux_cmp_num += 0;
}
}
{
uint aux_create = 101;
int aux_cmp_num = 53+ctx_index+1;
uint csoffset = mySignalStart+21408;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "ct_k[53]";
K_72_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 0 ;
aux_cmp_num += 0;
}
}
{
uint aux_create = 102;
int aux_cmp_num = 54+ctx_index+1;
uint csoffset = mySignalStart+21440;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "ct_k[54]";
K_73_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 0 ;
aux_cmp_num += 0;
}
}
{
uint aux_create = 103;
int aux_cmp_num = 55+ctx_index+1;
uint csoffset = mySignalStart+21472;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "ct_k[55]";
K_74_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 0 ;
aux_cmp_num += 0;
}
}
{
uint aux_create = 104;
int aux_cmp_num = 56+ctx_index+1;
uint csoffset = mySignalStart+21504;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "ct_k[56]";
K_75_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 0 ;
aux_cmp_num += 0;
}
}
{
uint aux_create = 105;
int aux_cmp_num = 57+ctx_index+1;
uint csoffset = mySignalStart+21536;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "ct_k[57]";
K_76_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 0 ;
aux_cmp_num += 0;
}
}
{
uint aux_create = 106;
int aux_cmp_num = 58+ctx_index+1;
uint csoffset = mySignalStart+21568;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "ct_k[58]";
K_77_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 0 ;
aux_cmp_num += 0;
}
}
{
uint aux_create = 107;
int aux_cmp_num = 59+ctx_index+1;
uint csoffset = mySignalStart+21600;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "ct_k[59]";
K_78_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 0 ;
aux_cmp_num += 0;
}
}
{
uint aux_create = 108;
int aux_cmp_num = 60+ctx_index+1;
uint csoffset = mySignalStart+21632;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "ct_k[60]";
K_79_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 0 ;
aux_cmp_num += 0;
}
}
{
uint aux_create = 109;
int aux_cmp_num = 61+ctx_index+1;
uint csoffset = mySignalStart+21664;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "ct_k[61]";
K_80_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 0 ;
aux_cmp_num += 0;
}
}
{
uint aux_create = 110;
int aux_cmp_num = 62+ctx_index+1;
uint csoffset = mySignalStart+21696;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "ct_k[62]";
K_81_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 0 ;
aux_cmp_num += 0;
}
}
{
uint aux_create = 111;
int aux_cmp_num = 63+ctx_index+1;
uint csoffset = mySignalStart+21728;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "ct_k[63]";
K_82_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 0 ;
aux_cmp_num += 0;
}
}
{
uint aux_create = 112;
int aux_cmp_num = 776+ctx_index+1;
uint csoffset = mySignalStart+90344;
uint aux_dimensions[1] = {64};
for (uint i = 0; i < 64; i++) {
std::string new_cmp_name = "t1"+ctx->generate_position_array(aux_dimensions, 1, i);
T1_89_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 963 ;
aux_cmp_num += 8;
}
}
{
uint aux_create = 176;
int aux_cmp_num = 1288+ctx_index+1;
uint csoffset = mySignalStart+151976;
uint aux_dimensions[1] = {64};
for (uint i = 0; i < 64; i++) {
std::string new_cmp_name = "t2"+ctx->generate_position_array(aux_dimensions, 1, i);
T2_96_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 801 ;
aux_cmp_num += 8;
}
}
{
uint aux_create = 240;
int aux_cmp_num = 648+ctx_index+1;
uint csoffset = mySignalStart+77928;
uint aux_dimensions[1] = {64};
for (uint i = 0; i < 64; i++) {
std::string new_cmp_name = "suma"+ctx->generate_position_array(aux_dimensions, 1, i);
BinSum_95_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 97 ;
aux_cmp_num += 1;
}
}
{
uint aux_create = 304;
int aux_cmp_num = 712+ctx_index+1;
uint csoffset = mySignalStart+84136;
uint aux_dimensions[1] = {64};
for (uint i = 0; i < 64; i++) {
std::string new_cmp_name = "sume"+ctx->generate_position_array(aux_dimensions, 1, i);
BinSum_95_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 97 ;
aux_cmp_num += 1;
}
}
{
uint aux_create = 368;
int aux_cmp_num = 64+ctx_index+1;
uint csoffset = mySignalStart+21760;
uint aux_dimensions[1] = {8};
for (uint i = 0; i < 8; i++) {
std::string new_cmp_name = "fsum"+ctx->generate_position_array(aux_dimensions, 1, i);
BinSum_95_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 97 ;
aux_cmp_num += 1;
}
}
{

// start of call bucket
FrElement lvarcall[1112];
// copying argument 0
Fr_copyn(&lvarcall[0],&signalValues[mySignalStart + 256],256);
// end copying argument 0
// copying argument 1
Fr_copyn(&lvarcall[256],&signalValues[mySignalStart + 512],512);
// end copying argument 1
sha256compression_0(ctx,lvarcall,myId,&lvar[0],256);
// end call bucket
}

{
PFrElement aux_dest = &lvar[256];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[256];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[256],&circuitConstants[136]); // line circom 47
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[256])) + 0)];
// load src
// end load src
Fr_copy(aux_dest,&lvar[((1 * Fr_toInt(&lvar[256])) + 0)]);
}
{
PFrElement aux_dest = &lvar[256];
// load src
Fr_add(&expaux[0],&lvar[256],&circuitConstants[2]); // line circom 47
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[256],&circuitConstants[136]); // line circom 47
}
{
PFrElement aux_dest = &lvar[256];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[256],&circuitConstants[104]); // line circom 50
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &lvar[256];
// load src
Fr_add(&expaux[0],&lvar[256],&circuitConstants[2]); // line circom 50
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[256],&circuitConstants[104]); // line circom 50
}
{
PFrElement aux_dest = &lvar[256];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[256],&circuitConstants[137]); // line circom 53
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &lvar[256];
// load src
Fr_add(&expaux[0],&lvar[256],&circuitConstants[2]); // line circom 53
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[256],&circuitConstants[137]); // line circom 53
}
{
PFrElement aux_dest = &lvar[256];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[256],&circuitConstants[137]); // line circom 56
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &lvar[256];
// load src
Fr_add(&expaux[0],&lvar[256],&circuitConstants[2]); // line circom 56
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[256],&circuitConstants[137]); // line circom 56
}
{
PFrElement aux_dest = &lvar[256];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[256],&circuitConstants[137]); // line circom 59
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &lvar[256];
// load src
Fr_add(&expaux[0],&lvar[256],&circuitConstants[2]); // line circom 59
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[256],&circuitConstants[137]); // line circom 59
}
{
PFrElement aux_dest = &lvar[256];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[256],&circuitConstants[137]); // line circom 62
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &lvar[256];
// load src
Fr_add(&expaux[0],&lvar[256],&circuitConstants[2]); // line circom 62
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[256],&circuitConstants[137]); // line circom 62
}
{
PFrElement aux_dest = &lvar[256];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[256],&circuitConstants[137]); // line circom 65
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &lvar[256];
// load src
Fr_add(&expaux[0],&lvar[256],&circuitConstants[2]); // line circom 65
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[256],&circuitConstants[137]); // line circom 65
}
{
PFrElement aux_dest = &lvar[256];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[256],&circuitConstants[30]); // line circom 68
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &lvar[256];
// load src
Fr_add(&expaux[0],&lvar[256],&circuitConstants[2]); // line circom 68
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[256],&circuitConstants[30]); // line circom 68
}
{
PFrElement aux_dest = &lvar[257];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[258];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[258];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[258],&circuitConstants[137]); // line circom 73
while(Fr_isTrue(&expaux[0])){
Fr_lt(&expaux[0],&lvar[258],&circuitConstants[45]); // line circom 74
if(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &lvar[257];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[257],&circuitConstants[16]); // line circom 75
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &signalValues[mySignalStart + (((32 * Fr_toInt(&lvar[258])) + (1 * Fr_toInt(&lvar[257]))) + 17664)];
// load src
Fr_mul(&expaux[2],&lvar[258],&circuitConstants[16]); // line circom 76
Fr_add(&expaux[1],&expaux[2],&circuitConstants[72]); // line circom 76
Fr_sub(&expaux[0],&expaux[1],&lvar[257]); // line circom 76
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + ((1 * Fr_toInt(&expaux[0])) + 512)]);
}
{
PFrElement aux_dest = &lvar[257];
// load src
Fr_add(&expaux[0],&lvar[257],&circuitConstants[2]); // line circom 75
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[257],&circuitConstants[16]); // line circom 75
}
}else{
{
PFrElement aux_dest = &lvar[257];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[257],&circuitConstants[16]); // line circom 79
while(Fr_isTrue(&expaux[0])){
Fr_sub(&expaux[0],&lvar[258],&circuitConstants[45]); // line circom 80
{
uint cmp_index_ref = ((1 * Fr_toInt(&expaux[0])) + 0);
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ((1 * Fr_toInt(&lvar[257])) + 32)];
// load src
Fr_sub(&expaux[0],&lvar[258],&circuitConstants[4]); // line circom 80
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + (((32 * Fr_toInt(&expaux[0])) + (1 * Fr_toInt(&lvar[257]))) + 17664)]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
SigmaPlus_18_run(mySubcomponents[cmp_index_ref],ctx);

}
}
Fr_sub(&expaux[0],&lvar[258],&circuitConstants[45]); // line circom 81
{
uint cmp_index_ref = ((1 * Fr_toInt(&expaux[0])) + 0);
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ((1 * Fr_toInt(&lvar[257])) + 64)];
// load src
Fr_sub(&expaux[0],&lvar[258],&circuitConstants[14]); // line circom 81
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + (((32 * Fr_toInt(&expaux[0])) + (1 * Fr_toInt(&lvar[257]))) + 17664)]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
SigmaPlus_18_run(mySubcomponents[cmp_index_ref],ctx);

}
}
Fr_sub(&expaux[0],&lvar[258],&circuitConstants[45]); // line circom 82
{
uint cmp_index_ref = ((1 * Fr_toInt(&expaux[0])) + 0);
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ((1 * Fr_toInt(&lvar[257])) + 96)];
// load src
Fr_sub(&expaux[0],&lvar[258],&circuitConstants[43]); // line circom 82
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + (((32 * Fr_toInt(&expaux[0])) + (1 * Fr_toInt(&lvar[257]))) + 17664)]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
SigmaPlus_18_run(mySubcomponents[cmp_index_ref],ctx);

}
}
Fr_sub(&expaux[0],&lvar[258],&circuitConstants[45]); // line circom 83
{
uint cmp_index_ref = ((1 * Fr_toInt(&expaux[0])) + 0);
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ((1 * Fr_toInt(&lvar[257])) + 128)];
// load src
Fr_sub(&expaux[0],&lvar[258],&circuitConstants[45]); // line circom 83
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + (((32 * Fr_toInt(&expaux[0])) + (1 * Fr_toInt(&lvar[257]))) + 17664)]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
SigmaPlus_18_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
PFrElement aux_dest = &lvar[257];
// load src
Fr_add(&expaux[0],&lvar[257],&circuitConstants[2]); // line circom 79
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[257],&circuitConstants[16]); // line circom 79
}
{
PFrElement aux_dest = &lvar[257];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[257],&circuitConstants[16]); // line circom 86
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &signalValues[mySignalStart + (((32 * Fr_toInt(&lvar[258])) + (1 * Fr_toInt(&lvar[257]))) + 17664)];
// load src
Fr_sub(&expaux[0],&lvar[258],&circuitConstants[45]); // line circom 87
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[((1 * Fr_toInt(&expaux[0])) + 0)]].signalStart + ((1 * Fr_toInt(&lvar[257])) + 0)]);
}
{
PFrElement aux_dest = &lvar[257];
// load src
Fr_add(&expaux[0],&lvar[257],&circuitConstants[2]); // line circom 86
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[257],&circuitConstants[16]); // line circom 86
}
}
{
PFrElement aux_dest = &lvar[258];
// load src
Fr_add(&expaux[0],&lvar[258],&circuitConstants[2]); // line circom 73
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[258],&circuitConstants[137]); // line circom 73
}
{
PFrElement aux_dest = &lvar[257];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[257],&circuitConstants[16]); // line circom 92
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &signalValues[mySignalStart + ((0 + (1 * Fr_toInt(&lvar[257]))) + 1024)];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[257])) + 256)]);
}
{
PFrElement aux_dest = &signalValues[mySignalStart + ((0 + (1 * Fr_toInt(&lvar[257]))) + 3104)];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + ((1 * (32 + Fr_toInt(&lvar[257]))) + 256)]);
}
{
PFrElement aux_dest = &signalValues[mySignalStart + ((0 + (1 * Fr_toInt(&lvar[257]))) + 5184)];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + ((1 * (64 + Fr_toInt(&lvar[257]))) + 256)]);
}
{
PFrElement aux_dest = &signalValues[mySignalStart + ((0 + (1 * Fr_toInt(&lvar[257]))) + 7264)];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + ((1 * (96 + Fr_toInt(&lvar[257]))) + 256)]);
}
{
PFrElement aux_dest = &signalValues[mySignalStart + ((0 + (1 * Fr_toInt(&lvar[257]))) + 9344)];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + ((1 * (128 + Fr_toInt(&lvar[257]))) + 256)]);
}
{
PFrElement aux_dest = &signalValues[mySignalStart + ((0 + (1 * Fr_toInt(&lvar[257]))) + 11424)];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + ((1 * (160 + Fr_toInt(&lvar[257]))) + 256)]);
}
{
PFrElement aux_dest = &signalValues[mySignalStart + ((0 + (1 * Fr_toInt(&lvar[257]))) + 13504)];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + ((1 * (192 + Fr_toInt(&lvar[257]))) + 256)]);
}
{
PFrElement aux_dest = &signalValues[mySignalStart + ((0 + (1 * Fr_toInt(&lvar[257]))) + 15584)];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + ((1 * (224 + Fr_toInt(&lvar[257]))) + 256)]);
}
{
PFrElement aux_dest = &lvar[257];
// load src
Fr_add(&expaux[0],&lvar[257],&circuitConstants[2]); // line circom 92
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[257],&circuitConstants[16]); // line circom 92
}
{
PFrElement aux_dest = &lvar[258];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[258],&circuitConstants[137]); // line circom 103
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &lvar[257];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[257],&circuitConstants[16]); // line circom 104
while(Fr_isTrue(&expaux[0])){
{
uint cmp_index_ref = ((1 * Fr_toInt(&lvar[258])) + 112);
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ((1 * Fr_toInt(&lvar[257])) + 32)];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + (((32 * Fr_toInt(&lvar[258])) + (1 * Fr_toInt(&lvar[257]))) + 15584)]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
T1_89_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = ((1 * Fr_toInt(&lvar[258])) + 112);
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ((1 * Fr_toInt(&lvar[257])) + 64)];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + (((32 * Fr_toInt(&lvar[258])) + (1 * Fr_toInt(&lvar[257]))) + 9344)]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
T1_89_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = ((1 * Fr_toInt(&lvar[258])) + 112);
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ((1 * Fr_toInt(&lvar[257])) + 96)];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + (((32 * Fr_toInt(&lvar[258])) + (1 * Fr_toInt(&lvar[257]))) + 11424)]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
T1_89_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = ((1 * Fr_toInt(&lvar[258])) + 112);
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ((1 * Fr_toInt(&lvar[257])) + 128)];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + (((32 * Fr_toInt(&lvar[258])) + (1 * Fr_toInt(&lvar[257]))) + 13504)]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
T1_89_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = ((1 * Fr_toInt(&lvar[258])) + 112);
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ((1 * Fr_toInt(&lvar[257])) + 160)];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[((1 * Fr_toInt(&lvar[258])) + 48)]].signalStart + ctx->templateInsId2IOSignalInfo[ctx->componentMemory[mySubcomponents[((1 * Fr_toInt(&lvar[258])) + 48)]].templateId].defs[0].offset+Fr_toInt(&lvar[257])]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
T1_89_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = ((1 * Fr_toInt(&lvar[258])) + 112);
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ((1 * Fr_toInt(&lvar[257])) + 192)];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + (((32 * Fr_toInt(&lvar[258])) + (1 * Fr_toInt(&lvar[257]))) + 17664)]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
T1_89_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = ((1 * Fr_toInt(&lvar[258])) + 176);
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ((1 * Fr_toInt(&lvar[257])) + 32)];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + (((32 * Fr_toInt(&lvar[258])) + (1 * Fr_toInt(&lvar[257]))) + 1024)]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
T2_96_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = ((1 * Fr_toInt(&lvar[258])) + 176);
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ((1 * Fr_toInt(&lvar[257])) + 64)];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + (((32 * Fr_toInt(&lvar[258])) + (1 * Fr_toInt(&lvar[257]))) + 3104)]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
T2_96_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = ((1 * Fr_toInt(&lvar[258])) + 176);
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ((1 * Fr_toInt(&lvar[257])) + 96)];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + (((32 * Fr_toInt(&lvar[258])) + (1 * Fr_toInt(&lvar[257]))) + 5184)]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
T2_96_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
PFrElement aux_dest = &lvar[257];
// load src
Fr_add(&expaux[0],&lvar[257],&circuitConstants[2]); // line circom 104
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[257],&circuitConstants[16]); // line circom 104
}
{
PFrElement aux_dest = &lvar[257];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[257],&circuitConstants[16]); // line circom 117
while(Fr_isTrue(&expaux[0])){
{
uint cmp_index_ref = ((1 * Fr_toInt(&lvar[258])) + 304);
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ((0 + (1 * Fr_toInt(&lvar[257]))) + 33)];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + (((32 * Fr_toInt(&lvar[258])) + (1 * Fr_toInt(&lvar[257]))) + 7264)]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
BinSum_95_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = ((1 * Fr_toInt(&lvar[258])) + 304);
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ((32 + (1 * Fr_toInt(&lvar[257]))) + 33)];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[((1 * Fr_toInt(&lvar[258])) + 112)]].signalStart + ((1 * Fr_toInt(&lvar[257])) + 0)]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
BinSum_95_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = ((1 * Fr_toInt(&lvar[258])) + 240);
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ((0 + (1 * Fr_toInt(&lvar[257]))) + 33)];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[((1 * Fr_toInt(&lvar[258])) + 112)]].signalStart + ((1 * Fr_toInt(&lvar[257])) + 0)]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
BinSum_95_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = ((1 * Fr_toInt(&lvar[258])) + 240);
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ((32 + (1 * Fr_toInt(&lvar[257]))) + 33)];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[((1 * Fr_toInt(&lvar[258])) + 176)]].signalStart + ((1 * Fr_toInt(&lvar[257])) + 0)]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
BinSum_95_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
PFrElement aux_dest = &lvar[257];
// load src
Fr_add(&expaux[0],&lvar[257],&circuitConstants[2]); // line circom 117
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[257],&circuitConstants[16]); // line circom 117
}
{
PFrElement aux_dest = &lvar[257];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[257],&circuitConstants[16]); // line circom 125
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &signalValues[mySignalStart + (((32 * (Fr_toInt(&lvar[258]) + 1)) + (1 * Fr_toInt(&lvar[257]))) + 15584)];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + (((32 * Fr_toInt(&lvar[258])) + (1 * Fr_toInt(&lvar[257]))) + 13504)]);
}
{
PFrElement aux_dest = &signalValues[mySignalStart + (((32 * (Fr_toInt(&lvar[258]) + 1)) + (1 * Fr_toInt(&lvar[257]))) + 13504)];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + (((32 * Fr_toInt(&lvar[258])) + (1 * Fr_toInt(&lvar[257]))) + 11424)]);
}
{
PFrElement aux_dest = &signalValues[mySignalStart + (((32 * (Fr_toInt(&lvar[258]) + 1)) + (1 * Fr_toInt(&lvar[257]))) + 11424)];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + (((32 * Fr_toInt(&lvar[258])) + (1 * Fr_toInt(&lvar[257]))) + 9344)]);
}
{
PFrElement aux_dest = &signalValues[mySignalStart + (((32 * (Fr_toInt(&lvar[258]) + 1)) + (1 * Fr_toInt(&lvar[257]))) + 9344)];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[((1 * Fr_toInt(&lvar[258])) + 304)]].signalStart + ((1 * Fr_toInt(&lvar[257])) + 0)]);
}
{
PFrElement aux_dest = &signalValues[mySignalStart + (((32 * (Fr_toInt(&lvar[258]) + 1)) + (1 * Fr_toInt(&lvar[257]))) + 7264)];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + (((32 * Fr_toInt(&lvar[258])) + (1 * Fr_toInt(&lvar[257]))) + 5184)]);
}
{
PFrElement aux_dest = &signalValues[mySignalStart + (((32 * (Fr_toInt(&lvar[258]) + 1)) + (1 * Fr_toInt(&lvar[257]))) + 5184)];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + (((32 * Fr_toInt(&lvar[258])) + (1 * Fr_toInt(&lvar[257]))) + 3104)]);
}
{
PFrElement aux_dest = &signalValues[mySignalStart + (((32 * (Fr_toInt(&lvar[258]) + 1)) + (1 * Fr_toInt(&lvar[257]))) + 3104)];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + (((32 * Fr_toInt(&lvar[258])) + (1 * Fr_toInt(&lvar[257]))) + 1024)]);
}
{
PFrElement aux_dest = &signalValues[mySignalStart + (((32 * (Fr_toInt(&lvar[258]) + 1)) + (1 * Fr_toInt(&lvar[257]))) + 1024)];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[((1 * Fr_toInt(&lvar[258])) + 240)]].signalStart + ((1 * Fr_toInt(&lvar[257])) + 0)]);
}
{
PFrElement aux_dest = &lvar[257];
// load src
Fr_add(&expaux[0],&lvar[257],&circuitConstants[2]); // line circom 125
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[257],&circuitConstants[16]); // line circom 125
}
{
PFrElement aux_dest = &lvar[258];
// load src
Fr_add(&expaux[0],&lvar[258],&circuitConstants[2]); // line circom 103
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[258],&circuitConstants[137]); // line circom 103
}
{
PFrElement aux_dest = &lvar[257];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[257],&circuitConstants[16]); // line circom 137
while(Fr_isTrue(&expaux[0])){
{
uint cmp_index_ref = 368;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ((0 + (1 * Fr_toInt(&lvar[257]))) + 33)];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + ((1 * (0 + Fr_toInt(&lvar[257]))) + 256)]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
BinSum_95_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = 368;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ((32 + (1 * Fr_toInt(&lvar[257]))) + 33)];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + ((2048 + (1 * Fr_toInt(&lvar[257]))) + 1024)]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
BinSum_95_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = 369;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ((0 + (1 * Fr_toInt(&lvar[257]))) + 33)];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + ((1 * (32 + Fr_toInt(&lvar[257]))) + 256)]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
BinSum_95_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = 369;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ((32 + (1 * Fr_toInt(&lvar[257]))) + 33)];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + ((2048 + (1 * Fr_toInt(&lvar[257]))) + 3104)]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
BinSum_95_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = 370;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ((0 + (1 * Fr_toInt(&lvar[257]))) + 33)];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + ((1 * (64 + Fr_toInt(&lvar[257]))) + 256)]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
BinSum_95_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = 370;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ((32 + (1 * Fr_toInt(&lvar[257]))) + 33)];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + ((2048 + (1 * Fr_toInt(&lvar[257]))) + 5184)]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
BinSum_95_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = 371;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ((0 + (1 * Fr_toInt(&lvar[257]))) + 33)];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + ((1 * (96 + Fr_toInt(&lvar[257]))) + 256)]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
BinSum_95_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = 371;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ((32 + (1 * Fr_toInt(&lvar[257]))) + 33)];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + ((2048 + (1 * Fr_toInt(&lvar[257]))) + 7264)]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
BinSum_95_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = 372;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ((0 + (1 * Fr_toInt(&lvar[257]))) + 33)];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + ((1 * (128 + Fr_toInt(&lvar[257]))) + 256)]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
BinSum_95_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = 372;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ((32 + (1 * Fr_toInt(&lvar[257]))) + 33)];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + ((2048 + (1 * Fr_toInt(&lvar[257]))) + 9344)]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
BinSum_95_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = 373;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ((0 + (1 * Fr_toInt(&lvar[257]))) + 33)];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + ((1 * (160 + Fr_toInt(&lvar[257]))) + 256)]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
BinSum_95_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = 373;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ((32 + (1 * Fr_toInt(&lvar[257]))) + 33)];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + ((2048 + (1 * Fr_toInt(&lvar[257]))) + 11424)]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
BinSum_95_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = 374;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ((0 + (1 * Fr_toInt(&lvar[257]))) + 33)];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + ((1 * (192 + Fr_toInt(&lvar[257]))) + 256)]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
BinSum_95_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = 374;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ((32 + (1 * Fr_toInt(&lvar[257]))) + 33)];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + ((2048 + (1 * Fr_toInt(&lvar[257]))) + 13504)]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
BinSum_95_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = 375;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ((0 + (1 * Fr_toInt(&lvar[257]))) + 33)];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + ((1 * (224 + Fr_toInt(&lvar[257]))) + 256)]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
BinSum_95_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = 375;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ((32 + (1 * Fr_toInt(&lvar[257]))) + 33)];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + ((2048 + (1 * Fr_toInt(&lvar[257]))) + 15584)]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
BinSum_95_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
PFrElement aux_dest = &lvar[257];
// load src
Fr_add(&expaux[0],&lvar[257],&circuitConstants[2]); // line circom 137
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[257],&circuitConstants[16]); // line circom 137
}
{
PFrElement aux_dest = &lvar[257];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[257],&circuitConstants[16]); // line circom 156
while(Fr_isTrue(&expaux[0])){
Fr_sub(&expaux[1],&circuitConstants[72],&lvar[257]); // line circom 157
Fr_eq(&expaux[0],&signalValues[mySignalStart + ((1 * Fr_toInt(&expaux[1])) + 0)],&ctx->signalValues[ctx->componentMemory[mySubcomponents[368]].signalStart + ((1 * Fr_toInt(&lvar[257])) + 0)]); // line circom 157
if (!Fr_isTrue(&expaux[0])) std::cout << "Failed assert in template/function " << myTemplateName << " line 157. " <<  "Followed trace of components: " << ctx->getTrace(myId) << std::endl;
assert(Fr_isTrue(&expaux[0]));
Fr_sub(&expaux[1],&circuitConstants[134],&lvar[257]); // line circom 158
Fr_eq(&expaux[0],&signalValues[mySignalStart + ((1 * Fr_toInt(&expaux[1])) + 0)],&ctx->signalValues[ctx->componentMemory[mySubcomponents[369]].signalStart + ((1 * Fr_toInt(&lvar[257])) + 0)]); // line circom 158
if (!Fr_isTrue(&expaux[0])) std::cout << "Failed assert in template/function " << myTemplateName << " line 158. " <<  "Followed trace of components: " << ctx->getTrace(myId) << std::endl;
assert(Fr_isTrue(&expaux[0]));
Fr_sub(&expaux[1],&circuitConstants[143],&lvar[257]); // line circom 159
Fr_eq(&expaux[0],&signalValues[mySignalStart + ((1 * Fr_toInt(&expaux[1])) + 0)],&ctx->signalValues[ctx->componentMemory[mySubcomponents[370]].signalStart + ((1 * Fr_toInt(&lvar[257])) + 0)]); // line circom 159
if (!Fr_isTrue(&expaux[0])) std::cout << "Failed assert in template/function " << myTemplateName << " line 159. " <<  "Followed trace of components: " << ctx->getTrace(myId) << std::endl;
assert(Fr_isTrue(&expaux[0]));
Fr_sub(&expaux[1],&circuitConstants[144],&lvar[257]); // line circom 160
Fr_eq(&expaux[0],&signalValues[mySignalStart + ((1 * Fr_toInt(&expaux[1])) + 0)],&ctx->signalValues[ctx->componentMemory[mySubcomponents[371]].signalStart + ((1 * Fr_toInt(&lvar[257])) + 0)]); // line circom 160
if (!Fr_isTrue(&expaux[0])) std::cout << "Failed assert in template/function " << myTemplateName << " line 160. " <<  "Followed trace of components: " << ctx->getTrace(myId) << std::endl;
assert(Fr_isTrue(&expaux[0]));
Fr_sub(&expaux[1],&circuitConstants[145],&lvar[257]); // line circom 161
Fr_eq(&expaux[0],&signalValues[mySignalStart + ((1 * Fr_toInt(&expaux[1])) + 0)],&ctx->signalValues[ctx->componentMemory[mySubcomponents[372]].signalStart + ((1 * Fr_toInt(&lvar[257])) + 0)]); // line circom 161
if (!Fr_isTrue(&expaux[0])) std::cout << "Failed assert in template/function " << myTemplateName << " line 161. " <<  "Followed trace of components: " << ctx->getTrace(myId) << std::endl;
assert(Fr_isTrue(&expaux[0]));
Fr_sub(&expaux[1],&circuitConstants[146],&lvar[257]); // line circom 162
Fr_eq(&expaux[0],&signalValues[mySignalStart + ((1 * Fr_toInt(&expaux[1])) + 0)],&ctx->signalValues[ctx->componentMemory[mySubcomponents[373]].signalStart + ((1 * Fr_toInt(&lvar[257])) + 0)]); // line circom 162
if (!Fr_isTrue(&expaux[0])) std::cout << "Failed assert in template/function " << myTemplateName << " line 162. " <<  "Followed trace of components: " << ctx->getTrace(myId) << std::endl;
assert(Fr_isTrue(&expaux[0]));
Fr_sub(&expaux[1],&circuitConstants[147],&lvar[257]); // line circom 163
Fr_eq(&expaux[0],&signalValues[mySignalStart + ((1 * Fr_toInt(&expaux[1])) + 0)],&ctx->signalValues[ctx->componentMemory[mySubcomponents[374]].signalStart + ((1 * Fr_toInt(&lvar[257])) + 0)]); // line circom 163
if (!Fr_isTrue(&expaux[0])) std::cout << "Failed assert in template/function " << myTemplateName << " line 163. " <<  "Followed trace of components: " << ctx->getTrace(myId) << std::endl;
assert(Fr_isTrue(&expaux[0]));
Fr_sub(&expaux[1],&circuitConstants[148],&lvar[257]); // line circom 164
Fr_eq(&expaux[0],&signalValues[mySignalStart + ((1 * Fr_toInt(&expaux[1])) + 0)],&ctx->signalValues[ctx->componentMemory[mySubcomponents[375]].signalStart + ((1 * Fr_toInt(&lvar[257])) + 0)]); // line circom 164
if (!Fr_isTrue(&expaux[0])) std::cout << "Failed assert in template/function " << myTemplateName << " line 164. " <<  "Followed trace of components: " << ctx->getTrace(myId) << std::endl;
assert(Fr_isTrue(&expaux[0]));
{
PFrElement aux_dest = &lvar[257];
// load src
Fr_add(&expaux[0],&lvar[257],&circuitConstants[2]); // line circom 156
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[257],&circuitConstants[16]); // line circom 156
}
}

void Sha256_98_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 98;
ctx->componentMemory[coffset].templateName = "Sha256";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 640;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[10];
}

void Sha256_98_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
bool* mySubcomponentsParallel = ctx->componentMemory[ctx_index].subcomponentsParallel;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[4];
FrElement lvar[5];
uint sub_component_aux;
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[149]);
}
{
uint aux_create = 0;
int aux_cmp_num = 0+ctx_index+1;
uint csoffset = mySignalStart+1920;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "ha0";
H_0_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 32 ;
aux_cmp_num += 1;
}
}
{
uint aux_create = 1;
int aux_cmp_num = 1+ctx_index+1;
uint csoffset = mySignalStart+1952;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "hb0";
H_1_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 32 ;
aux_cmp_num += 1;
}
}
{
uint aux_create = 2;
int aux_cmp_num = 2+ctx_index+1;
uint csoffset = mySignalStart+1984;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "hc0";
H_2_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 32 ;
aux_cmp_num += 1;
}
}
{
uint aux_create = 3;
int aux_cmp_num = 3+ctx_index+1;
uint csoffset = mySignalStart+2016;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "hd0";
H_3_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 32 ;
aux_cmp_num += 1;
}
}
{
uint aux_create = 4;
int aux_cmp_num = 4+ctx_index+1;
uint csoffset = mySignalStart+2048;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "he0";
H_4_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 32 ;
aux_cmp_num += 1;
}
}
{
uint aux_create = 5;
int aux_cmp_num = 5+ctx_index+1;
uint csoffset = mySignalStart+2080;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "hf0";
H_5_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 32 ;
aux_cmp_num += 1;
}
}
{
uint aux_create = 6;
int aux_cmp_num = 6+ctx_index+1;
uint csoffset = mySignalStart+2112;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "hg0";
H_6_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 32 ;
aux_cmp_num += 1;
}
}
{
uint aux_create = 7;
int aux_cmp_num = 7+ctx_index+1;
uint csoffset = mySignalStart+2144;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "hh0";
H_7_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 32 ;
aux_cmp_num += 1;
}
}
{
uint aux_create = 8;
int aux_cmp_num = 8+ctx_index+1;
uint csoffset = mySignalStart+2176;
uint aux_dimensions[1] = {2};
for (uint i = 0; i < 2; i++) {
std::string new_cmp_name = "sha256compression"+ctx->generate_position_array(aux_dimensions, 1, i);
Sha256compression_97_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 203240 ;
aux_cmp_num += 1801;
}
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[3];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[4];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[3];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[4]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[2],&circuitConstants[149]); // line circom 20
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[2])) + 896)];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[2])) + 256)]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
Fr_add(&expaux[0],&lvar[2],&circuitConstants[2]); // line circom 20
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[2],&circuitConstants[149]); // line circom 20
}
{
PFrElement aux_dest = &signalValues[mySignalStart + 1536];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[2]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[150]);
}
Fr_lt(&expaux[0],&lvar[2],&circuitConstants[151]); // line circom 25
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[2])) + 896)];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
Fr_add(&expaux[0],&lvar[2],&circuitConstants[2]); // line circom 25
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[2],&circuitConstants[151]); // line circom 25
}
{
PFrElement aux_dest = &lvar[2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[2],&circuitConstants[137]); // line circom 29
while(Fr_isTrue(&expaux[0])){
Fr_sub(&expaux[1],&circuitConstants[152],&lvar[2]); // line circom 30
Fr_sub(&expaux[0],&expaux[1],&circuitConstants[2]); // line circom 30
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&expaux[0])) + 896)];
// load src
Fr_shr(&expaux[1],&circuitConstants[149],&lvar[2]); // line circom 30
Fr_band(&expaux[0],&expaux[1],&circuitConstants[2]); // line circom 30
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
Fr_add(&expaux[0],&lvar[2],&circuitConstants[2]); // line circom 29
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[2],&circuitConstants[137]); // line circom 29
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[1],&circuitConstants[4]); // line circom 44
while(Fr_isTrue(&expaux[0])){
Fr_eq(&expaux[0],&lvar[1],&circuitConstants[0]); // line circom 48
if(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &lvar[2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[2],&circuitConstants[16]); // line circom 49
while(Fr_isTrue(&expaux[0])){
{
uint cmp_index_ref = 8;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ((1 * (0 + Fr_toInt(&lvar[2]))) + 256)];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[0]].signalStart + ((1 * Fr_toInt(&lvar[2])) + 0)]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
Sha256compression_97_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = 8;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ((1 * (32 + Fr_toInt(&lvar[2]))) + 256)];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[1]].signalStart + ((1 * Fr_toInt(&lvar[2])) + 0)]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
Sha256compression_97_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = 8;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ((1 * (64 + Fr_toInt(&lvar[2]))) + 256)];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[2]].signalStart + ((1 * Fr_toInt(&lvar[2])) + 0)]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
Sha256compression_97_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = 8;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ((1 * (96 + Fr_toInt(&lvar[2]))) + 256)];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[3]].signalStart + ((1 * Fr_toInt(&lvar[2])) + 0)]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
Sha256compression_97_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = 8;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ((1 * (128 + Fr_toInt(&lvar[2]))) + 256)];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[4]].signalStart + ((1 * Fr_toInt(&lvar[2])) + 0)]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
Sha256compression_97_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = 8;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ((1 * (160 + Fr_toInt(&lvar[2]))) + 256)];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[5]].signalStart + ((1 * Fr_toInt(&lvar[2])) + 0)]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
Sha256compression_97_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = 8;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ((1 * (192 + Fr_toInt(&lvar[2]))) + 256)];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[6]].signalStart + ((1 * Fr_toInt(&lvar[2])) + 0)]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
Sha256compression_97_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = 8;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ((1 * (224 + Fr_toInt(&lvar[2]))) + 256)];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[7]].signalStart + ((1 * Fr_toInt(&lvar[2])) + 0)]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
Sha256compression_97_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
PFrElement aux_dest = &lvar[2];
// load src
Fr_add(&expaux[0],&lvar[2],&circuitConstants[2]); // line circom 49
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[2],&circuitConstants[16]); // line circom 49
}
}else{
{
PFrElement aux_dest = &lvar[2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[2],&circuitConstants[16]); // line circom 60
while(Fr_isTrue(&expaux[0])){
{
uint cmp_index_ref = 9;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ((1 * (0 + Fr_toInt(&lvar[2]))) + 256)];
// load src
Fr_sub(&expaux[1],&circuitConstants[72],&lvar[2]); // line circom 61
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[8]].signalStart + ((1 * Fr_toInt(&expaux[1])) + 0)]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
Sha256compression_97_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = 9;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ((1 * (32 + Fr_toInt(&lvar[2]))) + 256)];
// load src
Fr_sub(&expaux[1],&circuitConstants[134],&lvar[2]); // line circom 62
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[8]].signalStart + ((1 * Fr_toInt(&expaux[1])) + 0)]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
Sha256compression_97_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = 9;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ((1 * (64 + Fr_toInt(&lvar[2]))) + 256)];
// load src
Fr_sub(&expaux[1],&circuitConstants[143],&lvar[2]); // line circom 63
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[8]].signalStart + ((1 * Fr_toInt(&expaux[1])) + 0)]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
Sha256compression_97_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = 9;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ((1 * (96 + Fr_toInt(&lvar[2]))) + 256)];
// load src
Fr_sub(&expaux[1],&circuitConstants[144],&lvar[2]); // line circom 64
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[8]].signalStart + ((1 * Fr_toInt(&expaux[1])) + 0)]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
Sha256compression_97_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = 9;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ((1 * (128 + Fr_toInt(&lvar[2]))) + 256)];
// load src
Fr_sub(&expaux[1],&circuitConstants[145],&lvar[2]); // line circom 65
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[8]].signalStart + ((1 * Fr_toInt(&expaux[1])) + 0)]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
Sha256compression_97_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = 9;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ((1 * (160 + Fr_toInt(&lvar[2]))) + 256)];
// load src
Fr_sub(&expaux[1],&circuitConstants[146],&lvar[2]); // line circom 66
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[8]].signalStart + ((1 * Fr_toInt(&expaux[1])) + 0)]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
Sha256compression_97_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = 9;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ((1 * (192 + Fr_toInt(&lvar[2]))) + 256)];
// load src
Fr_sub(&expaux[1],&circuitConstants[147],&lvar[2]); // line circom 67
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[8]].signalStart + ((1 * Fr_toInt(&expaux[1])) + 0)]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
Sha256compression_97_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = 9;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ((1 * (224 + Fr_toInt(&lvar[2]))) + 256)];
// load src
Fr_sub(&expaux[1],&circuitConstants[148],&lvar[2]); // line circom 68
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[8]].signalStart + ((1 * Fr_toInt(&expaux[1])) + 0)]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
Sha256compression_97_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
PFrElement aux_dest = &lvar[2];
// load src
Fr_add(&expaux[0],&lvar[2],&circuitConstants[2]); // line circom 60
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[2],&circuitConstants[16]); // line circom 60
}
}
{
PFrElement aux_dest = &lvar[2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[2],&circuitConstants[153]); // line circom 72
while(Fr_isTrue(&expaux[0])){
{
uint cmp_index_ref = ((1 * Fr_toInt(&lvar[1])) + 8);
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ((1 * Fr_toInt(&lvar[2])) + 512)];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + ((1 * ((Fr_toInt(&lvar[1]) * 512) + Fr_toInt(&lvar[2]))) + 896)]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
Sha256compression_97_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
PFrElement aux_dest = &lvar[2];
// load src
Fr_add(&expaux[0],&lvar[2],&circuitConstants[2]); // line circom 72
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[2],&circuitConstants[153]); // line circom 72
}
{
PFrElement aux_dest = &lvar[1];
// load src
Fr_add(&expaux[0],&lvar[1],&circuitConstants[2]); // line circom 44
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[1],&circuitConstants[4]); // line circom 44
}
{
PFrElement aux_dest = &lvar[2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[2],&circuitConstants[136]); // line circom 77
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[2])) + 0)];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[9]].signalStart + ((1 * Fr_toInt(&lvar[2])) + 0)]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
Fr_add(&expaux[0],&lvar[2],&circuitConstants[2]); // line circom 77
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[2],&circuitConstants[136]); // line circom 77
}
}

void Num2Bits_99_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 99;
ctx->componentMemory[coffset].templateName = "Num2Bits";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 1;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[0];
}

void Num2Bits_99_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
bool* mySubcomponentsParallel = ctx->componentMemory[ctx_index].subcomponentsParallel;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[6];
FrElement lvar[4];
uint sub_component_aux;
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[30]);
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[2]);
}
{
PFrElement aux_dest = &lvar[3];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[3],&circuitConstants[30]); // line circom 31
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[3])) + 0)];
// load src
Fr_shr(&expaux[1],&signalValues[mySignalStart + 8],&lvar[3]); // line circom 32
Fr_band(&expaux[0],&expaux[1],&circuitConstants[2]); // line circom 32
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_sub(&expaux[3],&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[3])) + 0)],&circuitConstants[2]); // line circom 33
Fr_mul(&expaux[1],&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[3])) + 0)],&expaux[3]); // line circom 33
Fr_eq(&expaux[0],&expaux[1],&circuitConstants[0]); // line circom 33
if (!Fr_isTrue(&expaux[0])) std::cout << "Failed assert in template/function " << myTemplateName << " line 33. " <<  "Followed trace of components: " << ctx->getTrace(myId) << std::endl;
assert(Fr_isTrue(&expaux[0]));
{
PFrElement aux_dest = &lvar[1];
// load src
Fr_mul(&expaux[2],&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[3])) + 0)],&lvar[2]); // line circom 34
Fr_add(&expaux[0],&lvar[1],&expaux[2]); // line circom 34
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
Fr_add(&expaux[0],&lvar[2],&lvar[2]); // line circom 35
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[3];
// load src
Fr_add(&expaux[0],&lvar[3],&circuitConstants[2]); // line circom 31
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[3],&circuitConstants[30]); // line circom 31
}
Fr_eq(&expaux[0],&lvar[1],&signalValues[mySignalStart + 8]); // line circom 38
if (!Fr_isTrue(&expaux[0])) std::cout << "Failed assert in template/function " << myTemplateName << " line 38. " <<  "Followed trace of components: " << ctx->getTrace(myId) << std::endl;
assert(Fr_isTrue(&expaux[0]));
}

void Sha256_100_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 100;
ctx->componentMemory[coffset].templateName = "Sha256";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 256;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[9];
}

void Sha256_100_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
bool* mySubcomponentsParallel = ctx->componentMemory[ctx_index].subcomponentsParallel;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[4];
FrElement lvar[5];
uint sub_component_aux;
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[136]);
}
{
uint aux_create = 0;
int aux_cmp_num = 0+ctx_index+1;
uint csoffset = mySignalStart+1024;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "ha0";
H_0_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 32 ;
aux_cmp_num += 1;
}
}
{
uint aux_create = 1;
int aux_cmp_num = 1+ctx_index+1;
uint csoffset = mySignalStart+1056;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "hb0";
H_1_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 32 ;
aux_cmp_num += 1;
}
}
{
uint aux_create = 2;
int aux_cmp_num = 2+ctx_index+1;
uint csoffset = mySignalStart+1088;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "hc0";
H_2_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 32 ;
aux_cmp_num += 1;
}
}
{
uint aux_create = 3;
int aux_cmp_num = 3+ctx_index+1;
uint csoffset = mySignalStart+1120;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "hd0";
H_3_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 32 ;
aux_cmp_num += 1;
}
}
{
uint aux_create = 4;
int aux_cmp_num = 4+ctx_index+1;
uint csoffset = mySignalStart+1152;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "he0";
H_4_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 32 ;
aux_cmp_num += 1;
}
}
{
uint aux_create = 5;
int aux_cmp_num = 5+ctx_index+1;
uint csoffset = mySignalStart+1184;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "hf0";
H_5_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 32 ;
aux_cmp_num += 1;
}
}
{
uint aux_create = 6;
int aux_cmp_num = 6+ctx_index+1;
uint csoffset = mySignalStart+1216;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "hg0";
H_6_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 32 ;
aux_cmp_num += 1;
}
}
{
uint aux_create = 7;
int aux_cmp_num = 7+ctx_index+1;
uint csoffset = mySignalStart+1248;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "hh0";
H_7_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 32 ;
aux_cmp_num += 1;
}
}
{
uint aux_create = 8;
int aux_cmp_num = 8+ctx_index+1;
uint csoffset = mySignalStart+1280;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "sha256compression";
Sha256compression_97_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 203240 ;
aux_cmp_num += 1801;
}
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[3];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[4];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[3];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[2]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[2],&circuitConstants[136]); // line circom 20
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[2])) + 512)];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[2])) + 256)]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
Fr_add(&expaux[0],&lvar[2],&circuitConstants[2]); // line circom 20
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[2],&circuitConstants[136]); // line circom 20
}
{
PFrElement aux_dest = &signalValues[mySignalStart + 768];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[2]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[154]);
}
Fr_lt(&expaux[0],&lvar[2],&circuitConstants[155]); // line circom 25
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[2])) + 512)];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
Fr_add(&expaux[0],&lvar[2],&circuitConstants[2]); // line circom 25
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[2],&circuitConstants[155]); // line circom 25
}
{
PFrElement aux_dest = &lvar[2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[2],&circuitConstants[137]); // line circom 29
while(Fr_isTrue(&expaux[0])){
Fr_sub(&expaux[1],&circuitConstants[153],&lvar[2]); // line circom 30
Fr_sub(&expaux[0],&expaux[1],&circuitConstants[2]); // line circom 30
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&expaux[0])) + 512)];
// load src
Fr_shr(&expaux[1],&circuitConstants[136],&lvar[2]); // line circom 30
Fr_band(&expaux[0],&expaux[1],&circuitConstants[2]); // line circom 30
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
Fr_add(&expaux[0],&lvar[2],&circuitConstants[2]); // line circom 29
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[2],&circuitConstants[137]); // line circom 29
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[1],&circuitConstants[2]); // line circom 44
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &lvar[2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[2],&circuitConstants[16]); // line circom 49
while(Fr_isTrue(&expaux[0])){
{
uint cmp_index_ref = 8;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ((1 * (0 + Fr_toInt(&lvar[2]))) + 256)];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[0]].signalStart + ((1 * Fr_toInt(&lvar[2])) + 0)]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
Sha256compression_97_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = 8;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ((1 * (32 + Fr_toInt(&lvar[2]))) + 256)];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[1]].signalStart + ((1 * Fr_toInt(&lvar[2])) + 0)]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
Sha256compression_97_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = 8;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ((1 * (64 + Fr_toInt(&lvar[2]))) + 256)];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[2]].signalStart + ((1 * Fr_toInt(&lvar[2])) + 0)]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
Sha256compression_97_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = 8;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ((1 * (96 + Fr_toInt(&lvar[2]))) + 256)];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[3]].signalStart + ((1 * Fr_toInt(&lvar[2])) + 0)]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
Sha256compression_97_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = 8;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ((1 * (128 + Fr_toInt(&lvar[2]))) + 256)];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[4]].signalStart + ((1 * Fr_toInt(&lvar[2])) + 0)]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
Sha256compression_97_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = 8;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ((1 * (160 + Fr_toInt(&lvar[2]))) + 256)];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[5]].signalStart + ((1 * Fr_toInt(&lvar[2])) + 0)]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
Sha256compression_97_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = 8;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ((1 * (192 + Fr_toInt(&lvar[2]))) + 256)];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[6]].signalStart + ((1 * Fr_toInt(&lvar[2])) + 0)]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
Sha256compression_97_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = 8;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ((1 * (224 + Fr_toInt(&lvar[2]))) + 256)];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[7]].signalStart + ((1 * Fr_toInt(&lvar[2])) + 0)]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
Sha256compression_97_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
PFrElement aux_dest = &lvar[2];
// load src
Fr_add(&expaux[0],&lvar[2],&circuitConstants[2]); // line circom 49
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[2],&circuitConstants[16]); // line circom 49
}
{
PFrElement aux_dest = &lvar[2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[2],&circuitConstants[153]); // line circom 72
while(Fr_isTrue(&expaux[0])){
{
uint cmp_index_ref = 8;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ((1 * Fr_toInt(&lvar[2])) + 512)];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + ((1 * (0 + Fr_toInt(&lvar[2]))) + 512)]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
Sha256compression_97_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
PFrElement aux_dest = &lvar[2];
// load src
Fr_add(&expaux[0],&lvar[2],&circuitConstants[2]); // line circom 72
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[2],&circuitConstants[153]); // line circom 72
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[2]);
}
Fr_lt(&expaux[0],&lvar[1],&circuitConstants[2]); // line circom 44
}
{
PFrElement aux_dest = &lvar[2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[2],&circuitConstants[136]); // line circom 77
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[2])) + 0)];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[8]].signalStart + ((1 * Fr_toInt(&lvar[2])) + 0)]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
Fr_add(&expaux[0],&lvar[2],&circuitConstants[2]); // line circom 77
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[2],&circuitConstants[136]); // line circom 77
}
}

void Num2Bits_101_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 101;
ctx->componentMemory[coffset].templateName = "Num2Bits";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 1;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[0];
}

void Num2Bits_101_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
bool* mySubcomponentsParallel = ctx->componentMemory[ctx_index].subcomponentsParallel;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[6];
FrElement lvar[4];
uint sub_component_aux;
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[139]);
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[2]);
}
{
PFrElement aux_dest = &lvar[3];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[3],&circuitConstants[139]); // line circom 31
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[3])) + 0)];
// load src
Fr_shr(&expaux[1],&signalValues[mySignalStart + 128],&lvar[3]); // line circom 32
Fr_band(&expaux[0],&expaux[1],&circuitConstants[2]); // line circom 32
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_sub(&expaux[3],&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[3])) + 0)],&circuitConstants[2]); // line circom 33
Fr_mul(&expaux[1],&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[3])) + 0)],&expaux[3]); // line circom 33
Fr_eq(&expaux[0],&expaux[1],&circuitConstants[0]); // line circom 33
if (!Fr_isTrue(&expaux[0])) std::cout << "Failed assert in template/function " << myTemplateName << " line 33. " <<  "Followed trace of components: " << ctx->getTrace(myId) << std::endl;
assert(Fr_isTrue(&expaux[0]));
{
PFrElement aux_dest = &lvar[1];
// load src
Fr_mul(&expaux[2],&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[3])) + 0)],&lvar[2]); // line circom 34
Fr_add(&expaux[0],&lvar[1],&expaux[2]); // line circom 34
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
Fr_add(&expaux[0],&lvar[2],&lvar[2]); // line circom 35
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[3];
// load src
Fr_add(&expaux[0],&lvar[3],&circuitConstants[2]); // line circom 31
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[3],&circuitConstants[139]); // line circom 31
}
Fr_eq(&expaux[0],&lvar[1],&signalValues[mySignalStart + 128]); // line circom 38
if (!Fr_isTrue(&expaux[0])) std::cout << "Failed assert in template/function " << myTemplateName << " line 38. " <<  "Followed trace of components: " << ctx->getTrace(myId) << std::endl;
assert(Fr_isTrue(&expaux[0]));
}

void Num2Bits_102_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 102;
ctx->componentMemory[coffset].templateName = "Num2Bits";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 1;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[0];
}

void Num2Bits_102_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
bool* mySubcomponentsParallel = ctx->componentMemory[ctx_index].subcomponentsParallel;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[6];
FrElement lvar[4];
uint sub_component_aux;
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[35]);
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[2]);
}
{
PFrElement aux_dest = &lvar[3];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[3],&circuitConstants[35]); // line circom 31
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[3])) + 0)];
// load src
Fr_shr(&expaux[1],&signalValues[mySignalStart + 11],&lvar[3]); // line circom 32
Fr_band(&expaux[0],&expaux[1],&circuitConstants[2]); // line circom 32
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_sub(&expaux[3],&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[3])) + 0)],&circuitConstants[2]); // line circom 33
Fr_mul(&expaux[1],&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[3])) + 0)],&expaux[3]); // line circom 33
Fr_eq(&expaux[0],&expaux[1],&circuitConstants[0]); // line circom 33
if (!Fr_isTrue(&expaux[0])) std::cout << "Failed assert in template/function " << myTemplateName << " line 33. " <<  "Followed trace of components: " << ctx->getTrace(myId) << std::endl;
assert(Fr_isTrue(&expaux[0]));
{
PFrElement aux_dest = &lvar[1];
// load src
Fr_mul(&expaux[2],&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[3])) + 0)],&lvar[2]); // line circom 34
Fr_add(&expaux[0],&lvar[1],&expaux[2]); // line circom 34
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
Fr_add(&expaux[0],&lvar[2],&lvar[2]); // line circom 35
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[3];
// load src
Fr_add(&expaux[0],&lvar[3],&circuitConstants[2]); // line circom 31
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[3],&circuitConstants[35]); // line circom 31
}
Fr_eq(&expaux[0],&lvar[1],&signalValues[mySignalStart + 11]); // line circom 38
if (!Fr_isTrue(&expaux[0])) std::cout << "Failed assert in template/function " << myTemplateName << " line 38. " <<  "Followed trace of components: " << ctx->getTrace(myId) << std::endl;
assert(Fr_isTrue(&expaux[0]));
}

void LessThan_103_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 103;
ctx->componentMemory[coffset].templateName = "LessThan";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 2;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[1];
}

void LessThan_103_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
bool* mySubcomponentsParallel = ctx->componentMemory[ctx_index].subcomponentsParallel;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[4];
FrElement lvar[1];
uint sub_component_aux;
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[19]);
}
{
uint aux_create = 0;
int aux_cmp_num = 0+ctx_index+1;
uint csoffset = mySignalStart+3;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "n2b";
Num2Bits_102_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 12 ;
aux_cmp_num += 1;
}
}
if (!Fr_isTrue(&circuitConstants[2])) std::cout << "Failed assert in template/function " << myTemplateName << " line 90. " <<  "Followed trace of components: " << ctx->getTrace(myId) << std::endl;
assert(Fr_isTrue(&circuitConstants[2]));
{
uint cmp_index_ref = 0;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 11];
// load src
Fr_add(&expaux[1],&signalValues[mySignalStart + 1],&circuitConstants[152]); // line circom 96
Fr_sub(&expaux[0],&expaux[1],&signalValues[mySignalStart + 2]); // line circom 96
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
// need to run sub component
assert(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter));
Num2Bits_102_run(mySubcomponents[cmp_index_ref],ctx);
}
{
PFrElement aux_dest = &signalValues[mySignalStart + 0];
// load src
Fr_sub(&expaux[0],&circuitConstants[2],&ctx->signalValues[ctx->componentMemory[mySubcomponents[0]].signalStart + 10]); // line circom 98
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
}

void ShiftLeft_104_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 104;
ctx->componentMemory[coffset].templateName = "ShiftLeft";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 2;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[250];
}

void ShiftLeft_104_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
bool* mySubcomponentsParallel = ctx->componentMemory[ctx_index].subcomponentsParallel;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[6];
FrElement lvar[3];
uint sub_component_aux;
{
uint aux_create = 0;
int aux_cmp_num = 0+ctx_index+1;
uint csoffset = mySignalStart+253;
uint aux_dimensions[1] = {250};
for (uint i = 0; i < 250; i++) {
std::string new_cmp_name = "isStillLessThan"+ctx->generate_position_array(aux_dimensions, 1, i);
LessThan_103_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 15 ;
aux_cmp_num += 2;
}
}
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[156]);
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[1],&circuitConstants[156]); // line circom 37
while(Fr_isTrue(&expaux[0])){
{
uint cmp_index_ref = ((1 * Fr_toInt(&lvar[1])) + 0);
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 1];
// load src
// end load src
Fr_copy(aux_dest,&lvar[1]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
LessThan_103_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = ((1 * Fr_toInt(&lvar[1])) + 0);
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 2];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 2]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
LessThan_103_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
PFrElement aux_dest = &lvar[1];
// load src
Fr_add(&expaux[0],&lvar[1],&circuitConstants[2]); // line circom 37
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[1],&circuitConstants[156]); // line circom 37
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[1],&circuitConstants[156]); // line circom 44
while(Fr_isTrue(&expaux[0])){
Fr_eq(&expaux[0],&lvar[1],&circuitConstants[0]); // line circom 45
if(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &lvar[2];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 1]);
}
}else{
{
PFrElement aux_dest = &lvar[2];
// load src
Fr_sub(&expaux[0],&lvar[1],&circuitConstants[2]); // line circom 45
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + ((1 * Fr_toInt(&expaux[0])) + 3)]);
}
}
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[1])) + 3)];
// load src
Fr_add(&expaux[2],&circuitConstants[2],&ctx->signalValues[ctx->componentMemory[mySubcomponents[((1 * Fr_toInt(&lvar[1])) + 0)]].signalStart + 0]); // line circom 45
Fr_mul(&expaux[0],&lvar[2],&expaux[2]); // line circom 45
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[1];
// load src
Fr_add(&expaux[0],&lvar[1],&circuitConstants[2]); // line circom 44
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[1],&circuitConstants[156]); // line circom 44
}
{
PFrElement aux_dest = &signalValues[mySignalStart + 0];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 252]);
}
}

void Num2Bits_105_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 105;
ctx->componentMemory[coffset].templateName = "Num2Bits";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 1;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[0];
}

void Num2Bits_105_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
bool* mySubcomponentsParallel = ctx->componentMemory[ctx_index].subcomponentsParallel;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[6];
FrElement lvar[4];
uint sub_component_aux;
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[156]);
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[2]);
}
{
PFrElement aux_dest = &lvar[3];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[3],&circuitConstants[156]); // line circom 31
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[3])) + 0)];
// load src
Fr_shr(&expaux[1],&signalValues[mySignalStart + 250],&lvar[3]); // line circom 32
Fr_band(&expaux[0],&expaux[1],&circuitConstants[2]); // line circom 32
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_sub(&expaux[3],&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[3])) + 0)],&circuitConstants[2]); // line circom 33
Fr_mul(&expaux[1],&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[3])) + 0)],&expaux[3]); // line circom 33
Fr_eq(&expaux[0],&expaux[1],&circuitConstants[0]); // line circom 33
if (!Fr_isTrue(&expaux[0])) std::cout << "Failed assert in template/function " << myTemplateName << " line 33. " <<  "Followed trace of components: " << ctx->getTrace(myId) << std::endl;
assert(Fr_isTrue(&expaux[0]));
{
PFrElement aux_dest = &lvar[1];
// load src
Fr_mul(&expaux[2],&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[3])) + 0)],&lvar[2]); // line circom 34
Fr_add(&expaux[0],&lvar[1],&expaux[2]); // line circom 34
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
Fr_add(&expaux[0],&lvar[2],&lvar[2]); // line circom 35
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[3];
// load src
Fr_add(&expaux[0],&lvar[3],&circuitConstants[2]); // line circom 31
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[3],&circuitConstants[156]); // line circom 31
}
Fr_eq(&expaux[0],&lvar[1],&signalValues[mySignalStart + 250]); // line circom 38
if (!Fr_isTrue(&expaux[0])) std::cout << "Failed assert in template/function " << myTemplateName << " line 38. " <<  "Followed trace of components: " << ctx->getTrace(myId) << std::endl;
assert(Fr_isTrue(&expaux[0]));
}

void Bits2Num_106_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 106;
ctx->componentMemory[coffset].templateName = "Bits2Num";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 250;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[0];
}

void Bits2Num_106_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
bool* mySubcomponentsParallel = ctx->componentMemory[ctx_index].subcomponentsParallel;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[5];
FrElement lvar[4];
uint sub_component_aux;
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[156]);
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[2]);
}
{
PFrElement aux_dest = &lvar[3];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[3],&circuitConstants[156]); // line circom 61
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &lvar[1];
// load src
Fr_mul(&expaux[2],&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[3])) + 1)],&lvar[2]); // line circom 62
Fr_add(&expaux[0],&lvar[1],&expaux[2]); // line circom 62
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
Fr_add(&expaux[0],&lvar[2],&lvar[2]); // line circom 63
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[3];
// load src
Fr_add(&expaux[0],&lvar[3],&circuitConstants[2]); // line circom 61
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[3],&circuitConstants[156]); // line circom 61
}
{
PFrElement aux_dest = &signalValues[mySignalStart + 0];
// load src
// end load src
Fr_copy(aux_dest,&lvar[1]);
}
}

void OR_107_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 107;
ctx->componentMemory[coffset].templateName = "OR";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 2;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[0];
}

void OR_107_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
bool* mySubcomponentsParallel = ctx->componentMemory[ctx_index].subcomponentsParallel;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[5];
FrElement lvar[0];
uint sub_component_aux;
{
PFrElement aux_dest = &signalValues[mySignalStart + 0];
// load src
Fr_add(&expaux[1],&signalValues[mySignalStart + 1],&signalValues[mySignalStart + 2]); // line circom 42
Fr_mul(&expaux[2],&signalValues[mySignalStart + 1],&signalValues[mySignalStart + 2]); // line circom 42
Fr_sub(&expaux[0],&expaux[1],&expaux[2]); // line circom 42
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
}

void bitwiseOR_108_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 108;
ctx->componentMemory[coffset].templateName = "bitwiseOR";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 2;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[253];
}

void bitwiseOR_108_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
bool* mySubcomponentsParallel = ctx->componentMemory[ctx_index].subcomponentsParallel;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[3];
FrElement lvar[2];
uint sub_component_aux;
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[156]);
}
{
uint aux_create = 0;
int aux_cmp_num = 250+ctx_index+1;
uint csoffset = mySignalStart+753;
uint aux_dimensions[1] = {2};
for (uint i = 0; i < 2; i++) {
std::string new_cmp_name = "bitified"+ctx->generate_position_array(aux_dimensions, 1, i);
Num2Bits_105_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 251 ;
aux_cmp_num += 1;
}
}
{
uint aux_create = 2;
int aux_cmp_num = 252+ctx_index+1;
uint csoffset = mySignalStart+1255;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "fullOR";
Bits2Num_106_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 251 ;
aux_cmp_num += 1;
}
}
{
uint aux_create = 3;
int aux_cmp_num = 0+ctx_index+1;
uint csoffset = mySignalStart+3;
uint aux_dimensions[1] = {250};
for (uint i = 0; i < 250; i++) {
std::string new_cmp_name = "bitOR"+ctx->generate_position_array(aux_dimensions, 1, i);
OR_107_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 3 ;
aux_cmp_num += 1;
}
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[1],&circuitConstants[4]); // line circom 13
while(Fr_isTrue(&expaux[0])){
{
uint cmp_index_ref = ((1 * Fr_toInt(&lvar[1])) + 0);
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 250];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[1])) + 1)]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
Num2Bits_105_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
PFrElement aux_dest = &lvar[1];
// load src
Fr_add(&expaux[0],&lvar[1],&circuitConstants[2]); // line circom 13
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[1],&circuitConstants[4]); // line circom 13
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[1],&circuitConstants[156]); // line circom 20
while(Fr_isTrue(&expaux[0])){
{
uint cmp_index_ref = ((1 * Fr_toInt(&lvar[1])) + 3);
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 1];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[0]].signalStart + ((1 * Fr_toInt(&lvar[1])) + 0)]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
OR_107_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = ((1 * Fr_toInt(&lvar[1])) + 3);
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 2];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[1]].signalStart + ((1 * Fr_toInt(&lvar[1])) + 0)]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
OR_107_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = 2;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ((1 * Fr_toInt(&lvar[1])) + 1)];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[((1 * Fr_toInt(&lvar[1])) + 3)]].signalStart + 0]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
Bits2Num_106_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
PFrElement aux_dest = &lvar[1];
// load src
Fr_add(&expaux[0],&lvar[1],&circuitConstants[2]); // line circom 20
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[1],&circuitConstants[156]); // line circom 20
}
{
PFrElement aux_dest = &signalValues[mySignalStart + 0];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[2]].signalStart + 0]);
}
}

void getTarget_109_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 109;
ctx->componentMemory[coffset].templateName = "getTarget";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 4;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[5];
}

void getTarget_109_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
bool* mySubcomponentsParallel = ctx->componentMemory[ctx_index].subcomponentsParallel;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[5];
FrElement lvar[0];
uint sub_component_aux;
{
uint aux_create = 0;
int aux_cmp_num = 0+ctx_index+1;
uint csoffset = mySignalStart+7;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "mantshift";
ShiftLeft_104_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 4003 ;
aux_cmp_num += 501;
}
}
{
uint aux_create = 1;
int aux_cmp_num = 1002+ctx_index+1;
uint csoffset = mySignalStart+8013;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "mantv2or";
bitwiseOR_108_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 1506 ;
aux_cmp_num += 254;
}
}
{
uint aux_create = 2;
int aux_cmp_num = 501+ctx_index+1;
uint csoffset = mySignalStart+4010;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "mantshift2";
ShiftLeft_104_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 4003 ;
aux_cmp_num += 501;
}
}
{
uint aux_create = 3;
int aux_cmp_num = 1256+ctx_index+1;
uint csoffset = mySignalStart+9519;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "mantv3or";
bitwiseOR_108_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 1506 ;
aux_cmp_num += 254;
}
}
{
uint aux_create = 4;
int aux_cmp_num = 1510+ctx_index+1;
uint csoffset = mySignalStart+11025;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "targetcompute";
ShiftLeft_104_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 4003 ;
aux_cmp_num += 501;
}
}
{
PFrElement aux_dest = &signalValues[mySignalStart + 5];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 4]);
}
{
PFrElement aux_dest = &signalValues[mySignalStart + 6];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 3]);
}
{
uint cmp_index_ref = 0;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 1];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 6]);
}
// no need to run sub component
assert(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter);
}
{
uint cmp_index_ref = 0;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[30]);
}
// need to run sub component
assert(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter));
ShiftLeft_104_run(mySubcomponents[cmp_index_ref],ctx);
}
{
uint cmp_index_ref = 1;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 1];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 2]);
}
// no need to run sub component
assert(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter);
}
{
uint cmp_index_ref = 1;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 2];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[0]].signalStart + 0]);
}
// need to run sub component
assert(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter));
bitwiseOR_108_run(mySubcomponents[cmp_index_ref],ctx);
}
{
uint cmp_index_ref = 2;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 1];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[1]].signalStart + 0]);
}
// no need to run sub component
assert(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter);
}
{
uint cmp_index_ref = 2;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[30]);
}
// need to run sub component
assert(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter));
ShiftLeft_104_run(mySubcomponents[cmp_index_ref],ctx);
}
{
uint cmp_index_ref = 3;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 1];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 1]);
}
// no need to run sub component
assert(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter);
}
{
uint cmp_index_ref = 3;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 2];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[2]].signalStart + 0]);
}
// need to run sub component
assert(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter));
bitwiseOR_108_run(mySubcomponents[cmp_index_ref],ctx);
}
{
uint cmp_index_ref = 4;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 1];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[3]].signalStart + 0]);
}
// no need to run sub component
assert(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter);
}
{
uint cmp_index_ref = 4;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 2];
// load src
Fr_sub(&expaux[2],&signalValues[mySignalStart + 5],&circuitConstants[6]); // line circom 79
Fr_mul(&expaux[0],&circuitConstants[30],&expaux[2]); // line circom 79
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
// need to run sub component
assert(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter));
ShiftLeft_104_run(mySubcomponents[cmp_index_ref],ctx);
}
{
PFrElement aux_dest = &signalValues[mySignalStart + 0];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[4]].signalStart + 0]);
}
}

void Bits2Num_110_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 110;
ctx->componentMemory[coffset].templateName = "Bits2Num";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 8;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[0];
}

void Bits2Num_110_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
bool* mySubcomponentsParallel = ctx->componentMemory[ctx_index].subcomponentsParallel;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[5];
FrElement lvar[4];
uint sub_component_aux;
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[30]);
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[2]);
}
{
PFrElement aux_dest = &lvar[3];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[3],&circuitConstants[30]); // line circom 61
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &lvar[1];
// load src
Fr_mul(&expaux[2],&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[3])) + 1)],&lvar[2]); // line circom 62
Fr_add(&expaux[0],&lvar[1],&expaux[2]); // line circom 62
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
Fr_add(&expaux[0],&lvar[2],&lvar[2]); // line circom 63
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[3];
// load src
Fr_add(&expaux[0],&lvar[3],&circuitConstants[2]); // line circom 61
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[3],&circuitConstants[30]); // line circom 61
}
{
PFrElement aux_dest = &signalValues[mySignalStart + 0];
// load src
// end load src
Fr_copy(aux_dest,&lvar[1]);
}
}

void Num2Bits_111_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 111;
ctx->componentMemory[coffset].templateName = "Num2Bits";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 1;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[0];
}

void Num2Bits_111_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
bool* mySubcomponentsParallel = ctx->componentMemory[ctx_index].subcomponentsParallel;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[6];
FrElement lvar[4];
uint sub_component_aux;
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[158]);
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[2]);
}
{
PFrElement aux_dest = &lvar[3];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[3],&circuitConstants[158]); // line circom 31
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[3])) + 0)];
// load src
Fr_shr(&expaux[1],&signalValues[mySignalStart + 253],&lvar[3]); // line circom 32
Fr_band(&expaux[0],&expaux[1],&circuitConstants[2]); // line circom 32
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_sub(&expaux[3],&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[3])) + 0)],&circuitConstants[2]); // line circom 33
Fr_mul(&expaux[1],&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[3])) + 0)],&expaux[3]); // line circom 33
Fr_eq(&expaux[0],&expaux[1],&circuitConstants[0]); // line circom 33
if (!Fr_isTrue(&expaux[0])) std::cout << "Failed assert in template/function " << myTemplateName << " line 33. " <<  "Followed trace of components: " << ctx->getTrace(myId) << std::endl;
assert(Fr_isTrue(&expaux[0]));
{
PFrElement aux_dest = &lvar[1];
// load src
Fr_mul(&expaux[2],&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[3])) + 0)],&lvar[2]); // line circom 34
Fr_add(&expaux[0],&lvar[1],&expaux[2]); // line circom 34
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
Fr_add(&expaux[0],&lvar[2],&lvar[2]); // line circom 35
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[3];
// load src
Fr_add(&expaux[0],&lvar[3],&circuitConstants[2]); // line circom 31
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[3],&circuitConstants[158]); // line circom 31
}
Fr_eq(&expaux[0],&lvar[1],&signalValues[mySignalStart + 253]); // line circom 38
if (!Fr_isTrue(&expaux[0])) std::cout << "Failed assert in template/function " << myTemplateName << " line 38. " <<  "Followed trace of components: " << ctx->getTrace(myId) << std::endl;
assert(Fr_isTrue(&expaux[0]));
}

void LessThan_112_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 112;
ctx->componentMemory[coffset].templateName = "LessThan";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 2;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[1];
}

void LessThan_112_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
bool* mySubcomponentsParallel = ctx->componentMemory[ctx_index].subcomponentsParallel;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[4];
FrElement lvar[1];
uint sub_component_aux;
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[159]);
}
{
uint aux_create = 0;
int aux_cmp_num = 0+ctx_index+1;
uint csoffset = mySignalStart+3;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "n2b";
Num2Bits_111_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 254 ;
aux_cmp_num += 1;
}
}
if (!Fr_isTrue(&circuitConstants[2])) std::cout << "Failed assert in template/function " << myTemplateName << " line 90. " <<  "Followed trace of components: " << ctx->getTrace(myId) << std::endl;
assert(Fr_isTrue(&circuitConstants[2]));
{
uint cmp_index_ref = 0;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 253];
// load src
Fr_add(&expaux[1],&signalValues[mySignalStart + 1],&circuitConstants[160]); // line circom 96
Fr_sub(&expaux[0],&expaux[1],&signalValues[mySignalStart + 2]); // line circom 96
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
// need to run sub component
assert(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter));
Num2Bits_111_run(mySubcomponents[cmp_index_ref],ctx);
}
{
PFrElement aux_dest = &signalValues[mySignalStart + 0];
// load src
Fr_sub(&expaux[0],&circuitConstants[2],&ctx->signalValues[ctx->componentMemory[mySubcomponents[0]].signalStart + 252]); // line circom 98
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
}

void CheckOneBlock_113_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 113;
ctx->componentMemory[coffset].templateName = "CheckOneBlock";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 84;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[93];
}

void CheckOneBlock_113_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
bool* mySubcomponentsParallel = ctx->componentMemory[ctx_index].subcomponentsParallel;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[5];
FrElement lvar[3];
uint sub_component_aux;
{
uint aux_create = 0;
int aux_cmp_num = 2+ctx_index+1;
uint csoffset = mySignalStart+853;
uint aux_dimensions[1] = {80};
for (uint i = 0; i < 80; i++) {
std::string new_cmp_name = "blockHeaderToBits"+ctx->generate_position_array(aux_dimensions, 1, i);
Num2Bits_99_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 9 ;
aux_cmp_num += 1;
}
}
{
uint aux_create = 80;
int aux_cmp_num = 83+ctx_index+1;
uint csoffset = mySignalStart+1824;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "firstHash";
Sha256_98_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 408656 ;
aux_cmp_num += 3611;
}
}
{
uint aux_create = 81;
int aux_cmp_num = 3702+ctx_index+1;
uint csoffset = mySignalStart+411032;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "secondHash";
Sha256_100_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 204520 ;
aux_cmp_num += 1810;
}
}
{
uint aux_create = 82;
int aux_cmp_num = 3698+ctx_index+1;
uint csoffset = mySignalStart+410516;
uint aux_dimensions[1] = {2};
for (uint i = 0; i < 2; i++) {
std::string new_cmp_name = "inputBlockHashToBits"+ctx->generate_position_array(aux_dimensions, 1, i);
Num2Bits_101_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 129 ;
aux_cmp_num += 1;
}
}
{
uint aux_create = 84;
int aux_cmp_num = 3700+ctx_index+1;
uint csoffset = mySignalStart+410774;
uint aux_dimensions[1] = {2};
for (uint i = 0; i < 2; i++) {
std::string new_cmp_name = "inputPrevBlockHashToBits"+ctx->generate_position_array(aux_dimensions, 1, i);
Num2Bits_101_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 129 ;
aux_cmp_num += 1;
}
}
{
uint aux_create = 86;
int aux_cmp_num = 5512+ctx_index+1;
uint csoffset = mySignalStart+615552;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "targetComputer";
getTarget_109_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 15028 ;
aux_cmp_num += 2012;
}
}
{
uint aux_create = 87;
int aux_cmp_num = 3694+ctx_index+1;
uint csoffset = mySignalStart+410480;
uint aux_dimensions[1] = {4};
for (uint i = 0; i < 4; i++) {
std::string new_cmp_name = "flippedTargBits"+ctx->generate_position_array(aux_dimensions, 1, i);
Bits2Num_110_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 9 ;
aux_cmp_num += 1;
}
}
{
uint aux_create = 91;
int aux_cmp_num = 82+ctx_index+1;
uint csoffset = mySignalStart+1573;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "computeFlippedBlockHash";
Bits2Num_106_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 251 ;
aux_cmp_num += 1;
}
}
{
uint aux_create = 92;
int aux_cmp_num = 0+ctx_index+1;
uint csoffset = mySignalStart+596;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "blockHashMatchTarget";
LessThan_112_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 257 ;
aux_cmp_num += 2;
}
}
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[0],&circuitConstants[161]); // line circom 93
while(Fr_isTrue(&expaux[0])){
{
uint cmp_index_ref = ((1 * Fr_toInt(&lvar[0])) + 0);
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 8];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[0])) + 4)]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
Num2Bits_99_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[1],&circuitConstants[30]); // line circom 96
while(Fr_isTrue(&expaux[0])){
{
uint cmp_index_ref = 80;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ((1 * ((Fr_toInt(&lvar[0]) * 8) + Fr_toInt(&lvar[1]))) + 256)];
// load src
Fr_sub(&expaux[1],&circuitConstants[14],&lvar[1]); // line circom 97
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[((1 * Fr_toInt(&lvar[0])) + 0)]].signalStart + ((1 * Fr_toInt(&expaux[1])) + 0)]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
Sha256_98_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
PFrElement aux_dest = &lvar[1];
// load src
Fr_add(&expaux[0],&lvar[1],&circuitConstants[2]); // line circom 96
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[1],&circuitConstants[30]); // line circom 96
}
{
PFrElement aux_dest = &lvar[0];
// load src
Fr_add(&expaux[0],&lvar[0],&circuitConstants[2]); // line circom 93
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[0],&circuitConstants[161]); // line circom 93
}
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[0],&circuitConstants[136]); // line circom 101
while(Fr_isTrue(&expaux[0])){
{
uint cmp_index_ref = 81;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ((1 * Fr_toInt(&lvar[0])) + 256)];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[80]].signalStart + ((1 * Fr_toInt(&lvar[0])) + 0)]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
Sha256_100_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
PFrElement aux_dest = &lvar[0];
// load src
Fr_add(&expaux[0],&lvar[0],&circuitConstants[2]); // line circom 101
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[0],&circuitConstants[136]); // line circom 101
}
{
uint cmp_index_ref = 82;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 128];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 2]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
Num2Bits_101_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = 83;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 128];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 3]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
Num2Bits_101_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[0],&circuitConstants[139]); // line circom 111
while(Fr_isTrue(&expaux[0])){
Fr_sub(&expaux[0],&circuitConstants[148],&lvar[0]); // line circom 112
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&expaux[0])) + 84)];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[82]].signalStart + ((1 * Fr_toInt(&lvar[0])) + 0)]);
}
Fr_add(&expaux[2],&lvar[0],&circuitConstants[139]); // line circom 113
Fr_sub(&expaux[0],&circuitConstants[148],&expaux[2]); // line circom 113
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&expaux[0])) + 84)];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[83]].signalStart + ((1 * Fr_toInt(&lvar[0])) + 0)]);
}
{
PFrElement aux_dest = &lvar[0];
// load src
Fr_add(&expaux[0],&lvar[0],&circuitConstants[2]); // line circom 111
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[0],&circuitConstants[139]); // line circom 111
}
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[0],&circuitConstants[136]); // line circom 116
while(Fr_isTrue(&expaux[0])){
Fr_eq(&expaux[0],&ctx->signalValues[ctx->componentMemory[mySubcomponents[81]].signalStart + ((1 * Fr_toInt(&lvar[0])) + 0)],&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[0])) + 84)]); // line circom 118
if (!Fr_isTrue(&expaux[0])) std::cout << "Failed assert in template/function " << myTemplateName << " line 118. " <<  "Followed trace of components: " << ctx->getTrace(myId) << std::endl;
assert(Fr_isTrue(&expaux[0]));
{
PFrElement aux_dest = &lvar[0];
// load src
Fr_add(&expaux[0],&lvar[0],&circuitConstants[2]); // line circom 116
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[0],&circuitConstants[136]); // line circom 116
}
{
uint cmp_index_ref = 84;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 128];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 0]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
Num2Bits_101_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = 85;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 128];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 1]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
Num2Bits_101_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[0],&circuitConstants[139]); // line circom 129
while(Fr_isTrue(&expaux[0])){
Fr_sub(&expaux[0],&circuitConstants[148],&lvar[0]); // line circom 131
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&expaux[0])) + 340)];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[84]].signalStart + ((1 * Fr_toInt(&lvar[0])) + 0)]);
}
Fr_add(&expaux[2],&lvar[0],&circuitConstants[139]); // line circom 132
Fr_sub(&expaux[0],&circuitConstants[148],&expaux[2]); // line circom 132
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&expaux[0])) + 340)];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[85]].signalStart + ((1 * Fr_toInt(&lvar[0])) + 0)]);
}
{
PFrElement aux_dest = &lvar[0];
// load src
Fr_add(&expaux[0],&lvar[0],&circuitConstants[2]); // line circom 129
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[0],&circuitConstants[139]); // line circom 129
}
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[8]);
}
Fr_lt(&expaux[0],&lvar[1],&circuitConstants[80]); // line circom 140
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &lvar[2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[2],&circuitConstants[30]); // line circom 141
while(Fr_isTrue(&expaux[0])){
Fr_sub(&expaux[2],&circuitConstants[14],&lvar[2]); // line circom 143
Fr_eq(&expaux[0],&ctx->signalValues[ctx->componentMemory[mySubcomponents[((1 * Fr_toInt(&lvar[1])) + 0)]].signalStart + ((1 * Fr_toInt(&expaux[2])) + 0)],&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[0])) + 340)]); // line circom 143
if (!Fr_isTrue(&expaux[0])) std::cout << "Failed assert in template/function " << myTemplateName << " line 143. " <<  "Followed trace of components: " << ctx->getTrace(myId) << std::endl;
assert(Fr_isTrue(&expaux[0]));
{
PFrElement aux_dest = &lvar[0];
// load src
Fr_add(&expaux[0],&lvar[0],&circuitConstants[2]); // line circom 144
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
Fr_add(&expaux[0],&lvar[2],&circuitConstants[2]); // line circom 141
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[2],&circuitConstants[30]); // line circom 141
}
{
PFrElement aux_dest = &lvar[1];
// load src
Fr_add(&expaux[0],&lvar[1],&circuitConstants[2]); // line circom 140
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[1],&circuitConstants[80]); // line circom 140
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[1],&circuitConstants[8]); // line circom 151
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &lvar[2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[2],&circuitConstants[30]); // line circom 153
while(Fr_isTrue(&expaux[0])){
{
uint cmp_index_ref = ((1 * Fr_toInt(&lvar[1])) + 87);
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ((1 * Fr_toInt(&lvar[2])) + 1)];
// load src
Fr_sub(&expaux[1],&circuitConstants[14],&lvar[2]); // line circom 154
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[((1 * (Fr_toInt(&lvar[1]) + 72)) + 0)]].signalStart + ((1 * Fr_toInt(&expaux[1])) + 0)]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
Bits2Num_110_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
PFrElement aux_dest = &lvar[2];
// load src
Fr_add(&expaux[0],&lvar[2],&circuitConstants[2]); // line circom 153
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[2],&circuitConstants[30]); // line circom 153
}
{
uint cmp_index_ref = 86;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ((1 * Fr_toInt(&lvar[1])) + 1)];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + ((1 * (Fr_toInt(&lvar[1]) + 72)) + 4)]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
getTarget_109_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
PFrElement aux_dest = &lvar[1];
// load src
Fr_add(&expaux[0],&lvar[1],&circuitConstants[2]); // line circom 151
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[1],&circuitConstants[8]); // line circom 151
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[1],&circuitConstants[161]); // line circom 160
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &lvar[2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[2],&circuitConstants[30]); // line circom 161
while(Fr_isTrue(&expaux[0])){
Fr_mul(&expaux[2],&lvar[1],&circuitConstants[30]); // line circom 162
Fr_add(&expaux[1],&expaux[2],&lvar[2]); // line circom 162
Fr_lt(&expaux[0],&expaux[1],&circuitConstants[156]); // line circom 162
if(Fr_isTrue(&expaux[0])){
{
uint cmp_index_ref = 91;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ((1 * ((Fr_toInt(&lvar[1]) * 8) + Fr_toInt(&lvar[2]))) + 1)];
// load src
Fr_sub(&expaux[0],&circuitConstants[14],&lvar[2]); // line circom 163
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + ((1 * ((Fr_toInt(&lvar[1]) * 8) + Fr_toInt(&expaux[0]))) + 84)]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
Bits2Num_106_run(mySubcomponents[cmp_index_ref],ctx);

}
}
}
{
PFrElement aux_dest = &lvar[2];
// load src
Fr_add(&expaux[0],&lvar[2],&circuitConstants[2]); // line circom 161
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[2],&circuitConstants[30]); // line circom 161
}
{
PFrElement aux_dest = &lvar[1];
// load src
Fr_add(&expaux[0],&lvar[1],&circuitConstants[2]); // line circom 160
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[1],&circuitConstants[161]); // line circom 160
}
{
uint cmp_index_ref = 92;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 1];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[91]].signalStart + 0]);
}
// no need to run sub component
assert(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter);
}
{
uint cmp_index_ref = 92;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 2];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[86]].signalStart + 0]);
}
// need to run sub component
assert(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter));
LessThan_112_run(mySubcomponents[cmp_index_ref],ctx);
}
Fr_eq(&expaux[0],&ctx->signalValues[ctx->componentMemory[mySubcomponents[92]].signalStart + 0],&circuitConstants[2]); // line circom 172
if (!Fr_isTrue(&expaux[0])) std::cout << "Failed assert in template/function " << myTemplateName << " line 172. " <<  "Followed trace of components: " << ctx->getTrace(myId) << std::endl;
assert(Fr_isTrue(&expaux[0]));
}

void Main_114_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 114;
ctx->componentMemory[coffset].templateName = "Main";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 84;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[1];
}

void Main_114_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
bool* mySubcomponentsParallel = ctx->componentMemory[ctx_index].subcomponentsParallel;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[3];
FrElement lvar[3];
uint sub_component_aux;
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[2]);
}
{
uint aux_create = 0;
int aux_cmp_num = 0+ctx_index+1;
uint csoffset = mySignalStart+88;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "checker";
CheckOneBlock_113_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 630580 ;
aux_cmp_num += 7525;
}
}
{
PFrElement aux_dest = &signalValues[mySignalStart + 86];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 2]);
}
{
PFrElement aux_dest = &signalValues[mySignalStart + 87];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 3]);
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[1],&circuitConstants[2]); // line circom 187
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &lvar[2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[2],&circuitConstants[4]); // line circom 190
while(Fr_isTrue(&expaux[0])){
{
uint cmp_index_ref = 0;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ((1 * Fr_toInt(&lvar[2])) + 0)];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[2])) + 86)]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
CheckOneBlock_113_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
PFrElement aux_dest = &lvar[2];
// load src
Fr_add(&expaux[0],&lvar[2],&circuitConstants[2]); // line circom 190
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[2],&circuitConstants[4]); // line circom 190
}
{
PFrElement aux_dest = &lvar[2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[2],&circuitConstants[4]); // line circom 194
while(Fr_isTrue(&expaux[0])){
{
uint cmp_index_ref = 0;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ((1 * Fr_toInt(&lvar[2])) + 2)];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + ((0 + (1 * Fr_toInt(&lvar[2]))) + 4)]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
CheckOneBlock_113_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
PFrElement aux_dest = &lvar[2];
// load src
Fr_add(&expaux[0],&lvar[2],&circuitConstants[2]); // line circom 194
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[2],&circuitConstants[4]); // line circom 194
}
{
PFrElement aux_dest = &lvar[2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[2],&circuitConstants[161]); // line circom 195
while(Fr_isTrue(&expaux[0])){
{
uint cmp_index_ref = 0;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ((1 * Fr_toInt(&lvar[2])) + 4)];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + ((0 + (1 * Fr_toInt(&lvar[2]))) + 6)]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
CheckOneBlock_113_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
PFrElement aux_dest = &lvar[2];
// load src
Fr_add(&expaux[0],&lvar[2],&circuitConstants[2]); // line circom 195
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[2],&circuitConstants[161]); // line circom 195
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[2]);
}
Fr_lt(&expaux[0],&lvar[1],&circuitConstants[2]); // line circom 187
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[1],&circuitConstants[4]); // line circom 199
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[1])) + 0)];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + ((0 + (1 * Fr_toInt(&lvar[1]))) + 4)]);
}
{
PFrElement aux_dest = &lvar[1];
// load src
Fr_add(&expaux[0],&lvar[1],&circuitConstants[2]); // line circom 199
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[1],&circuitConstants[4]); // line circom 199
}
}

void run(Circom_CalcWit* ctx){
Main_114_create(1,0,ctx,"main",0);
Main_114_run(0,ctx);
}

