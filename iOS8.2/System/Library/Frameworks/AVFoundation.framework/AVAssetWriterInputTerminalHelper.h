/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:06 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVAssetWriterInputHelper.h>
#import <AVFoundation/AVAssetWriterInputMediaDataRequesterDelegate.h>

@class NSString;

@interface AVAssetWriterInputTerminalHelper : AVAssetWriterInputHelper <AVAssetWriterInputMediaDataRequesterDelegate> {

	int _terminalStatus;
	char _didRequestMediaDataOnce;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithConfigurationState:(id)arg1 ;
-(id)initWithConfigurationState:(id)arg1 terminalStatus:(int)arg2 ;
-(id)transitionToAndReturnTerminalHelperWithTerminalStatus:(int)arg1 ;
-(char)isReadyForMoreMediaData;
-(char)canStartRespondingToEachPassDescriptionReturningReason:(id*)arg1 ;
-(void)requestMediaDataWhenReadyOnQueue:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(char)appendSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(char)appendPixelBuffer:(CVBufferRef)arg1 withPresentationTime:(SCD_Struct_CM4)arg2 ;
-(void)markCurrentPassAsFinished;
-(void)requestMediaDataOnceIfNecessaryWithMediaDataRequester:(id)arg1 ;
-(char)mediaDataRequesterShouldRequestMediaData:(id)arg1 ;
-(int)status;
-(void)markAsFinished;
@end

