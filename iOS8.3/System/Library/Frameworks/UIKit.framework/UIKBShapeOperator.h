/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 11:17:52 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@interface UIKBShapeOperator : NSObject {

	float _scale;

}

@property (assign,nonatomic) float scale;              //@synthesize scale=_scale - In the implementation block
+(id)operatorWithScale:(float)arg1 ;
-(float)scale;
-(void)setScale:(float)arg1 ;
-(CGSize)_scaleRange:(CGSize)arg1 factor:(float)arg2 ;
-(id)shapeByScalingShape:(id)arg1 factor:(CGSize)arg2 ;
-(CGRect)_scaleRect:(CGRect)arg1 factor:(CGSize)arg2 ;
-(id)geometryByScalingShapeGeometry:(id)arg1 factor:(CGSize)arg2 ;
-(id)shapesByScalingShapes:(id)arg1 factor:(CGSize)arg2 ;
-(id)shapesByElaboratingShapes:(id)arg1 insideShape:(id)arg2 count:(int)arg3 ;
@end

