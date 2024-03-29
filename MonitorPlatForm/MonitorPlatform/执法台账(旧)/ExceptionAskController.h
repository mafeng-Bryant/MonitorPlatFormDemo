//
//  ExceptionAskController.h
//  MonitorPlatform
//
//  Created by 王 哲义 on 12-3-13.
//  Copyright (c) 2012年 博安达. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "NSURLConnHelperDelegate.h"
#import "WebServiceHelper.h"

@interface ExceptionAskController : UIViewController <NSURLConnHelperDelegate,NSXMLParserDelegate>
@property (nonatomic,copy) NSString *bh;
@property (nonatomic,strong) NSDictionary *infoDic;

@property (nonatomic,assign) BOOL isGotJsonString;
@property (nonatomic,strong) NSMutableString *curParsedData;

@property (nonatomic,strong) UIWebView *myWebView;
@property (nonatomic,strong) WebServiceHelper *webHelper;
@end
