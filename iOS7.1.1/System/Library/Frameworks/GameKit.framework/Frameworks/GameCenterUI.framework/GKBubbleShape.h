/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:21 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <GameCenterUI/GameCenterUI-Structs.h>
@interface GKBubbleShape : NSObject {

	GKVertexCurve* _vertexCurves;
	unsigned long long _vertexCount;
	double _vertexVariance;
	double _controlpointVariance;
	double _endpointVariance;

}

@property (assign,nonatomic) GKVertexCurve* vertexCurves;                 //@synthesize vertexCurves=_vertexCurves - In the implementation block
@property (assign,nonatomic) unsigned long long vertexCount;              //@synthesize vertexCount=_vertexCount - In the implementation block
@property (assign,nonatomic) double vertexVariance;                       //@synthesize vertexVariance=_vertexVariance - In the implementation block
@property (assign,nonatomic) double controlpointVariance;                 //@synthesize controlpointVariance=_controlpointVariance - In the implementation block
@property (assign,nonatomic) double endpointVariance;                     //@synthesize endpointVariance=_endpointVariance - In the implementation block
+(id)standardBubbleShape;
+(id)standardBezierPathForSize:(CGSize)arg1 ;
-(id)pathForSize:(CGSize)arg1 ;
-(id)initWithVertexCount:(unsigned long long)arg1 vertexVariance:(double)arg2 endpointVariance:(double)arg3 controlpointVariance:(double)arg4 ;
-(void)generateVertexCurves;
-(void)setVertexCount:(unsigned long long)arg1 ;
-(GKVertexCurve*)vertexCurves;
-(void)setVertexCurves:(GKVertexCurve*)arg1 ;
-(double)vertexVariance;
-(void)setVertexVariance:(double)arg1 ;
-(double)controlpointVariance;
-(void)setControlpointVariance:(double)arg1 ;
-(double)endpointVariance;
-(void)setEndpointVariance:(double)arg1 ;
-(void)dealloc;
-(unsigned long long)vertexCount;
@end

