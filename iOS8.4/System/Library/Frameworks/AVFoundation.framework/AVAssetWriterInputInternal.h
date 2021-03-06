/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:17:01 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class AVWeakReference, AVAssetWriterInputHelper, NSObject, AVAssetWriterInputPassDescriptionResponder;

@interface AVAssetWriterInputInternal : NSObject {

	AVWeakReference* weakReference;
	AVAssetWriterInputHelper* helper;
	NSObject*<OS_dispatch_queue> helperQueue;
	BOOL attachedToPixelBufferAdaptor;
	BOOL attachedToMetadataAdaptor;
	AVWeakReference* weakReferenceToAssetWriter;
	long long numberOfAppendFailures;
	NSObject*<OS_dispatch_queue> appendFailureReadWriteQueue;
	AVAssetWriterInputPassDescriptionResponder* passDescriptionResponder;

}
@end

