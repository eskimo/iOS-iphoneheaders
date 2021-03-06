/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:22 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ManagedConfiguration/MCPayload.h>

@class NSString, NSArray;

@interface MCLDAPAccountPayload : MCPayload {

	NSString* _accountDescription;
	NSString* _hostname;
	NSString* _username;
	NSString* _password;
	char _useSSL;
	NSArray* _searchSettings;
	NSString* _accountPersistentUUID;

}

@property (nonatomic,retain,readonly) NSString * accountDescription;              //@synthesize accountDescription=_accountDescription - In the implementation block
@property (nonatomic,retain,readonly) NSString * hostname;                        //@synthesize hostname=_hostname - In the implementation block
@property (nonatomic,retain) NSString * username;                                 //@synthesize username=_username - In the implementation block
@property (nonatomic,retain) NSString * password;                                 //@synthesize password=_password - In the implementation block
@property (nonatomic,retain,readonly) NSArray * searchSettings;                   //@synthesize searchSettings=_searchSettings - In the implementation block
@property (nonatomic,readonly) char useSSL;                                       //@synthesize useSSL=_useSSL - In the implementation block
@property (nonatomic,copy) NSString * accountPersistentUUID;                      //@synthesize accountPersistentUUID=_accountPersistentUUID - In the implementation block
+(id)typeStrings;
+(id)localizedSingularForm;
+(id)localizedPluralForm;
-(id)description;
-(id)title;
-(id)subtitle2Label;
-(NSString *)password;
-(void)setPassword:(NSString *)arg1 ;
-(void)setUsername:(NSString *)arg1 ;
-(char)useSSL;
-(NSString *)accountPersistentUUID;
-(id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3 ;
-(id)stubDictionary;
-(id)subtitle1Label;
-(id)subtitle1Description;
-(id)payloadDescriptionKeyValueSections;
-(id)subtitle2Description;
-(void)setAccountPersistentUUID:(NSString *)arg1 ;
-(NSArray *)searchSettings;
-(NSString *)accountDescription;
-(NSString *)username;
-(NSString *)hostname;
@end

