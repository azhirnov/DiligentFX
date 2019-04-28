"#ifndef _GLTF_PBR_STRUCTURES_FXH_\n"
"#define _GLTF_PBR_STRUCTURES_FXH_\n"
"\n"
"#ifdef __cplusplus\n"
"\n"
"#   ifndef CHECK_STRUCT_ALIGNMENT\n"
"#       define CHECK_STRUCT_ALIGNMENT(s) static_assert( sizeof(s) % 16 == 0, \"sizeof(\" #s \") is not multiple of 16\" )\n"
"#   endif\n"
"\n"
"#else\n"
"\n"
"#   ifndef CHECK_STRUCT_ALIGNMENT\n"
"#       define CHECK_STRUCT_ALIGNMENT(s)\n"
"#   endif\n"
"\n"
"#endif\n"
"\n"
"#ifndef MAX_NUM_JOINTS\n"
"#   define MAX_NUM_JOINTS 128\n"
"#endif\n"
"\n"
"#define  PBR_WORKFLOW_METALLIC_ROUGHNESS  0\n"
"#define  PBR_WORKFLOW_SPECULAR_GLOSINESS  1\n"
"\n"
"struct GLTFNodeTransforms\n"
"{\n"
"	float4x4 NodeMatrix;\n"
"	float4x4 JointMatrix[MAX_NUM_JOINTS];\n"
"\n"
"	int      JointCount;\n"
"    float    Dummy0;\n"
"    float    Dummy1;\n"
"    float    Dummy2;\n"
"};\n"
"CHECK_STRUCT_ALIGNMENT(GLTFNodeTransforms);\n"
"\n"
"\n"
"\n"
"struct GLTFRenderParameters\n"
"{\n"
"	float Exposure;\n"
"	float Gamma;\n"
"	float PrefilteredCubeMipLevels;\n"
"	float ScaleIBLAmbient;\n"
"\n"
"	int   DebugViewType;\n"
"    float OcclusionStrength;\n"
"    float EmissionScale;\n"
"    float Dummy2;\n"
"};\n"
"CHECK_STRUCT_ALIGNMENT(GLTFRenderParameters);\n"
"\n"
"struct GLTFMaterialInfo\n"
"{\n"
"	float4  BaseColorFactor;\n"
"	float4  EmissiveFactor;\n"
"	float4  DiffuseFactor;\n"
"	float4  SpecularFactor;\n"
"\n"
"	int     Workflow;\n"
"	float   BaseColorTextureUVSelector;\n"
"	float   PhysicalDescriptorTextureUVSelector;\n"
"	float   NormalTextureUVSelector; \n"
"\n"
"	float   OcclusionTextureUVSelector;\n"
"	float   EmissiveTextureUVSelector;\n"
"	float   MetallicFactor;\n"
"	float   RoughnessFactor;\n"
"\n"
"	int     UseAlphaMask;	\n"
"	float   AlphaMaskCutoff;\n"
"    float   Dummy0;\n"
"    float   Dummy1;\n"
"};\n"
"CHECK_STRUCT_ALIGNMENT(GLTFMaterialInfo);\n"
"\n"
"#endif // _GLTF_PBR_STRUCTURES_FXH_\n"
