/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:18:34 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <QuartzCore/CALayer.h>

@class NSString;

@interface CADistanceFieldLayer : CALayer

@property (copy) NSString * renderMode; 
@property (assign) BOOL invertsShape; 
@property (assign) CGColorRef foregroundColor; 
@property (assign) double offset; 
@property (assign) double sharpness; 
@property (assign) double lineWidth; 
+(id)defaultValueForKey:(id)arg1 ;
+(BOOL)CA_automaticallyNotifiesObservers:(Class)arg1 ;
+(BOOL)_hasRenderLayerSubclass;
-(BOOL)_renderLayerDefinesProperty:(unsigned)arg1 ;
-(unsigned)_renderLayerPropertyAnimationFlags:(unsigned)arg1 ;
-(Layer*)_copyRenderLayer:(Transaction*)arg1 layerFlags:(unsigned)arg2 commitFlags:(unsigned*)arg3 ;
-(double)sharpness;
-(BOOL)invertsShape;
-(unsigned)_renderImageCopyFlags;
-(void)setInvertsShape:(BOOL)arg1 ;
-(void)setSharpness:(double)arg1 ;
-(void)didChangeValueForKey:(id)arg1 ;
-(double)lineWidth;
-(void)setLineWidth:(double)arg1 ;
-(void)setOffset:(double)arg1 ;
-(double)offset;
-(CGColorRef)foregroundColor;
-(void)setForegroundColor:(CGColorRef)arg1 ;
-(void)setRenderMode:(NSString *)arg1 ;
-(NSString *)renderMode;
@end
