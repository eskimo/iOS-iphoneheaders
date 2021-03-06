/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:03 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class TSPData;

@interface TSPDocumentResourceDownloadObserverInfo : NSObject {

	id _downloadObserver;
	TSPData* _data;
	/*^block*/id _completionHandler;
	char _isInternalObserver;

}

@property (nonatomic,readonly) char isInternalObserver;              //@synthesize isInternalObserver=_isInternalObserver - In the implementation block
-(id)initWithDownloadObserver:(id)arg1 data:(id)arg2 isInternalObserver:(char)arg3 completionHandler:(/*^block*/id)arg4 ;
-(char)isInternalObserver;
-(id)init;
-(void)postNotification:(int)arg1 ;
@end

