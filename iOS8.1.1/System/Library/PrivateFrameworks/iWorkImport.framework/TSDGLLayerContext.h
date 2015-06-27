/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:33 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/TSDGLLayerContext.h>

@class EAGLContext, NSString;

@interface TSDGLLayerContext : NSObject <TSDGLLayerContext> {

	EAGLContext* mContext;
	unsigned mRenderbuffer;
	unsigned mFramebuffer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)createFramebufferFromLayer:(id)arg1 ;
-(void)presentRenderbuffer;
-(BOOL)makeCurrentContext;
-(void)dealloc;
-(id)init;
-(BOOL)isValid;
-(void)lock;
-(void)unlock;
-(void)teardown;
@end
