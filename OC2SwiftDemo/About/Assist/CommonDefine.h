//
//  DeviceInfo.h
//  EWallet
//
//  Created by tom on 14-5-14.
//  Copyright (c) 2014年 ucsmy. All rights reserved.
//
#import "UIColor+RGBValues.h"

#ifndef EWallet_DeviceInfo_h
#define EWallet_DeviceInfo_h

//是否是测试
#ifdef TEST_ENVIRONMENT
#define Is_Test_ENVIRMENT
#endif

//是否要加密密码
//#define Need_EncryptedPassword

//是否运行在模拟器
#if TARGET_IPHONE_SIMULATOR
#define SIMULATOR_TEST
#endif

//接口版本
#define KAppIVersion  @"3.2.2"
//旧接口版本
#define KAppOldIVersion @"2.6"


//是否已经弹出了需要登录密码的提示
#define KHasShowNeedSetLoginTips   @"KHasShowNeedSetLoginTips"


#define CTB_Bankcard_select_Notification @"ctb_bankcard_select_notification"
#define BankCard_Select_Notification @"BankCard_Select_Notification"


//tips 停留时间
#define KHUDTipShortTime   3
#define KHUDTipLongTime   5
#define KHUDTipLongTime2   2


#define RELOAD_DATA_YES @"RELOAD_llDATA_YES"

#define ToMainIndexVC @"ToMainIndexVC"


#define UCS_Short_timeoutInterval 30
#define UCS_Long_timeoutInterval 65

#define IOS7 ([[[UIDevice currentDevice] systemVersion] floatValue] >= 7.0 ? YES : NO)
#define IOS8 ([[[UIDevice currentDevice] systemVersion] floatValue] >= 8.0 ? YES : NO)

#define Is_3inchScreen ([[UIScreen mainScreen] bounds].size.height<500.0 ?YES:NO)


#define Message_Notification @"Message_Notification"
#define Logout_Notification @"Logout_Notification"
#define KAuthSucess_Notification @"AuthSucess_Notification"
#define QDLaunchAdsNotification @"LaunchAdsNotification"
//定义颜色值RGBA(149, 151, 191, 0.8)
//2.1字体颜色：
#define TextBlackColor [UIColor colorWithHexString:@"#606060"]
#define TextGrayColor [UIColor colorWithHexString:@"#bbbbbb"]
#define TextRedColor [UIColor colorWithHexString:@"#ff475c"]

#define KHomeGrayTitleColor1 [UIColor colorWithRed:172/255.0 green:172/255.0 blue:172/255.0 alpha:1]


//2.1背景颜色：
#define BgMainColor [UIColor colorWithHexString:@"#efefef"]
#define BgWhiteColor [UIColor colorWithHexString:@"#f7f7f7"]
#define BgRedColor [UIColor colorWithHexString:@"#ff4e4e"]
#define BgBlueColor [UIColor colorWithHexString:@"#6eb4ff"]

//2.1按钮颜色
#define ButtonRedColor [UIColor colorWithHexString:@"#ff475c"]
#define ButtonBlueColor [UIColor colorWithHexString:@"#6eb4ff"]
#define ButtonGrayColor [UIColor colorWithHexString:@"#a2a2a2"]
#define ButtonDisabledColor [UIColor colorWithHexString:@"#cccccc"]

//2.1导航颜色
#define NaviBarColor [UIColor colorWithHexString:@"#ff4e4e"]


//2.3  预热光圈颜色
#define KPreHotCircleColor [UIColor colorWithRed:252/255.0 green:179/255.0 blue:81/255.0 alpha:1]

//预热字体颜色
#define KPreHotTitleColor [UIColor colorWithRed:185/255.0 green:121/255.0 blue:11/255.0 alpha:1]


#define KColor_138 [UIColor colorWithRed:138/255.0 green:138/255.0 blue:138/255.0 alpha:1]

