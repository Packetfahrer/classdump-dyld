/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:33:18 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKTranscriptCell.h>

@class IMService, UIImageView, CKGradientView;

@interface CKTranscriptServiceCell : CKTranscriptCell {

	IMService* _service;
	UIImageView* _mask;
	CKGradientView* _gradientView;

}

@property (nonatomic,retain) IMService * service;                                                           //@synthesize service=_service - In the implementation block
@property (nonatomic,@dynamic,retain) UIView<CKGradientReferenceView> * gradientReferenceView; 
@property (nonatomic,retain) UIImageView * mask;                                                            //@synthesize mask=_mask - In the implementation block
@property (nonatomic,retain) CKGradientView * gradientView;                                                 //@synthesize gradientView=_gradientView - In the implementation block
-(void)contentSizeCategoryDidChange:(id)arg1 ;
-(id)service;
-(id)maskImage;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setMask:(id)arg1 ;
-(void)layoutSubviews;
-(id)mask;
-(void)setGradientReferenceView:(id)arg1 ;
-(void)setGradientView:(id)arg1 ;
-(id)gradientView;
-(id)gradientReferenceView;
-(void)configureForRowObject:(id)arg1 ;
-(void)setService:(id)arg1 ;
@end
