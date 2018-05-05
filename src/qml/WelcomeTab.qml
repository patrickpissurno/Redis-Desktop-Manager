import QtQuick 2.0
import QtQuick.Layouts 1.1
import QtQuick.Controls 1.2
import QtQuick.Controls.Styles 1.1
import "./common"

BetterTab {
    title: "Redis Desktop Manager"
    icon: "qrc:/images/redisBigIcon.png"

    Rectangle {
        id: parentWrapper
        anchors.fill: parent
        color: "transparent"

        ColumnLayout {
            anchors.centerIn: parent

            RowLayout {
                id: topLayout
                spacing: 15
                Layout.fillWidth: true

                Image { id: logo; source: "qrc:/images/redisBigIcon.png"}

                ColumnLayout {
                    RichTextWithLinks { html: '<span style="font-size:32pt;">Redis Desktop Manager</span>'}
                    RichTextWithLinks { html: '<span>
                                                    <table><tr>
                                                            <td valign=middle style="color:black; font-size: 14px; padding-top:3px;"><b>Version</b> ' + Qt.application.version + '  &nbsp;&nbsp;&nbsp; Developed by <a href="http://github.com/uglide">Igor Malinovskiy</a> in </td>
                                                            <td valign=middle><img width="20" height="20" src="qrc:/images/ua.svg" /></td>
                                                            <td valign=middle style="padding-top:3px;"><a href="http://en.wikipedia.org/wiki/Ukraine">Ukraine</a></td>
                                                    </tr></table>
                                                </span>'}
               }
            }

            Rectangle { color: "#cccccc"; Layout.preferredHeight: 1; Layout.fillWidth: true }

            RowLayout {
                spacing: 5
                Layout.fillWidth: true

                RichTextWithLinks {
                    Layout.fillWidth: true
                    html: '
                            <a style="color: red; font-size: 16px;" href="https://github.com/uglide/RedisDesktopManager/issues">
                                <table><tr>
                                        <td valign=middle><img width="25" src="qrc:/images/alert.svg" /></td>
                                        <td valign=middle style="padding-top:3px;">Report issue&nbsp;</td>
                                </tr></table>
                            </a>
                    '
                }

                RichTextWithLinks {
                    Layout.fillWidth: true
                    html: '
                            <a style="color: green; font-size: 16px;" href="http://docs.redisdesktop.com/en/latest/">
                                <table><tr>
                                        <td valign=middle><img width="25" src="qrc:/images/help.svg" /></td>
                                        <td valign=middle style="padding-top:3px;">Documentation&nbsp;</td>
                                </tr></table>
                            </a>
                    '
                }

                RichTextWithLinks {
                    Layout.fillWidth: true
                    html: '
                            <a style="font-size: 16px;" href="https://gitter.im/uglide/RedisDesktopManager">
                                <table><tr>
                                        <td valign=middle><img width="25" src="qrc:/images/chat.svg" /></td>
                                        <td valign=middle style="padding-top:3px;">Join Gitter Chat&nbsp;</td>
                                </tr></table>
                            </a>
                    '
                }

                RichTextWithLinks {
                    Layout.fillWidth: true
                    html: '
                            <a style="font-size: 16px;" href="https://twitter.com/RedisDesktop">
                                <table><tr>
                                        <td valign=middle><img width="25" src="qrc:/images/twi.svg" /></td>
                                        <td valign=middle style="padding-top:3px;">Follow&nbsp;</td>
                                </tr></table>
                            </a>
                    '
                }

                RichTextWithLinks {
                    Layout.fillWidth: true
                    html: '
                            <a style="font-size: 16px;" href="https://github.com/uglide/RedisDesktopManager/stargazers">
                                <table><tr>
                                        <td valign=middle><img width="25" src="qrc:/images/github.svg" /></td>
                                        <td valign=middle style="padding-top:3px;">Star!</td>
                                </tr></table>
                            </a>
                    '
                }
            }

            Rectangle { color: "#cccccc"; Layout.preferredHeight: 1; Layout.fillWidth: true }


            RichTextWithLinks { html: '<span style="font-size: 11px;">Used third party software and images: <a href="http://qt.io/">Qt</a>, '
                                  + '<a href="https://github.com/uglide/qredisclient">QRedisClient</a>, '
                                  + '<a href="http://code.google.com/p/google-breakpad/">Google Breakpad</a>, '
                                  + '<a href="http://icons8.com/">Icons from icons8.com</a>, '
                                  + '<a href="http://redis.io/">Redis Logo</a>.</span>'}

            Rectangle { color: "#cccccc"; Layout.preferredHeight: 1; Layout.fillWidth: true }

            Item {
                Layout.fillWidth: true
                Layout.preferredHeight: 10
            }


            RichTextWithLinks { html: 'This version was patched by <a href="https://patrickpissurno.com.br">Patrick Pissurno</a> to bring better macOS support.<br>It is provided AS IS, with no implicit or explicit warranty.<br>'}

            RichTextWithLinks { html: '<span style="font-size: 13pt;">Many thanks to <a href="http://redisdesktop.com/#contributors">our amazing Contributors</a>, '
                                      + '<a href="https://redisdesktop.com/subscribe">Supporters</a> and '
                                      + '<a href="http://redisdesktop.com/community">Community</a></span>'}
        }
    }
}
