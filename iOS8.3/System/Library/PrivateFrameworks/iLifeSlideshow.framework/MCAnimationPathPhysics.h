/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:32:19 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/iLifeSlideshow.framework/iLifeSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iLifeSlideshow/MCAnimationPath.h>

@interface MCAnimationPathPhysics : MCAnimationPath {

	float _staticFriction;
	float _kineticFriction;
	float _skinFriction;

}

@property (assign,nonatomic) float staticFriction;               //@synthesize staticFriction=_staticFriction - In the implementation block
@property (assign,nonatomic) float kineticFriction;              //@synthesize kineticFriction=_kineticFriction - In the implementation block
@property (assign,nonatomic) float skinFriction;                 //@synthesize skinFriction=_skinFriction - In the implementation block
-(id)imprint;
-(float)staticFriction;
-(void)setStaticFriction:(float)arg1 ;
-(float)kineticFriction;
-(void)setKineticFriction:(float)arg1 ;
-(float)skinFriction;
-(void)setSkinFriction:(float)arg1 ;
-(void)_copySelfToSnapshot:(id)arg1 ;
-(id)initWithImprint:(id)arg1 ;
@end