//定义尺寸值，方便快捷取值；
#define MainBounds [[UIScreen mainScreen] bounds]
#define MainWidth [UIScreen mainScreen].bounds.size.width
#define Mainheight [UIScreen mainScreen].bounds.size.height

#define iPhone4 ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(640, 960), [[UIScreen mainScreen] currentMode].size) : NO)
#define iPhone5 ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(640, 1136), [[UIScreen mainScreen] currentMode].size) : NO)
#define iPhone6 ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(750, 1334), [[UIScreen mainScreen] currentMode].size) : NO)
#define iPhone6_plus ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(1242, 2208), [[UIScreen mainScreen] currentMode].size) : NO)
#define DEVICE_ID [[[UIDevice currentDevice] identifierForVendor] UUIDString]

//文字、UI适配屏幕(参数：iPhone6下的大小,返回值:适配到对应屏幕的大小)
#define FitSize(size) ((iPhone4||iPhone5) ? rintf(size * 320.0 / 375.0) : (size))

//#define UCS_DEBUG true

#define Jumpline [[UCSInfo shareInfo]PageJumpline]


// 拿storyboard
#define STORE_storyboard [UIStoryboard storyboardWithName:@"Store" bundle:nil]
#define MainStoryBoard [UIStoryboard storyboardWithName:@"Main" bundle:nil]
#define InvestStoryBoard [UIStoryboard storyboardWithName:@"InvestStoryboard" bundle:nil]
#define MysStoryBoard [UIStoryboard storyboardWithName:@"Mys_StoryBoard" bundle:nil]
#define MessageStoryBoard [UIStoryboard storyboardWithName:@"MessageStoryboard" bundle:nil]
#define FundStoryBoard [UIStoryboard storyboardWithName:@"Fund" bundle:nil]
#define AuthStoryBoard [UIStoryboard storyboardWithName:@"Auth" bundle:nil]
#define ProjectDetailInfoPageStoryBoard [UIStoryboard storyboardWithName:@"ProjectInfoPageStoryboard" bundle:nil]
#define SnsBindPhoneStoryBoard [UIStoryboard storyboardWithName:@"SnsBindPhone" bundle:nil]
#define ShakeMoneyStoryBoard [UIStoryboard storyboardWithName:@"UCSShakeMoney" bundle:nil]
#define MyBankCardStoryBoard [UIStoryboard storyboardWithName:@"QDMyBankCard" bundle:nil]


// 定义HUD弹出时间
#define HUD_DURATION 3

#ifdef DEBUG
#define UCSLog(...) NSLog(__VA_ARGS__);
#define LOG_METHOD NSLog(@"%s", __func__);
#else
#define UCSLog(...);
#define LOG_METHOD
#endif

#define UCSFunc UCSLog(@"%s",__func__);

#define RGBA(r, g, b, a) [UIColor colorWithRed:r/255.0 green:g/255.0 blue:b/255.0 alpha:a]
#define RGB(rgbValue) [UIColor colorWithRed:((float)((rgbValue & AS0xFF0000) >> 16))/255.0 green:((float)((rgbValue & 0xFF00) >> 8))/255.0 blue:((float)(rgbValue & 0xFF))/255.0 alpha:1.0]

#define MJRefreshHeaderTag 101
#define MJRefreshFooterTag 102
#endif

//授权检测相关
typedef void(^HasAuthedBlock) ();  //已经授权
typedef void(^HasNotAuthedBlock) (); //没有授权
typedef void(^BeforeRequestBlock) (); //网络请求前
typedef void(^HasNotAuthDataBlock) (); //没有授权数据
typedef void(^HasCertifiedBlock) ();    //通过实名认证
typedef void(^HasNotCertifiedBlock) (); //没有通过实名认证
typedef void(^RequestFailBlock) (); //网络请求失败
typedef void(^RequestSucessBlock) (); //网络请求成功

//接口相关

//固定地址
#ifdef Is_Test_ENVIRMENT
#define IS_PRODUCE_ENVIRMENT NO    // 使用测试地址

