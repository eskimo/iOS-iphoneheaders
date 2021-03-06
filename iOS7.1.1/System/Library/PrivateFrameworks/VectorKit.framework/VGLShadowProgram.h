/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:46 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VGLRealisticFadeProgram.h>

@interface VGLShadowProgram : VGLRealisticFadeProgram {

	SCD_Struct_VG164 _cameraDirection;
	int _uCameraDirection;
	float _ramp;
	int _uRamp;
	float _width;
	int _uWidth;
	float _taper;
	int _uTaper;

}

@property (assign,nonatomic) SCD_Struct_VG164 cameraDirection;              //@synthesize cameraDirection=_cameraDirection - In the implementation block
@property (assign,nonatomic) float ramp;                                    //@synthesize ramp=_ramp - In the implementation block
@property (assign,nonatomic) float width;                                   //@synthesize width=_width - In the implementation block
@property (assign,nonatomic) float taper;                                   //@synthesize taper=_taper - In the implementation block
+(id)vertName;
+(id)fragName;
-(float)width;
-(id).cxx_construct;
-(void)setWidth:(float)arg1 ;
-(void)setup;
-(void)setRamp:(float)arg1 ;
-(void)setCameraDirection:(SCD_Struct_VG164)arg1 ;
-(void)setTaper:(float)arg1 ;
-(float)ramp;
-(SCD_Struct_VG164)cameraDirection;
-(float)taper;
@end

