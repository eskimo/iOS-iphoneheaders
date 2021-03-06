/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:31:56 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/iLifeSlideshow.framework/iLifeSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary, NSLock;

@interface MRShaderManager : NSObject {

	NSMutableDictionary* mGLShadersPerContext;
	NSMutableDictionary* mShadersPerContext;
	NSMutableDictionary* mShaderDescriptions;
	NSLock* mGLShadersPerContextLock;
	NSLock* mShadersPerContextLock;

}
+(void)initialize;
+(id)sharedManager;
+(id)shaderKeyForShaderID:(id)arg1 andArguments:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(void)cleanup;
-(void)finalize;
-(id)shaderForShaderID:(id)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(void)releaseResources;
-(void)forgetContext:(id)arg1 ;
-(void)registerVertexShaderWithVertexShaderSource:(id)arg1 forShaderID:(id)arg2 ;
-(void)registerShaderWithFragmentShaderSource:(id)arg1 andVertexShaderName:(id)arg2 forShaderID:(id)arg3 ;
-(unsigned)_glShaderForID:(id)arg1 inBaseContext:(id)arg2 isFragmentShader:(char)arg3 withArguments:(id)arg4 ;
@end