#else
#define IS_PRODUCE_ENVIRMENT YES   // 使用生产地址

#endif



//登录注册
#define KMobileNoRegisterTag   111
#define KHasNoLoginPassTag     112
#define KPassErrorTag          1111
#define KUserfreezeTag          1112
#define KMobileNoRegisterTag1   1113


//接口唯一标示相关的字段

#define KEPlusUniCode @"YQB"

#define  KLoginCmd                  @"My.Login"                      //app帐号登录，e＋帐号登录
#define  KSnsLoginCmd               @"My.WechatLogin"                //第三方账号登录


#define  KBindingUserInfoWithSnsCmd @"My.CheckBindingUserInfoWithSns"//检测第三方账号是否绑定了手机

#define  KBindSnsMobileCmd          @"My.BindSnsMobile"              //第三方账号手机号绑定
#define  KMobileBindSnsCmd          @"My.BindWechat"                 //手机号绑定第三方账号


#define  KBindingSnsAccountListCmd  @"My.GetBindingSnsAccountList"   //获取当前用户绑定的第三方账号列表

#define  KMyMoneyBagInfoCmd         @"My.GetMyMoneyBagInfo"          //我的钱袋子信息
#define  KMyMBTradingListCmd        @"My.GetMBTradingList"           //我的钱袋子明细
#define  KWithdrawMBCmd             @"My.WithdrawMB"                 //我的钱袋子明细取现
#define  KProjectPurchaseCmd        @"Invest.ProjectPurchase"        //项目限购次数

#define  KAppCommonAds  @"App.CommonAds" //公共广告位
#define  KAppCommonAdList  @"App.CommonAdList" //公共广告位列表


#define KCheckDrawRPBankCardCmd  @"My.CheckDrawRPBankCard"           //检测红包对应指定银行卡号
#define KSetLoginPasswordCmd  @"My.SetAuthPwd"
#define KLoginPasswordCmd  @"My.PasswordLogin"                       //密码登录
#define KUpdateLoginPasswordCmd  @"My.UpdateAuthPwd"                    //修改登录密码接口
#define KCFIDAuthCmd  @"My.CFIDAuth"                               //中金实名认证
#define KCheckMobileRegisterCmd  @"My.CheckMobileRegister"          //手机号是否注册过


#pragma mark 摇钱宝相关接口唯一标示
#define KSMWithdrawCmd  @"3003"   //摇钱宝提现
#define KSMChargeCmd    @"3002"   //摇钱宝充值
#define KSMOpeningAccountCmd    @"3001"   //摇钱宝开户



//接口白名单
#define  KLoginID                  @"551" //app帐号登录，e＋帐号登录 id
#define  KSnsLoginID               @"2012"//第三方账号登录 id
#define  KMobileBindSnsID          @"2013"//手机号绑定第三方账号 id


#define  KBindingUserInfoWithSnsID @"2008"//检测第三方账号是否绑定了手机 id
#define  KBindSnsMobileID          @"2006"//第三方账号手机号绑定 id
#define  KBindingSnsAccountListID  @"2007"//获取当前用户绑定的第三方账号列表 id
#define  KMyMoneyBagInfoID         @"2009"//我的钱袋子信息 id
#define  KMyMBTradingListID        @"2010"//我的钱袋子明细 id
#define  KWithdrawMBID             @"2011"//我的钱袋子明细取现 id
#define  KProjectPurchaseID        @"2015"//项目限购次数 id
#define  KAppCommonAdsID           @"2017" //公共广告位 id

#define KCheckDrawRPBankCardID  @"2018"         //检测红包对应指定银行卡号 id
#define KSetLoginPasswordID  @"2019"            //设置登录密码接口 id
#define KLoginPasswordID  @"2020"               //密码登录 id
#define KUpdateLoginPasswordID  @"2021"         //修改登录密码接口 id
#define KCFIDAuthID  @"2022"                   //中金实名认证 id
#define KCheckMobileRegisterID  @"2023"        //手机号是否注册过 id


