/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:17:54 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSURLFileTypeMappingsInternal;

@interface NSURLFileTypeMappings : NSObject {

	NSURLFileTypeMappingsInternal* _internal;

}
+(id)sharedMappings;
-(id)_UTIMIMETypeForExtension:(id)arg1 ;
-(id)_UTIextensionForMIMEType:(id)arg1 ;
-(id)preferredExtensionForMIMEType:(id)arg1 ;
-(id)extensionsForMIMEType:(id)arg1 ;
-(id)_init;
-(id)MIMETypeForExtension:(id)arg1 ;
@end
