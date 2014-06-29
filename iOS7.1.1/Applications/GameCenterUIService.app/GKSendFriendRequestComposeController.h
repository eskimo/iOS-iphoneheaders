/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:58:59 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/GameCenterUIService.app/GameCenterUIService
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GameCenterUIService/GKUserAddressableComposeController.h>

@class NSMutableSet, NSString, NSNumber;

@interface GKSendFriendRequestComposeController : GKUserAddressableComposeController {

	BOOL _alreadySetUp;
	int _numberOfSuccesses;
	int _numberOfFailures;
	BOOL _dismissed;
	BOOL _alertShown;
	BOOL _messageWasSetExternally;
	BOOL _sending;
	BOOL _shouldHideCancelButton;
	NSMutableSet* _playerFriendRequestsSent;
	NSString* _defaultMessage;
	NSNumber* _rid;
	/*^block*/ id _requestSentHandler;
	/*^block*/ id _cancelledHandler;

}

@property (nonatomic,retain) NSNumber * rid;                                       //@synthesize rid=_rid - In the implementation block
@property (nonatomic,retain) NSMutableSet * playerFriendRequestsSent;              //@synthesize playerFriendRequestsSent=_playerFriendRequestsSent - In the implementation block
@property (assign,nonatomic) BOOL sending;                                         //@synthesize sending=_sending - In the implementation block
@property (nonatomic,copy) id requestSentHandler;                                  //@synthesize requestSentHandler=_requestSentHandler - In the implementation block
@property (nonatomic,copy) id cancelledHandler;                                    //@synthesize cancelledHandler=_cancelledHandler - In the implementation block
@property (assign,nonatomic) BOOL shouldHideCancelButton;                          //@synthesize shouldHideCancelButton=_shouldHideCancelButton - In the implementation block
@property (assign) BOOL messageWasSetExternally;                                   //@synthesize messageWasSetExternally=_messageWasSetExternally - In the implementation block
-(void)setShouldHideCancelButton:(BOOL)arg1 ;
-(void)setCancelledHandler:(/*^block*/ id)arg1 ;
-(void)pushOntoNavigationController:(id)arg1 withSentHandler:(/*^block*/ id)arg2 ;
-(id)playerFriendRequestsSent;
-(void)setRequestSentHandler:(/*^block*/ id)arg1 ;
-(void)addressFieldLayoutWillChange:(id)arg1 ;
-(void)preatomizationTextWasUpdated:(id)arg1 ;
-(void)setMessageWasSetExternally:(BOOL)arg1 ;
-(void)_performOneTimeSetup;
-(BOOL)messageWasSetExternally;
-(/*^block*/ id)cancelledHandler;
-(id)alertViewWithTitle:(id)arg1 andMessage:(id)arg2 ;
-(BOOL)sending;
-(void)setSending:(BOOL)arg1 ;
-(void)showAlertForError:(id)arg1 ;
-(void)setPlayerFriendRequestsSent:(id)arg1 ;
-(void)processFriendRequestResults:(id)arg1 failedRecipients:(id)arg2 recipients:(id)arg3 addresses:(id)arg4 ;
-(void)presentUnvettedEmailAlert;
-(void)showAlertForFailures:(id)arg1 allFailed:(BOOL)arg2 ;
-(/*^block*/ id)requestSentHandler;
-(BOOL)shouldEnableSendButton;
-(void)_addRecipientsFromAPI:(id)arg1 ;
-(BOOL)shouldHideCancelButton;
-(void)send:(id)arg1 ;
-(void)setDefaultMessage:(id)arg1 ;
-(void)addRecipientsWithEmailAddresses:(id)arg1 ;
-(void)addRecipientsWithPlayerIDs:(id)arg1 ;
-(id)rid;
-(void)setRid:(id)arg1 ;
-(id)defaultMessage;
-(void)dealloc;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2 ;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)dismiss;
-(void)updateNavigationButtons;
-(void)cancelButtonClicked:(id)arg1 ;
-(void)updateTitle;
@end
