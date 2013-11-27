/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:33:18 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKTranscriptDataRowObject.h>

@class IMHandle, NSString, UIImage, NSAttributedString;

@interface CKEntity : NSObject <CKTranscriptDataRowObject> {

	IMHandle* _handle;

}

@property (nonatomic,readonly) IMHandle * defaultIMHandle; 
@property (nonatomic,readonly) void* abRecord; 
@property (nonatomic,readonly) int propertyType; 
@property (nonatomic,readonly) int identifier; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * fullName; 
@property (nonatomic,readonly) NSString * rawAddress; 
@property (nonatomic,readonly) NSString * originalAddress; 
@property (nonatomic,readonly) NSString * textToneIdentifier; 
@property (nonatomic,readonly) NSString * textVibrationIdentifier; 
@property (nonatomic,readonly) UIImage * transcriptContactImage; 
@property (nonatomic,readonly) NSAttributedString * attributedTranscriptText; 
@property (nonatomic,retain) IMHandle * handle;                                            //@synthesize handle=_handle - In the implementation block
+(id)copyEntityForAddressString:(id)arg1 ;
+(id)_copyEntityForAddressString:(id)arg1 onAccount:(id)arg2 ;
-(int)propertyType;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)name;
-(int)identifier;
-(id)defaultIMHandle;
-(id)rawAddress;
-(id)initWithIMHandle:(id)arg1 ;
-(void*)abRecord;
-(id)personViewControllerWithDelegate:(id)arg1 ;
-(id)originalAddress;
-(id)textToneIdentifier;
-(id)textVibrationIdentifier;
-(id)transcriptContactImage;
-(id)attributedTranscriptText;
-(id)__ck_displayGUIDWithMessage:(id)arg1 ;
-(Class)__ck_displayCellClass;
-(id)__ck_displayCellIdentifier;
-(void)__ck_prewarmForDisplay;
-(id)__ck_displayContactImage;
-(UIEdgeInsets)__ck_displayContentAlignmentInsets;
-(BOOL)__ck_displayTranscriptOrientation;
-(BOOL)__ck_transcriptUsesTextAlignmentInsets;
-(BOOL)__ck_displayDuringSend;
-(BOOL)__ck_wantsDrawerLayout;
-(CGSize)__ck_displaySize:(UIEdgeInsets*)arg1 ;
-(id)handle;
-(void)setHandle:(id)arg1 ;
-(id)fullName;
@end
