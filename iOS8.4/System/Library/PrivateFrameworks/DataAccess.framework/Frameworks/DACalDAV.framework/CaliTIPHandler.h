/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:21:57 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface CaliTIPHandler : NSObject
+(void)processMessage:(id)arg1 inCalendar:(id)arg2 ;
+(id)debugStringForEvent:(id)arg1 ;
+(BOOL)isAddressMe:(id)arg1 forAccount:(id)arg2 ;
+(BOOL)myStatusNeedsActionForEvent:(id)arg1 withAccount:(id)arg2 ;
+(id)_calculateDiffsForEvent:(id)arg1 inMessage:(id)arg2 ;
+(id)getOccurrenceChange:(id)arg1 forEvent:(id)arg2 inCalendar:(id)arg3 ;
+(BOOL)doScheduleChanges:(id)arg1 applyToEvent:(id)arg2 inCalendar:(id)arg3 ;
+(id)myAddressInAccount:(id)arg1 forEvent:(id)arg2 ;
+(void)initialize;
+(BOOL)logiTIPDetail;
+(void)setLogiTIPDetail:(BOOL)arg1 ;
+(void)processMessages:(id)arg1 inCalendar:(id)arg2 ;
+(BOOL)diffsAreImportant:(id)arg1 ;
@end

