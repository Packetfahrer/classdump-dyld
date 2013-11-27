/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:33:19 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <ChatKit/CKMessagePart.h>

@class CKMediaObject;

@interface CKMediaObjectMessagePart : CKMessagePart {

	CKMediaObject* _mediaObject;

}

@property (nonatomic,readonly) CKMediaObject * mediaObject;              //@synthesize mediaObject=_mediaObject - In the implementation block
-(void)dealloc;
-(id)description;
-(int)type;
-(id)detachedCopy;
-(Class)balloonViewClass;
-(id)mediaObject;
-(id)initWithMediaObject:(id)arg1 ;
-(id)pasteboardItems;
-(id)compositionRepresentation;
-(id)composeImages;
-(void)__ck_prewarmForDisplay;
@end
