/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:35:51 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <StoreKitUI/SSMetricsEventFieldProvider.h>

@class NSDictionary;

@interface RUMetricsDictionaryEventFieldProvider : NSObject <SSMetricsEventFieldProvider> {

	NSDictionary* _dictionary;

}

@property (nonatomic,readonly) NSDictionary * dictionary;              //@synthesize dictionary=_dictionary - In the implementation block
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionary;
-(id)valueForMetricsField:(id)arg1 ;
-(void).cxx_destruct;
@end
