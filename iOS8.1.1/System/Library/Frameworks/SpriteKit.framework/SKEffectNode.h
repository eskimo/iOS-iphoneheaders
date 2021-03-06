/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:29:02 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpriteKit/SKNode.h>

@class CIFilter, SKShader;

@interface SKEffectNode : SKNode

@property (nonatomic,retain) CIFilter * filter; 
@property (assign,nonatomic) BOOL shouldCenterFilter; 
@property (assign,nonatomic) BOOL shouldEnableEffects; 
@property (assign,nonatomic) BOOL shouldRasterize; 
@property (assign,nonatomic) long long blendMode; 
@property (nonatomic,retain) SKShader * shader; 
-(long long)blendMode;
-(void)setBlendMode:(long long)arg1 ;
-(BOOL)isEqualToNode:(id)arg1 ;
-(void)_scaleFactorChangedFrom:(float)arg1 to:(float)arg2 ;
-(void)setShouldEnableEffects:(BOOL)arg1 ;
-(void)setShader:(SKShader *)arg1 ;
-(SKShader *)shader;
-(void)_flippedChangedFrom:(BOOL)arg1 to:(BOOL)arg2 ;
-(BOOL)shouldEnableEffects;
-(BOOL)shouldCenterFilter;
-(void)setShouldCenterFilter:(BOOL)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(unsigned long long)hash;
-(id)description;
-(void)setFilter:(CIFilter *)arg1 ;
-(void)setShouldRasterize:(BOOL)arg1 ;
-(BOOL)shouldRasterize;
-(CIFilter *)filter;
@end

