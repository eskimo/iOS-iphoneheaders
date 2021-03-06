/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 12:47:04 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/assistantd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol ADAlarmStoring <NSObject>
@required
-(void)fetchAlarmsWithIdentifiers:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)addAlarm:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)deleteAlarmsWithIdentifiers:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)updateAlarms:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)fetchAlarmsMatchingAnyOfQueries:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)fetchAlarmsMeetingCriteria:(id)arg1 searchOptions:(int)arg2 completionHandler:(/*^block*/id)arg3;

@end