#pragma mark 摇钱宝相关白名单接口
#define KSMWithdrawID  @"2029"   //摇钱宝提现 id
#define KSMChargeID   @"2028"   //摇钱宝充值 id
#define KSMOpeningAccountID    @"2027"   //摇钱宝开户 id


//公用字段
#define KSnsUserId             @"SnsUserId"                      //第三方用户id
#define KSnsPlatform           @"SnsPlatform"                    //第三方平台类型
#define KSnsUserName           @"UserName"                       //第三方用户id

#define KSnsAccessToken        @"AccessToken"                    //第三方访问口令
#define KSnsMobileBandingType  @"BindingType"                    //第三方用户,手机号绑定类型
#define KMobile                @"Mobile"                         //手机号
#define KSmsCode               @"SmsCode"                        //验证码了，
#define KSnsAccountList        @"SnsAccountList"                 //绑定的第三方用户列表
#define  KMoneyAmount          @"MoneyAmount"                    //我的钱袋子钱的总数
#define  KMoneyStatus          @"MoneyStatus"                    //我的钱袋子钱的状态

#define  KMyMBTradingList      @"MBTradingList"                  //我的钱袋子明细列表
#define  KLastIndex            @"LastIndex"                      //最后一条记录的序列索引

#define  KSucessStr            @"成功"
#define  KFailStr              @"失败"
#define  KProcessingStr        @"处理中"

#define KSuccessedTag          @"Successed"
#define KBodyTag               @"Body"

#define KIsHasTag              @"IsHas"
#define KStartId               @"StartId"                        //钱袋子分页开始id
#define KUcsLoginType          @"KUcsLoginType"                  //登录方式
#define KUcsIsNewInvestUserTag @"KUcsIsNewInvestUser"            //是否为新手投资者

#define KSnsBindMobileSucess   @"您的手机号已绑定成功!"
#define KUCSCode               @"Code"                           //公共广告位code



#define  KAmount               @"Amount"                         //钱袋子总额

#define KWXBindMobileTips        @"为保障您的帐号信息安全，请先绑定您本人的手机号码"
#define KSnsBindMobileSucessTips @"您的手机号已绑定成功"


#define KCTB_PreHot_Limit_Time   30



//钱袋子
#define KMBTradingCreateTime    @"MBTradingCreateTime"
#define KMBTradingType          @"MBTradingType"
#define KMBTradingAmount        @"MBTradingAmount"
#define KMBTradingOperationType @"MBTradingOperationType"
#define KMBTradingStatus        @"MBTradingStatus"
#define KMBTradingID            @"MBTradingID"
#define KMBTradingSource        @"MBTradingSource"


//用户信息相关
#define KHasBindUserInfo @"HasBindUserInfo"//第三方用户绑定的手机用户信息
#define KBindingUserInfo @"BindingUserInfo"//第三方用户是否绑定的手机用户
#define KAvatarURL       @"AvatarURL"      //个人头像
#define KNickName        @"NickName"       //昵称
#define KSnsUserName     @"UserName"       //第三方名
#define KSnsScreen_name  @"screen_name"    //第三方名
#define KSnsSex          @"sex"            //性别
#define KSnsGender       @"gender"         //性别  1--男   2--女

//微信--
#define KProfile_image_url @"profile_image_url"


//登录注册相关
#define KLogingNowStr @"正在登录..."
#define KLogin        @"login"


//微信
#define KNotInstallWXTips   @"未安装微信"
#define KUserInfoDefaultTag @"UserInfoDefaultTag"
#define KSNSBindInfo        @"KSNSBindInfo"


//添加银行卡
#define KBranchBankName      @"BranchBankName"
#define KBranchBankCode      @"BranchBankCode"

#define BranchBankNameModifyNtf      @"BranchBankNameModifyNtf"
#define BranchBankNameCodeModifyNtf      @"BranchBankNameCodeModifyNtf"



//投资详情页
#define KNoNewUserTips      @"此项目仅限新手用户购买，请选择其他项目购买。"

