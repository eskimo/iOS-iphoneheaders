/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 5:51:11 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class DownloadStep, DownloadStepOperation, DownloadHandlerSession;

@interface DownloadPipelineSlot : NSObject {

	DownloadStep* _downloadStep;
	DownloadStepOperation* _operation;
	DownloadHandlerSession* _session;

}

@property (nonatomic,retain) DownloadStep * downloadStep;                        //@synthesize downloadStep=_downloadStep - In the implementation block
@property (getter=isCancelable,nonatomic,readonly) BOOL cancelable; 
@property (nonatomic,retain) DownloadStepOperation * operation;                  //@synthesize operation=_operation - In the implementation block
@property (nonatomic,retain) DownloadHandlerSession * session;                   //@synthesize session=_session - In the implementation block
-(id)downloadStep;
-(void)setDownloadStep:(id)arg1 ;
-(id)session;
-(void)setSession:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)operation;
-(void)setOperation:(id)arg1 ;
-(BOOL)isCancelable;
@end

