/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:32:55 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PreferenceBundles/ManagedConfigurationUI.bundle/ManagedConfigurationUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <ManagedConfigurationUI/ManagedConfigurationUI-Structs.h>
#import <Preferences/PSTableCell.h>

@class MCMoreDetailsContentView;

@interface MCMoreDetailsCell : PSTableCell {

	MCMoreDetailsContentView* _mcContentView;

}
+(float)defaultHeight;
-(void)layoutSubviews;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setPayload:(id)arg1 ;
-(void)setCertificate:(SecCertificateRef)arg1 ;
-(void).cxx_destruct;
@end
