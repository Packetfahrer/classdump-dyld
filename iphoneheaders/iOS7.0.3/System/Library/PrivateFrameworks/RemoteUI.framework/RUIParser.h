/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:04 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/NSXMLParserDelegate.h>

@class NSXMLParser, RUIObjectModel, NSMutableArray, NSURL, NSData;

@interface RUIParser : NSObject <NSXMLParserDelegate> {

	NSXMLParser* _parser;
	RUIObjectModel* _uiObjectModel;
	NSMutableArray* _pages;
	NSMutableArray* _currentPageStack;
	int _actionSignal;
	int _parserState;
	NSURL* _baseURL;
	BOOL _succeeded;
	NSData* _xmlData;

}

@property (nonatomic,retain) NSURL * baseURL;               //@synthesize baseURL=_baseURL - In the implementation block
@property (nonatomic,retain) NSData * xmlData;              //@synthesize xmlData=_xmlData - In the implementation block
@property (nonatomic,readonly) BOOL succeeded;              //@synthesize succeeded=_succeeded - In the implementation block
-(void)parser:(id)arg1 parseErrorOccurred:(id)arg2 ;
-(void)parser:(id)arg1 foundCDATA:(id)arg2 ;
-(void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 ;
-(void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5 ;
-(void)dealloc;
-(id)baseURL;
-(void)setBaseURL:(id)arg1 ;
-(void)parser:(id)arg1 validationErrorOccurred:(id)arg2 ;
-(BOOL)succeeded;
-(id)initWithXML:(id)arg1 baseURL:(id)arg2 ;
-(id)uiObjectModel;
-(int)actionSignal;
-(id)initWithXML:(id)arg1 ;
-(void)setXmlData:(id)arg1 ;
-(id)_createNewPageWithAttributes:(id)arg1 ;
-(id)_lastPageCreateIfNeeded;
-(void)_addSectionWithAttributes:(id)arg1 ;
-(void)_addTableHeaderViewWithAttributes:(id)arg1 ;
-(void)_addTableFooterViewWithAttributes:(id)arg1 ;
-(void)_newRowWithAttributeDict:(id)arg1 ;
-(id)_createSupplementalPageNamed:(id)arg1 ;
-(void)_addNavigationBarWithAttributes:(id)arg1 ;
-(id)_lastRow;
-(id)xmlData;
@end

