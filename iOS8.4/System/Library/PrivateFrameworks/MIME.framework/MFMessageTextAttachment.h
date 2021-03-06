/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:23:17 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <MIME/MIME-Structs.h>
@class NSMutableDictionary, MFMessageFileWrapper;

@interface MFMessageTextAttachment : NSObject {

	NSMutableDictionary* _cache;

}

@property (nonatomic,retain) MFMessageFileWrapper * fileWrapper; 
+(unsigned long long)precedenceLevel;
-(BOOL)isPass;
-(id)pass;
-(id)mf_markupURL;
-(CGSize)mf_markupSizeForImageScale:(unsigned long long)arg1 ;
-(id)mf_markupStringForComposition:(BOOL)arg1 prependBlankLine:(BOOL)arg2 imageScale:(unsigned long long)arg3 ;
-(void)setImageScalingFlags:(unsigned)arg1 ;
-(unsigned)imageScalingFlags;
-(BOOL)isCalendarFile;
-(BOOL)isDisplayableInline;
-(id)_contentTypeByStrippingZipIfNeeded:(BOOL)arg1 ;
-(BOOL)isContentOpenable;
-(BOOL)_isSinglePagePDFThatIsAllowedToBeInline;
-(id)unzippedContentType;
-(BOOL)isContentDownloadable;
-(BOOL)isDisplayableInsidePlugin;
-(id)mimeType;
-(id)contentType;
-(id)textEncodingGuess;
-(BOOL)shouldDownloadAttachmentOnDisplay;
-(id)textEncodingNameForData:(id)arg1 mimeType:(id)arg2 ;
-(void)setMimePart:(id)arg1 ;
-(id)mimePart;
-(void)download;
-(unsigned)approximateSize;
-(id)initWithWrapper:(id)arg1 ;
-(void)inlineDisplayData:(id*)arg1 mimeType:(id*)arg2 ;
-(void)setFileWrapper:(MFMessageFileWrapper *)arg1 ;
-(id)persistentUniqueIdentifier;
-(BOOL)needsRedownload;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)setCachedValue:(id)arg1 forKey:(id)arg2 ;
-(id)cachedValueForKey:(id)arg1 ;
-(id)fileWrapperForcingDownload:(BOOL)arg1 ;
-(BOOL)hasBeenDownloaded;
-(BOOL)isPlaceholder;
-(MFMessageFileWrapper *)fileWrapper;
@end

