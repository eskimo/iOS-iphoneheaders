/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:27:55 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface PFUbiquityLogging : NSObject {

	int _desiredLogLevel;

}

@property (assign,nonatomic) int desiredLogLevel;              //@synthesize desiredLogLevel=_desiredLogLevel - In the implementation block
+(BOOL)canLogMessageAtLevel:(int)arg1 ;
+(void)setLoggingLevel:(int)arg1 ;
+(void)initialize;
-(void)userDefaultsChanged:(id)arg1 ;
-(void)checkUserDefaults;
-(void)setDesiredLogLevel:(int)arg1 ;
-(int)desiredLogLevel;
-(void)dealloc;
-(id)init;
@end