//服务热线
#define KHotPhoneStr        @"400-113-1118"
#define KHotPhoneCanCallStr @"4001131118"


//银行卡 可能是 0308 ,308
#define KZHCardCode @"308"



#define KUCSNeedShowLauchAds        @"KUCSNeedShowLauchAds"
#define KUCSShowLauchAdsUrl         @"KUCSShowLauchAdsUrl"
#define KUCSShowLauchAdsInterval    @"KUCSShowLauchAdsInterval"
#define KUCSShowLauchAdsObject      @"KUCSShowLauchObject"


// 百度统计 页面统计
#define BD_IndexPageDidLoad                  @"FistPage"                     // 1. 首页加载的次数
#define BD_InvestPageDidLoad                 @"InvestmentPage"               // 2. 投资列表页加载的次数
#define BD_ShanHuiPageDidLoad                @"ShanhuiPage"                  // 3. 闪惠页面加载的次数 ~
#define BD_MysPageDidLoad                    @"MyinfoPage"                   // 4. 我的页面加载的次数
#define BD_InvestDetailPageDidLoad           @"InvestmentPage_ItemPage"      // 5. 项目详情页被打开的次数 ~
#define BD_ShanhuiCommodityDetailPageDidLoad @"ShanhuiPage_CommodityPage"    // 6. 商品详情页加载的次数 ~
#define BD_ShanhuiCartPageDidLoad            @"ShanhuiPage_CartPage"         // 7. 购物车页面加载的次数
#define BD_AddBankCardPageDidLoad            @"AddBankCardPage"              // 8. 新增银行卡页面加载次数
#define BD_SetPayPwdPageDidLoad              @"SetPayPasswordPage"           // 9. 设置支付密码页面打开次数
/**
 *  V2.5
 */
#define BD_LoginPageDidLoad                  @"LoginPage"                    // 10. 登录页面被打开的次数
#define BD_MyinfoPage_BankCardPageDidLoad    @"MyinfoPage_BankCardPage"      // 11. 我的页面中，银行卡管理页面被打开的次数

// 百度统计 事件ID
#define BD_IndexTopBannerClick               @"FistPage_TopBanners"          // 1. 首页顶部Banner的点击次数
#define BD_IndexBottomBannerClick            @"FistPage_BottomBanner"        // 2. 首页底部Banner的点击次数
#define BD_InvestRecommendClick              @"FistPage_RecommendBtn"        // 3. 投资推荐位置的点击次数
#define BD_InvestAssetBtnClick               @"FistPage_InvestedBtn"         // 4. 投资资产控件的点击次数
#define BD_TradeRecordBtnClick               @"FistPage_RecordersBtn"        // 5. 交易记录控件的点击次数
#define BD_InvestFilterBtnClick              @"InvestmentPage_FilterBtn"     // 6. 筛选按钮被点击的次数
#define BD_InvestBtnClick                    @"ItemPage_BidBtn"              // 7. 投标按钮被点击的次数
#define BD_InvestPayBtnClick                 @"ItemPage_PayBtn"              // 8. 项目确认支付按钮被点击的次数
#define BD_InvestDidSuccessed                @"ItemPage_SuccessMsg"          // 9. 投标支付成功的次数
#define BD_ShanhuiIntroBtnClick              @"ShanhuiPage_IntroductionBtn"  // 10. 闪惠介绍按钮被点击的次数
#define BD_ShanhuiMyOrderBtnClick            @"ShanhuiPage_MyOrderBtn"       // 11. 闪惠我的订单按钮被点击的次数
#define BD_ShanhuiTopBannerClick             @"ShanhuiPage_TopBanners"       // 12. 闪惠顶部Banner的点击次数
#define BD_ShanhuiBuyNowBtnClick             @"CommodityPage_BuyBtn"         // 13. 立即购买按钮点击的次数
#define BD_ShanhuiAddToCartBtnClick          @"CommodityPage_AddToCartBtn"   // 14. 加入购物车按钮点击的次数
#define BD_ShanhuiOrderConfirmBtnClick       @"CommodityPage_OrderConfirmBtn"// 15. 商品订单确定按钮点击的次数
#define BD_ShanhuiPayBtnClick                @"CommodityPage_PayBtn"         // 16. 商品订单支付按钮点击的次数
#define BD_ShanhuiPayDidSuccessed            @"CommodityPage_SuccessMsg"     // 17. 商品支付成功的次数
#define BD_LoginPageRegisterBtnClick         @"LoginPage_RegisterBtn"        // 18. 注册按钮被点击的次数
#define BD_LoginPageGetVerifyCodeBtnClick    @"LoginPage_GetVerificationBtn" // 19. 获取验证码被点击的次数
#define BD_LoginPageLoginBtnClick            @"LoginPage_LoginBtn"           // 20. 登录按钮被点击的次数
#define BD_LoginPageEBtnClick                @"LoginPage_EjiaBtn"            // 21. 小企业E家按钮被点击的次数
#define BD_AddBankCardDidSuccessed           @"AddBankCardPage_SuccessMsg"   // 22. 绑定银行卡操作成功的次数
#define BD_SetPayPwdDidSuccessed             @"SetPayPasswordPage_SuccessMsg"// 23. 设置密码成功的次数
#define BD_IndexMyRedEnvelopeBtnClick        @"FistPage_MyRedPacketsBtn"     // 24. 首页我的红包按钮

