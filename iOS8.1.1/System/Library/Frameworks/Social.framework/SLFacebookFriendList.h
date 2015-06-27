/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:28:57 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface SLFacebookFriendList : NSObject {

	NSString* _identifier;
	NSString* _name;
	NSString* _type;

}

@property (retain) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (retain) NSString * name;                    //@synthesize name=_name - In the implementation block
@property (retain) NSString * type;                    //@synthesize type=_type - In the implementation block
+(id)friendListWithDictionary:(id)arg1 ;
+(id)friendListsWithResponseData:(id)arg1 ;
-(id)initWithFriendListDictionary:(id)arg1 ;
-(NSString *)identifier;
-(void)setType:(NSString *)arg1 ;
-(NSString *)type;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)setIdentifier:(NSString *)arg1 ;
@end
