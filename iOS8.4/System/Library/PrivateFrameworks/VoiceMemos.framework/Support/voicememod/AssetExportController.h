/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:26:37 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/Support/voicememod
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSOperationQueue, NSObject, NSMutableDictionary;

@interface AssetExportController : NSObject {

	NSOperationQueue* _operationQueue;
	NSObject*<OS_dispatch_queue> _serialQueue;
	NSMutableDictionary* _exportOperationsByCompositionAVURL;
	NSMutableDictionary* _waveformOperationsByCompositionAVURL;

}
-(void)finalizeAssetWithCompositionAVURL:(id)arg1 cacheWaveform:(BOOL)arg2 completionBlock:(/*^block*/id)arg3 ;
-(id)init;
@end