//
/**
 *  V2.5
 */
#define BD_FistPage_MyMessageBtnClick        @"FistPage_MyMessageBtn"        // 25. 我的消息按钮被点击的次数 首页
#define BD_FistPage_FeedbackBtnClick         @"FistPage_FeedbackBtn"         // 26. 反馈按钮被点击的次数 首页
//#define BD_FistPage_ShanhuiBtnClick          @"FistPage_ShanhuiBtn"          // 27. 闪惠广告被点击的次数 首页
#define BD_FistPage_HuodongBtnClick          @"FistPage_HuodongBtn"          // 28. 活动广告被点击的次数 首页
//#define BD_FistPage_XinshouBtnClick          @"FistPage_XinshouBtn"          // 29. 新手推荐项目被点击的次数 首页
#define BD_InvestmentPage_BannerBtnClick     @"InvestmentPage_BannerBtn"     // 30. 顶部Banner位被点击的次数 投资页
#define BD_InvestmentPage_ItemBtnClick       @"InvestmentPage_ItemBtn"       // 31. 任何一个项目被点击的次数 投资页
#define BD_ShanhuiPage_MyCreditBtnClick      @"ShanhuiPage_MyCreditBtn"      // 32. 信用按钮被点击的次数（登录前和登陆后点击均统计）闪惠页
#define BD_ShanhuiPage_SeckillingBtnClick    @"ShanhuiPage_SeckillingBtn"    // 33. 特惠秒杀商品被点击的次数 闪惠页
#define BD_ShanhuiPage_PhoneChargeBtnClick   @"ShanhuiPage_PhoneChargeBtn"   // 34. 话费卡商品被点击的次数 闪惠页
#define BD_ShanhuiPage_OilChargeBtnClick     @"ShanhuiPage_OilChargeBtn"     // 35. 加油卡商品被点击的次数 闪惠页
#define BD_ShanhuiPage_CommodityBtnClick     @"ShanhuiPage_CommodityBtn"     // 36. 任何一个商品被点击的次数 闪惠页
#define BD_AddBankCardPage_InfoSbmBtnClick   @"AddBankCardPage_InfoSbmBtn"   // 37. 添加银行卡后，输入基本信息后，点击“下一步”按钮的次数 添加银行卡页面
#define BD_AddBankCardPage_VrfSbmBtnClick    @"AddBankCardPage_VrfSbmBtn"    // 38. 添加银行卡后，获取并输入验证码后，点击“下一步”按钮的次数 添加银行卡页面
#define BD_AddBankCardPage_GetVrfBtnClick    @"AddBankCardPage_GetVrfBtn"    // 39. 添加银行卡后，点击“获取验证码”按钮的次数
#define BD_LoginPage_PswLoginLableBtnClick   @"LoginPage_PswLoginLableBtn"   // 40. 用户点击密码登录标签的次数
#define BD_LoginPage_VrfLoginLableBtnClick   @"LoginPage_VrfLoginLableBtn"   // 41. 用户点击验证码登录标签的次数
#define BD_LoginPage_PswLoginBtnClick        @"LoginPage_PswLoginBtn"        // 42. 用户使用密码方式，登录按钮的点击次数
#define BD_LoginPage_VrfLoginBtnClick        @"LoginPage_VrfLoginBtn"        // 43. 用户使用验证码方式，登录按钮的点击次数
#define BD_LoginPage_SuccessMsg              @"LoginPage_SuccessMsg"         // 44. 登录成功的次数
#define BD_AddBankCardPage_AddBtnClick       @"AddBankCardPage_AddBtn"       // 45. 添加银行卡按钮的点击次数

