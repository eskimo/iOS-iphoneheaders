/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:07 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileMail/FavoriteItem.h>

@class MFMailboxUid, MailAccount, NSString;

@interface FavoriteItem_Mailbox : FavoriteItem {

	MFMailboxUid* _mailbox;
	MailAccount* _account;
	int _mailboxType;
	NSString* _accountRelativePath;
	NSString* _displayName;
	BOOL _originalPushState;

}

@property (assign,nonatomic) BOOL originalPushState;              //@synthesize originalPushState=_originalPushState - In the implementation block
@property (nonatomic,retain) MFMailboxUid * mailbox;              //@synthesize mailbox=_mailbox - In the implementation block
-(void)configureCell:(id)arg1 ;
-(id)representingMailbox;
-(void)wasSelected:(id)arg1 accessoryTapped:(BOOL)arg2 ;
-(void)wasAddedToCollection:(id)arg1 ;
-(void)wasRemovedFromCollecion:(id)arg1 ;
-(BOOL)doesSync;
-(id)syncValue;
-(void)wasChangedExternally;
-(int)_defaultCellAccessoryType;
-(void)setOriginalPushState:(BOOL)arg1 ;
-(BOOL)originalPushState;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)initWithDictionary:(id)arg1 ;
-(BOOL)isVisible;
-(id)dictionaryRepresentation;
-(id)displayName;
-(void)_postNotification;
-(id)syncKey;
-(id)account;
-(void)setMailbox:(id)arg1 ;
-(id)initWithMailbox:(id)arg1 ;
-(id)mailbox;
-(BOOL)isDeletable;
@end
