/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:18 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ITMLKit/IKJSObject.h>
#import <ITMLKit/IKJSDOMHTMLCollection.h>

@class IKDOMNode;

@interface IKDOMHTMLCollection : IKJSObject <IKJSDOMHTMLCollection> {

	IKDOMNode* _parentNode;

}

@property (assign,nonatomic,__weak) IKDOMNode * parentNode;              //@synthesize parentNode=_parentNode - In the implementation block
@property (readonly) unsigned long long length; 
-(void)setParentNode:(IKDOMNode *)arg1 ;
-(unsigned long long)length;
-(IKDOMNode *)parentNode;
-(id)item:(unsigned long long)arg1 ;
-(id)initWithAppContext:(id)arg1 node:(id)arg2 ;
@end

