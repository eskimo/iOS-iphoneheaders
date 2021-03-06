/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:06 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DFramebufferSplitPipeline.h>
#import <iWorkImport/TSCH3DFramebufferAccumulator.h>

@class TSCH3DFramebufferCopyPipeline, TSCH3DComponent16WidenShaderEffect;

@interface TSCH3DComponent16AccumulatePipeline : TSCH3DFramebufferSplitPipeline <TSCH3DFramebufferAccumulator> {

	TSCH3DFramebufferCopyPipeline* mPipeline;
	TSCH3DComponent16WidenShaderEffect* mWiden;
	char mValid;

}
-(id)initWithProcessor:(id)arg1 session:(id)arg2 ;
-(void)setTexcoords:(id)arg1 ;
-(id)target0FBOResource;
-(id)makeFBOWithSize:(tvec2<int>*)arg1 resource:(id)arg2 ;
-(id)target1FBOResource;
-(void)allocateFramebuffersWithSize:(tvec2<int>*)arg1 ;
-(void)setFactor:(float)arg1 ;
-(void)dealloc;
-(char)run;
-(void)reset;
-(void)setVertices:(id)arg1 ;
@end

