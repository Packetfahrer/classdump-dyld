/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:06 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SAAceView.h>

@class NSString, SAUIDomainObjectPicker, NSArray;

@interface SAUIDisambiguationList : SAAceView

@property (nonatomic,copy) NSString * disambiguationKey; 
@property (nonatomic,retain) SAUIDomainObjectPicker * domainObjectPicker; 
@property (nonatomic,copy) NSArray * items; 
@property (nonatomic,copy) NSString * selectionResponse; 
@property (nonatomic,copy) NSString * speakableDelimiter; 
@property (nonatomic,copy) NSString * speakableFinalDelimiter; 
@property (nonatomic,copy) NSString * speakableSelectionResponse; 
@property (nonatomic,copy) NSString * speakableSuffix; 
@property (nonatomic,copy) NSString * title; 
+(id)disambiguationList;
+(id)disambiguationListWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setTitle:(id)arg1 ;
-(id)title;
-(id)items;
-(void)setItems:(id)arg1 ;
-(id)encodedClassName;
-(id)selectionResponse;
-(void)setSelectionResponse:(id)arg1 ;
-(id)speakableSelectionResponse;
-(void)setSpeakableSelectionResponse:(id)arg1 ;
-(id)disambiguationKey;
-(void)setDisambiguationKey:(id)arg1 ;
-(id)domainObjectPicker;
-(void)setDomainObjectPicker:(id)arg1 ;
-(id)speakableDelimiter;
-(void)setSpeakableDelimiter:(id)arg1 ;
-(id)speakableFinalDelimiter;
-(void)setSpeakableFinalDelimiter:(id)arg1 ;
-(id)speakableSuffix;
-(void)setSpeakableSuffix:(id)arg1 ;
@end

