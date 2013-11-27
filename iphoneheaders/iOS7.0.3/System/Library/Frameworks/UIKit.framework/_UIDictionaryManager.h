/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:32:32 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSArray;

@interface _UIDictionaryManager : NSObject {

	NSArray* _availableDefinitionDictionaries;

}

@property (readonly) NSArray * availableDefinitionDictionaries;              //@synthesize availableDefinitionDictionaries=_availableDefinitionDictionaries - In the implementation block
+(void)initialize;
+(id)_filteredDictionaryIDs;
+(id)assetManager;
-(void)dealloc;
-(id)init;
-(BOOL)_hasDefinitionForTerm:(id)arg1 ;
-(id)_currentlyAvailableDefinitionDictionaries;
-(id)_availableDictionaryAssetsUsingRemoteInfo:(BOOL)arg1 ;
-(id)_allAvailableDefinitionDictionariesUsingRemoteInfo:(BOOL)arg1 ;
-(id)_definitionValuesForTerm:(id)arg1 ;
-(id)_availableDictionaryAssets;
-(id)availableDefinitionDictionaries;
@end
