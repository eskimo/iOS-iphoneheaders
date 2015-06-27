/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:06 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol TSCH3DShadowsRenderer;
#import <iWorkImport/iWorkImport-Structs.h>
@class TSCH3DCamera, TSCH3DDataBufferResource, NSObject;

@interface TSCH3DChartShadowsPropertiesInternal : NSObject {

	char mEnabled;
	TSCH3DCamera* mCamera;
	TSCH3DDataBufferResource* mQuad;
	TSCH3DDataBufferResource* mTexcoords;
	TSCH3DDataBufferResource* mFadecoords;
	NSObject*<TSCH3DShadowsRenderer> mRenderer;
	box<glm::detail::tvec3<float> > mShadowPlanePadding;

}

@property (assign,nonatomic) char enabled; 
@property (nonatomic,readonly) char shadowPlaneValid; 
@property (nonatomic,retain) TSCH3DCamera * camera; 
@property (nonatomic,retain) TSCH3DDataBufferResource * quad; 
@property (nonatomic,retain) TSCH3DDataBufferResource * texcoords; 
@property (nonatomic,retain) TSCH3DDataBufferResource * fadecoords; 
@property (nonatomic,readonly) NSObject*<TSCH3DShadowsRenderer> renderer; 
-(TSCH3DDataBufferResource *)texcoords;
-(void)setTexcoords:(TSCH3DDataBufferResource *)arg1 ;
-(void)setupResources;
-(id)initWithCamera:(id)arg1 renderer:(id)arg2 ;
-(char)shadowPlaneValid;
-(TSCH3DDataBufferResource *)fadecoords;
-(void)setFadecoords:(TSCH3DDataBufferResource *)arg1 ;
-(void)dealloc;
-(void)invalidate;
-(void)setEnabled:(char)arg1 ;
-(char)enabled;
-(TSCH3DDataBufferResource *)quad;
-(void)setQuad:(TSCH3DDataBufferResource *)arg1 ;
-(NSObject*<TSCH3DShadowsRenderer>)renderer;
-(TSCH3DCamera *)camera;
-(void)setCamera:(TSCH3DCamera *)arg1 ;
@end
