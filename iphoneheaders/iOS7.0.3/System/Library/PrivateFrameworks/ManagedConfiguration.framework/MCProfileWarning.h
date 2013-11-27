/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:34:26 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <CoreFoundation/NSCoding.h>

@class NSString;

@interface MCProfileWarning : NSObject <NSCoding> {

	NSString* _localizedTitle;
	NSString* _localizedBody;
	BOOL _isLongForm;

}

@property (nonatomic,retain) NSString * localizedTitle;              //@synthesize localizedTitle=_localizedTitle - In the implementation block
@property (nonatomic,retain) NSString * localizedBody;               //@synthesize localizedBody=_localizedBody - In the implementation block
@property (assign,nonatomic) BOOL isLongForm;                        //@synthesize isLongForm=_isLongForm - In the implementation block
+(id)warningWithLocalizedTitle:(id)arg1 localizedBody:(id)arg2 isLongForm:(BOOL)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)localizedTitle;
-(id)initWithLocalizedTitle:(id)arg1 localizedBody:(id)arg2 isLongForm:(BOOL)arg3 ;
-(void)setLocalizedTitle:(id)arg1 ;
-(id)localizedBody;
-(void)setLocalizedBody:(id)arg1 ;
-(BOOL)isLongForm;
-(void)setIsLongForm:(BOOL)arg1 ;
-(void).cxx_destruct;
@end
