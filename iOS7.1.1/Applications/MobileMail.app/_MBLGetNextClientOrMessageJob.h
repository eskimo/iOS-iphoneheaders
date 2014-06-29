/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:06 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MBLSingleMessageClient;
@class NSArray, MFMailMessage;

@interface _MBLGetNextClientOrMessageJob : NSObject {

	NSArray* _clients;
	NSArray* _messages;
	NSArray* _viewingMessages;
	id _mbl;
	<MBLSingleMessageClient>* _nextClient;
	MFMailMessage* _nextMessage;

}

@property (nonatomic,copy) NSArray * clients;                                      //@synthesize clients=_clients - In the implementation block
@property (nonatomic,copy) NSArray * messages;                                     //@synthesize messages=_messages - In the implementation block
@property (nonatomic,copy) NSArray * viewingMessages;                              //@synthesize viewingMessages=_viewingMessages - In the implementation block
@property (nonatomic,readonly) <MBLSingleMessageClient> * nextClient;              //@synthesize nextClient=_nextClient - In the implementation block
@property (nonatomic,readonly) MFMailMessage * nextMessage;                        //@synthesize nextMessage=_nextMessage - In the implementation block
-(id)initForMBLMailbox:(id)arg1 ;
-(void)setMessages:(id)arg1 ;
-(void)setViewingMessages:(id)arg1 ;
-(id)nextClient;
-(id)viewingMessages;
-(void)dealloc;
-(void)run;
-(void)setClients:(id)arg1 ;
-(id)clients;
-(id)messages;
-(id)nextMessage;
@end
