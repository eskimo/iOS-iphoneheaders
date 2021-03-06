/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:31:45 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol GKVoiceChatClient <NSObject>
@optional
-(void)voiceChatService:(id)arg1 sendRealTimeData:(id)arg2 toParticipantID:(id)arg3;
-(void)voiceChatService:(id)arg1 didReceiveInvitationFromParticipantID:(id)arg2 callID:(unsigned)arg3;
-(void)voiceChatService:(id)arg1 didStartWithParticipantID:(id)arg2;
-(void)voiceChatService:(id)arg1 didNotStartWithParticipantID:(id)arg2 error:(id)arg3;
-(void)voiceChatService:(id)arg1 didStopWithParticipantID:(id)arg2 error:(id)arg3;

@required
-(id)participantID;
-(void)voiceChatService:(id)arg1 sendData:(id)arg2 toParticipantID:(id)arg3;

@end

