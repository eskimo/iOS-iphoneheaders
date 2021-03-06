/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:12 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SAPhoneCallSearchResult.h>

@class NSNumber;

@interface SAPhoneCallHistory : SAPhoneCallSearchResult

@property (nonatomic,copy) NSNumber * blocked; 
@property (nonatomic,copy) NSNumber * callCount; 
@property (nonatomic,copy) NSNumber * faceTime; 
@property (nonatomic,copy) NSNumber * faceTimeAudio; 
@property (nonatomic,copy) NSNumber * missed; 
@property (nonatomic,copy) NSNumber * outgoing; 
+(id)callHistory;
+(id)callHistoryWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setOutgoing:(id)arg1 ;
-(void)setBlocked:(id)arg1 ;
-(id)missed;
-(void)setMissed:(id)arg1 ;
-(id)encodedClassName;
-(void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3 ;
-(id)faceTime;
-(void)setFaceTime:(id)arg1 ;
-(id)faceTimeAudio;
-(void)setFaceTimeAudio:(id)arg1 ;
-(id)outgoing;
-(id)blocked;
-(id)callCount;
-(void)setCallCount:(id)arg1 ;
@end

