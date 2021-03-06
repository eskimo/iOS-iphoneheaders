/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:54:53 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <DAEAS/ASTask.h>
#import <DAEAS/ASFetchAttachmentTaskProtocol.h>

@class NSString;

@interface ASFetchAttachmentTask : ASTask <ASFetchAttachmentTaskProtocol> {

	NSString* _messageServerID;
	NSString* _attachmentName;

}
-(void)finishWithError:(id)arg1 ;
-(void)dealloc;
-(id)command;
-(id)attachmentName;
-(int)commandCode;
-(id)requestBody;
-(BOOL)processContext:(id)arg1 ;
-(BOOL)shouldLogIncomingData;
-(id)initForMessageServerID:(id)arg1 andAttachmentName:(id)arg2 ;
-(id)parameterData;
-(id)messageID;
-(id)contentType;
@end

