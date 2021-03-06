/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:20:48 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/assistantd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol ADAlarmStoring <NSObject>
@required
-(void)fetchAlarmsWithIdentifiers:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)addAlarm:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)deleteAlarmsWithIdentifiers:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)updateAlarms:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)fetchAlarmsMatchingAnyOfQueries:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)fetchAlarmsMeetingCriteria:(id)arg1 searchOptions:(long long)arg2 completionHandler:(/*^block*/id)arg3;

@end