/**
 *  V2.6
 */

#define BD_YaoPage_Click                    @"YaoPage"                       // 57. 摇钱宝页面被打开的次数
#define BD_YaoPage_IntroduceBtnClick        @"YaoPage_IntroduceBtn"          // 58. 摇钱宝页介绍控件被点击的次数
#define BD_YaoPage_TrendMapBtnClick         @"YaoPage_TrendMapBtn"           // 59. 摇钱宝页趋势图按钮被点击的次数
#define BD_YaoPage_DetailBtnClick           @"YaoPage_DetailBtn"             // 60. 摇钱宝页账单明细按钮被点击的次数
#define BD_YaoPage_DepositBtnClick          @"YaoPage_DepositBtn"            // 61. 摇钱宝页存入按钮被点击的次数
#define BD_YaoPage_WithdrawBtnClick         @"YaoPage_WithdrawBtn"           // 62. 摇钱宝页取出按钮被点击的次数
#define BD_YaoPage_EAccountSuccessMsg       @"YaoPage_EAccountSuccessMsg"    // 63. 摇钱宝页E+账户开通成功的次数
#define BD_YaoPage_EAccountFailMsg          @"YaoPage_EAccountFailMsg"       // 64. 摇钱宝页E+账户开通失败的次数
#define BD_YaoPage_IncreaseCount            @"YaoPage_IncreaseCount"         // 65. 摇钱宝页摇到加息券的次数
#define BD_YaoPage_ShareCount               @"YaoPage_ShareCount"            // 66. 摇钱宝页摇到分享的次数
#define BD_YaoPage_CouponCount              @"YaoPage_CouponCount"           // 67. 摇钱宝页摇到券的次数
#define BD_YaoPage_CommodityCount           @"YaoPage_CommodityCount"        // 68. 摇钱宝页摇到券的次数
#define BD_YaoPage_NothingCount             @"YaoPage_NothingCount"          // 69. 摇钱宝页没有摇到东西的次数
#define BD_FistPage_YaoBtnClick             @"FistPage_YaoBtn"               // 70. 首页摇钱宝按钮点击的次数
#define BD_FistPage_YaoAdBtnClick           @"FistPage_YaoAdBtn"             // 71. 首页摇钱宝广告位点击次数
#define BD_InvestmentPage_YaoAdBtnClick     @"InvestmentPage_YaoAdBtn"       // 72. 投资列表页摇钱宝广告位点击的次数
#define BD_MyinfoPage_YaoBtnBtnClick        @"MyinfoPage_YaoBtn"             // 73. 我的页摇钱宝按钮点击的次数
#define BD_YaoPage_HomePage_Click           @"YaoPage_HomePage"              // 74. 摇钱宝页面被打开的次数

#define QDLightTextGrayColor    [UIColor colorWithHexString:@"#666666"]









