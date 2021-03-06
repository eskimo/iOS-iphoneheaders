/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:59 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <MessageUI/MFComposeRecipient.h>

@class IMHandle;

@interface CKIMComposeRecipient : MFComposeRecipient {

	IMHandle* _handle;

}

@property (nonatomic,readonly) IMHandle * handle;              //@synthesize handle=_handle - In the implementation block
-(int)property;
-(void)dealloc;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)label;
-(int)identifier;
-(id)displayString;
-(void)setIdentifier:(int)arg1 ;
-(bool)isRemovableFromSearchResults;
-(id)initWithRecord:(void*)arg1 recordID:(int)arg2 property:(int)arg3 identifier:(int)arg4 address:(id)arg5 ;
-(id)commentedAddress;
-(id)compositeName;
-(id)initWithHandle:(id)arg1 ;
-(id)unlocalizedLabel;
-(id)supportedDragTypes;
-(id)objectForDragType:(id)arg1 ;
-(void)setRecord:(void*)arg1 recordID:(int)arg2 identifier:(int)arg3 ;
-(id)handle;
-(id)uncommentedAddress;
-(id)address;
-(int)recordID;
-(void*)record;
@end

