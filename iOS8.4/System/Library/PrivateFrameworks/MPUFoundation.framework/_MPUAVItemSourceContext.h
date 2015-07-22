/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:23:18 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MPUFoundation/MPUFoundation-Structs.h>
#import <MPUFoundation/MPAVItemPlaylistIdentifier.h>

@protocol MPAVItemQueueIdentifier;
@class MPQueueFeeder, NSString;

@interface _MPUAVItemSourceContext : NSObject <MPAVItemPlaylistIdentifier> {

	id<MPAVItemQueueIdentifier> _itemIdentifier;
	MPQueueFeeder* _queueFeeder;
	long long _playlistIteration;
	unsigned long long _originalIterationIndex;

}

@property (nonatomic,retain) id<MPAVItemQueueIdentifier> itemIdentifier;              //@synthesize itemIdentifier=_itemIdentifier - In the implementation block
@property (nonatomic,retain) MPQueueFeeder * queueFeeder;                             //@synthesize queueFeeder=_queueFeeder - In the implementation block
@property (assign,nonatomic) long long playlistIteration;                             //@synthesize playlistIteration=_playlistIteration - In the implementation block
@property (assign,nonatomic) unsigned long long originalIterationIndex;               //@synthesize originalIterationIndex=_originalIterationIndex - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setItemIdentifier:(id<MPAVItemQueueIdentifier>)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setQueueFeeder:(MPQueueFeeder *)arg1 ;
-(MPQueueFeeder *)queueFeeder;
-(long long)playlistIteration;
-(void)setPlaylistIteration:(long long)arg1 ;
-(void)setOriginalIterationIndex:(unsigned long long)arg1 ;
-(unsigned long long)originalIterationIndex;
-(id<MPAVItemQueueIdentifier>)itemIdentifier;
@end
