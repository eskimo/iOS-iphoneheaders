/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:18 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <TelephonyUtilities/TUCall.h>

@class IMAVChat;

@interface TUFaceTimeCall : TUCall {

	IMAVChat* _chat;

}

@property (nonatomic,retain) IMAVChat * chat;              //@synthesize chat=_chat - In the implementation block
+(id)sourceAccount:(char)arg1 ;
-(char)isBlocked;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(void)disconnect;
-(double)startTime;
-(IMAVChat *)chat;
-(id)initWithChat:(id)arg1 ;
-(void)setChat:(IMAVChat *)arg1 ;
-(char)isOutgoing;
-(unsigned)endedReason;
-(int)endedError;
-(void)resetWantsHoldMusic;
-(char)isSendingAudio;
-(void)setIsSendingAudio:(char)arg1 ;
-(void)answerWithSourceIdentifier:(id)arg1 ;
-(char)shouldPlayHoldMusic;
-(char)isUplinkMuted;
-(char)setUplinkMuted:(char)arg1 ;
-(char)isDownlinkMuted;
-(char)setDownlinkMuted:(char)arg1 ;
-(id)destinationID;
-(void)inviteWithCallIdentifier:(int)arg1 ;
-(void)updateForDisconnection;
-(char)isStatusFinal;
-(char)shouldPlayDTMFTone;
-(char)isConferenced;
-(void)joinConference;
-(void)leaveConference;
-(id)remoteParticipant;
-(id)callerNameFromNetwork;
-(char)isAlerting;
-(int)callIdentifier;
-(id)callUUID;
-(id)callHistoryIdentifier;
-(id)totalDataUsed;
-(int)faceTimeIDStatus;
-(char)managesAudioInterruptions;
-(char)needsManualInCallSounds;
-(char)playsConnectedSound;
-(char)isTTY;
-(float)localVolume;
-(id)localFrequency;
-(char)managesAudioRelay;
-(id)conferenceIdentifier;
-(id)remoteFrequency;
-(id)conferenceInviteDictionary;
-(id)remoteUnavailableUserInfo;
-(double)callDuration;
@end
