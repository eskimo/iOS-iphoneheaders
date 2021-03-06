/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 3:35:06 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/assistant_analyzer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_xpc_object;
@class NSObject;

@interface AFAnalyzer : NSObject {

	NSObject<OS_xpc_object>* _connection;

}
+(id)analyzer;
-(void)runAnalyzerService;
-(void)runAnalysis;
-(id)_addressToPingForHost:(id)arg1 ;
-(void)_getDefaultGateway:(id*)arg1 iface:(id*)arg2 ;
-(double)_measureTimeToLoadURL:(id)arg1 withMethod:(id)arg2 ;
-(void)_pingHost:(id)arg1 time:(double*)arg2 sentPackets:(int*)arg3 droppedPackets:(int*)arg4 ;
-(void)_logAnalysisForURL:(id)arg1 failedIFaceIndex:(id)arg2 sendBufferSize:(id)arg3 isUserFailure:(BOOL)arg4 isWWANPreferred:(BOOL)arg5 isRetrySuccess:(BOOL)arg6 ;
-(void)_startAnalysisWithMessage:(id)arg1 ;
-(void)_handleAnalyzerPeer:(id)arg1 ;
-(id)_resultForCommand:(const char*)arg1 ;
-(void).cxx_destruct;
-(void)_handleMessage:(id)arg1 ;
@end

