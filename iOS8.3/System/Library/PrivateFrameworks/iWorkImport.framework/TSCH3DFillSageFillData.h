/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:42:08 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DSageFillData.h>

@class TSCH3DFill, NSMutableArray;

@interface TSCH3DFillSageFillData : NSObject <TSCH3DSageFillData> {

	TSCH3DFill* mFill;
	NSMutableArray* mTextures;
	NSMutableArray* mTextureBlendModes;

}
+(id)dataWithFill:(id)arg1 ;
-(id)fillSetIdentifier;
-(id)lightingModel;
-(Color)emissive;
-(char)isLayerEnabledForIndex:(unsigned)arg1 ;
-(id)textureForIndex:(unsigned)arg1 ;
-(int)layerTilingModeForIndex:(unsigned)arg1 ;
-(char)layerIsEnvironmentMapForIndex:(unsigned)arg1 ;
-(int)layerBlendModeForIndex:(unsigned)arg1 ;
-(id)initWithFill:(id)arg1 ;
-(unsigned)diffuseCount;
-(id)diffuseMaterial;
-(void)p_addMaterial:(id)arg1 blendMode:(int)arg2 ;
-(unsigned)modulateCount;
-(id)modulateMaterial;
-(id)phongMaterials;
-(id)materialAtIndex:(unsigned)arg1 ;
-(float)layerScaleForIndex:(unsigned)arg1 ;
-(float)layerRotationForIndex:(unsigned)arg1 ;
-(id)layerLightenPercentageForIndex:(unsigned)arg1 ;
-(Color)diffuse;
-(Color)specular;
-(float)shininess;
-(void)dealloc;
-(id)environment;
-(float)opacity;
-(unsigned)layerCount;
@end

