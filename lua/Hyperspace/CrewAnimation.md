---
layout: lua
title: CrewAnimation
lang: en
category: Class
---

# Class "CrewAnimation"

<!-- Head content to be pulled from "lua-source-parts-inject/Hyperspace/CrewAnimation/_head.md" -->


## Constructors
{: #Constructors .lua-content-section}
### CrewAnimation ()
{: #CrewAnimation .lua-content-item aria-label='Constructors' }
#### [CrewAnimation](../Hyperspace/CrewAnimation) CrewAnimation ()
{: aria-label='Constructors' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/CrewAnimation/CrewAnimation().md" -->

___
### CrewAnimation ()
{: #CrewAnimation .lua-content-item aria-label='Constructors' }
#### [CrewAnimation](../Hyperspace/CrewAnimation) CrewAnimation (integer _shipId, string _race, [Pointf](../Hyperspace/Pointf) _unk, integer _hostile)
{: aria-label='Constructors' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/CrewAnimation/CrewAnimation(integer,string,Hyperspace.Pointf,integer).md" -->

___




## Methods
{: #Methods .lua-content-section}
### CustomDeath ()
{: #CustomDeath .lua-content-item aria-label='Methods' }
#### boolean :CustomDeath ()
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/CrewAnimation/CustomDeath().md" -->

___
### FireShot ()
{: #FireShot .lua-content-item aria-label='Methods' }
#### boolean :FireShot ()
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/CrewAnimation/FireShot().md" -->

___
### GetDeathSound ()
{: #GetDeathSound .lua-content-item aria-label='Methods' }
#### string :GetDeathSound ()
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/CrewAnimation/GetDeathSound().md" -->

___
### GetFiringFrame ()
{: #GetFiringFrame .lua-content-item aria-label='Methods' }
#### integer :GetFiringFrame ()
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/CrewAnimation/GetFiringFrame().md" -->

___
### GetShootingSound ()
{: #GetShootingSound .lua-content-item aria-label='Methods' }
#### string :GetShootingSound ()
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/CrewAnimation/GetShootingSound().md" -->

___
### OnInit ()
{: #OnInit .lua-content-item aria-label='Methods' }
#### void :OnInit (string name, [Pointf](../Hyperspace/Pointf) position, boolean enemy)
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/CrewAnimation/OnInit(string,Hyperspace.Pointf,boolean).md" -->

___
### OnRender ()
{: #OnRender .lua-content-item aria-label='Methods' }
#### void :OnRender (number scale, integer selectedState, boolean outlineOnly)
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/CrewAnimation/OnRender(number,integer,boolean).md" -->

___
### OnRenderProps ()
{: #OnRenderProps .lua-content-item aria-label='Methods' }
#### void :OnRenderProps ()
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/CrewAnimation/OnRenderProps().md" -->

___
### OnUpdate ()
{: #OnUpdate .lua-content-item aria-label='Methods' }
#### void :OnUpdate ([Pointf](../Hyperspace/Pointf) position, boolean moving, boolean fighting, boolean repairing, boolean dying, boolean onFire)
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/CrewAnimation/OnUpdate(Hyperspace.Pointf,boolean,boolean,boolean,boolean,boolean).md" -->

___
### OnUpdateEffects ()
{: #OnUpdateEffects .lua-content-item aria-label='Methods' }
#### void :OnUpdateEffects ()
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/CrewAnimation/OnUpdateEffects().md" -->

___
### RenderIcon ()
{: #RenderIcon .lua-content-item aria-label='Methods' }
#### void :RenderIcon (boolean border)
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/CrewAnimation/RenderIcon(boolean).md" -->

___
### Restart ()
{: #Restart .lua-content-item aria-label='Methods' }
#### void :Restart ()
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/CrewAnimation/Restart().md" -->

___
### SetupStrips ()
{: #SetupStrips .lua-content-item aria-label='Methods' }
#### void :SetupStrips ()
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/CrewAnimation/SetupStrips().md" -->

___
### UpdateFiring ()
{: #UpdateFiring .lua-content-item aria-label='Methods' }
#### void :UpdateFiring ()
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/CrewAnimation/UpdateFiring().md" -->

___
### UpdateShooting ()
{: #UpdateShooting .lua-content-item aria-label='Methods' }
#### void :UpdateShooting ()
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/CrewAnimation/UpdateShooting().md" -->

___


## Fields
{: #Fields .lua-content-section}
### anims
{: #anims .lua-content-item aria-label='Fields' }
#### vector\<vector\<[Animation](../Hyperspace/Animation)\>\> .anims
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/CrewAnimation/anims.md" -->

___
### bDoorTarget
{: #bDoorTarget .lua-content-item aria-label='Fields' }
#### boolean .bDoorTarget
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/CrewAnimation/bDoorTarget.md" -->

___
### bDrone
{: #bDrone .lua-content-item aria-label='Fields' }
#### boolean .bDrone
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/CrewAnimation/bDrone.md" -->

___
### bExactShooting
{: #bExactShooting .lua-content-item aria-label='Fields' }
#### boolean .bExactShooting
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/CrewAnimation/bExactShooting.md" -->

___
### bFrozen
{: #bFrozen .lua-content-item aria-label='Fields' }
#### boolean .bFrozen
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/CrewAnimation/bFrozen.md" -->

___
### bGhost
{: #bGhost .lua-content-item aria-label='Fields' }
#### boolean .bGhost
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/CrewAnimation/bGhost.md" -->

___
### bMale
{: #bMale .lua-content-item aria-label='Fields' }
#### boolean .bMale
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/CrewAnimation/bMale.md" -->

___
### bPlayer
{: #bPlayer .lua-content-item aria-label='Fields' }
#### boolean .bPlayer
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/CrewAnimation/bPlayer.md" -->

___
### bSharedSpot
{: #bSharedSpot .lua-content-item aria-label='Fields' }
#### boolean .bSharedSpot
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/CrewAnimation/bSharedSpot.md" -->

___
### bStunned
{: #bStunned .lua-content-item aria-label='Fields' }
#### boolean .bStunned
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/CrewAnimation/bStunned.md" -->

___
### bTyping
{: #bTyping .lua-content-item aria-label='Fields' }
#### boolean .bTyping
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/CrewAnimation/bTyping.md" -->

___
### baseStrip
{: #baseStrip .lua-content-item aria-label='Fields' }
#### [GL_Texture](../Graphics/GL_Texture) .baseStrip
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/CrewAnimation/baseStrip.md" -->

___
### colorStrip
{: #colorStrip .lua-content-item aria-label='Fields' }
#### [GL_Texture](../Graphics/GL_Texture) .colorStrip
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/CrewAnimation/colorStrip.md" -->

___
### colorblind
{: #colorblind .lua-content-item aria-label='Fields' }
#### boolean .colorblind
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/CrewAnimation/colorblind.md" -->

___
### currentShip
{: #currentShip .lua-content-item aria-label='Fields' }
#### integer .currentShip
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/CrewAnimation/currentShip.md" -->

___
### direction
{: #direction .lua-content-item aria-label='Fields' }
#### integer .direction
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/CrewAnimation/direction.md" -->

___
### fDamageDone
{: #fDamageDone .lua-content-item aria-label='Fields' }
#### number .fDamageDone
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/CrewAnimation/fDamageDone.md" -->

___
### forcedAnimation
{: #forcedAnimation .lua-content-item aria-label='Fields' }
#### integer .forcedAnimation
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/CrewAnimation/forcedAnimation.md" -->

___
### forcedDirection
{: #forcedDirection .lua-content-item aria-label='Fields' }
#### integer .forcedDirection
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/CrewAnimation/forcedDirection.md" -->

___
### iShipId
{: #iShipId .lua-content-item aria-label='Fields' }
#### integer .iShipId
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/CrewAnimation/iShipId.md" -->

___
### lastPosition
{: #lastPosition .lua-content-item aria-label='Fields' }
#### [Pointf](../Hyperspace/Pointf) .lastPosition
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/CrewAnimation/lastPosition.md" -->

___
### layerColors
{: #layerColors .lua-content-item aria-label='Fields' }
#### vector\<[GL_Color](../Graphics/GL_Color)\> .layerColors
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/CrewAnimation/layerColors.md" -->

___
### layerStrips
{: #layerStrips .lua-content-item aria-label='Fields' }
#### vector\<[GL_Texture](../Graphics/GL_Texture)\> .layerStrips
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/CrewAnimation/layerStrips.md" -->

___
### moveDirection
{: #moveDirection .lua-content-item aria-label='Fields' }
#### integer .moveDirection
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/CrewAnimation/moveDirection.md" -->

___
### projectile
{: #projectile .lua-content-item aria-label='Fields' }
#### [Animation](../Hyperspace/Animation) .projectile
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/CrewAnimation/projectile.md" -->

___
### projectileColor
{: #projectileColor .lua-content-item aria-label='Fields' }
#### [GL_Color](../Graphics/GL_Color) .projectileColor
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/CrewAnimation/projectileColor.md" -->

___
### punchTimer
{: #punchTimer .lua-content-item aria-label='Fields' }
#### [TimerHelper](../Hyperspace/TimerHelper) .punchTimer
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/CrewAnimation/punchTimer.md" -->

___
### race
{: #race .lua-content-item aria-label='Fields' }
#### string .race
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/CrewAnimation/race.md" -->

___
### shootTimer
{: #shootTimer .lua-content-item aria-label='Fields' }
#### [TimerHelper](../Hyperspace/TimerHelper) .shootTimer
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/CrewAnimation/shootTimer.md" -->

___
### smokeEmitter
{: #smokeEmitter .lua-content-item aria-label='Fields' }
#### ParticleEmitter .smokeEmitter
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/CrewAnimation/smokeEmitter.md" -->

___
### status
{: #status .lua-content-item aria-label='Fields' }
#### integer .status
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/CrewAnimation/status.md" -->

___
### sub_direction
{: #sub_direction .lua-content-item aria-label='Fields' }
#### integer .sub_direction
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/CrewAnimation/sub_direction.md" -->

___
### target
{: #target .lua-content-item aria-label='Fields' }
#### [Pointf](../Hyperspace/Pointf) .target
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/CrewAnimation/target.md" -->

___
### uniqueBool1
{: #uniqueBool1 .lua-content-item aria-label='Fields' }
#### boolean .uniqueBool1
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/CrewAnimation/uniqueBool1.md" -->

___
### uniqueBool2
{: #uniqueBool2 .lua-content-item aria-label='Fields' }
#### boolean .uniqueBool2
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/CrewAnimation/uniqueBool2.md" -->

___
