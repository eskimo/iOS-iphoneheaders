/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:14 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray, NSMutableDictionary;

@interface GKMatchEventQueue : NSObject {

	bool _okToSend;
	NSMutableArray* _events;
	NSMutableDictionary* _connectionInfo;
	bool _relayInitiated;
	bool _hasInitRelayInfo;
	bool _hasUpdateRelayInfo;
	unsigned _sequenceNumber;
	bool _counted;
	long long _playerState;
	long long _deferedPlayerState;

}

@property (assign,nonatomic) long long playerState;                             //@synthesize playerState=_playerState - In the implementation block
@property (assign,nonatomic) bool counted;                                      //@synthesize counted=_counted - In the implementation block
@property (assign,nonatomic) long long deferedPlayerState;                      //@synthesize deferedPlayerState=_deferedPlayerState - In the implementation block
@property (nonatomic,retain) NSMutableArray * events;                           //@synthesize events=_events - In the implementation block
@property (assign,nonatomic) bool okToSend;                                     //@synthesize okToSend=_okToSend - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * connectionInfo;              //@synthesize connectionInfo=_connectionInfo - In the implementation block
@property (assign,nonatomic) bool relayInitiated;                               //@synthesize relayInitiated=_relayInitiated - In the implementation block
@property (assign,nonatomic) bool hasInitRelayInfo;                             //@synthesize hasInitRelayInfo=_hasInitRelayInfo - In the implementation block
@property (assign,nonatomic) bool hasUpdateRelayInfo;                           //@synthesize hasUpdateRelayInfo=_hasUpdateRelayInfo - In the implementation block
@property (assign,nonatomic) unsigned sequenceNumber;                           //@synthesize sequenceNumber=_sequenceNumber - In the implementation block
-(unsigned)sequenceNumber;
-(bool)counted;
-(void)setCounted:(bool)arg1 ;
-(long long)deferedPlayerState;
-(void)setDeferedPlayerState:(long long)arg1 ;
-(bool)okToSend;
-(void)setOkToSend:(bool)arg1 ;
-(id)connectionInfo;
-(void)setConnectionInfo:(id)arg1 ;
-(bool)relayInitiated;
-(void)setRelayInitiated:(bool)arg1 ;
-(bool)hasInitRelayInfo;
-(void)setHasInitRelayInfo:(bool)arg1 ;
-(bool)hasUpdateRelayInfo;
-(void)setHasUpdateRelayInfo:(bool)arg1 ;
-(id)events;
-(void)dealloc;
-(id)init;
-(void)setSequenceNumber:(unsigned)arg1 ;
-(void)setEvents:(id)arg1 ;
-(long long)playerState;
-(void)setPlayerState:(long long)arg1 ;
@end

